#pragma once
#include <string>

template<typename TAsset>
AssetManager<TAsset>::AssetManager() : generatorMap(std::map<std::string, std::shared_ptr<TAsset> (*)(std::string)>()), liveAssetMap(std::map<std::string, std::shared_ptr<TAsset>>())
{
}

template<typename TAsset>
AssetManager<TAsset>::~AssetManager()
{
}

template<typename TAsset>
void AssetManager<TAsset>::AddGenerator(std::string extension, std::shared_ptr<TAsset> (*assetGenerator)(std::string fileName))
{
	this->generatorMap.emplace(extension, assetGenerator);
}

template<typename TAsset>
std::shared_ptr<TAsset> AssetManager<TAsset>::Generate(std::string fileName)
{
	int extensionIndex = fileName.find_last_of('.');
	std::string extension = fileName.substr(extensionIndex, fileName.length() - extensionIndex);
	return this->generatorMap[extension](fileName);
}

template<typename TAsset>
bool AssetManager<TAsset>::TryAddLiveAsset(std::string fileName, std::shared_ptr<TAsset> asset)
{
	if (this->liveAssetMap[fileName])
	{
		return false;
	}

	this->liveAssetMap[fileName] = asset;
	return true;
}