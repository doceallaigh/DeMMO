#pragma once
#include <string>

template<typename TGen, typename TAsset>
AssetManager<TGen, TAsset>::AssetManager() : generatorMap(std::map<std::string, TGen*>()), liveAssetMap(std::map<std::string, TAsset*>())
{
}

template<typename TGen, typename TAsset>
AssetManager<TGen, TAsset>::~AssetManager()
{
	for (auto kvp : this->generatorMap)
	{
		delete kvp.second;
	}

	for (auto kvp : this->liveAssetMap)
	{
		delete kvp.second;
	}
}

template<typename TGen, typename TAsset>
void AssetManager<TGen, TAsset>::AddGenerator(std::string extension, TGen* assetFactory)
{
	this->generatorMap.emplace(extension, assetFactory);
}

template<typename TGen, typename TAsset>
TAsset* AssetManager<TGen, TAsset>::Generate(std::string fileName)
{
	int extensionIndex = fileName.find_last_of('.');
	std::string extension = fileName.substr(extensionIndex, fileName.length() - extensionIndex);
	return this->generatorMap[extension]->Generate(fileName);
}

template<typename TGen, typename TAsset>
bool AssetManager<TGen, TAsset>::TryAddLiveAsset(std::string fileName, TAsset* asset)
{
	if (this->liveAssetMap[fileName])
	{
		return false;
	}

	this->liveAssetMap[fileName] = asset;
	return true;
}