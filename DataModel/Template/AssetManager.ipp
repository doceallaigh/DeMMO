#pragma once
#include <string>

template<typename TAsset>
AssetManager<TAsset>::AssetManager() : generatorMap(std::map<std::string, TAsset* (*)(std::string)>()), liveAssetMap(std::map<std::string, TAsset*>())
{
}

template<typename TAsset>
AssetManager<TAsset>::~AssetManager()
{
	for (auto kvp : this->liveAssetMap)
	{
		delete kvp.second;
	}
}

template<typename TAsset>
void AssetManager<TAsset>::AddGenerator(std::string extension, TAsset* (*assetGenerator)(std::string fileName))
{
	this->generatorMap.emplace(extension, assetGenerator);
}

template<typename TAsset>
TAsset* AssetManager<TAsset>::Generate(std::string fileName)
{
	int extensionIndex = fileName.find_last_of('.');
	std::string extension = fileName.substr(extensionIndex, fileName.length() - extensionIndex);
	return this->generatorMap[extension](fileName);
}

template<typename TAsset>
bool AssetManager<TAsset>::TryAddLiveAsset(std::string fileName, TAsset* asset)
{
	if (this->liveAssetMap[fileName])
	{
		return false;
	}

	this->liveAssetMap[fileName] = asset;
	return true;
}