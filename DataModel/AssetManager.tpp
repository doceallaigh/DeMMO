template<typename T>
AssetManager<T>::AssetManager() : generatorMap(std::map<std::string, AssetFactory<T>*>()), liveAssetMap(std::map<std::string, T*>())
{
}

template<typename T>
AssetManager<T>::~AssetManager()
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

template<typename T>
void AssetManager<T>::AddGenerator(std::string extension, AssetFactory<T>* assetFactory)
{
	this->generatorMap.emplace(extension, assetFactory);
}

template<typename T>
T* AssetManager<T>::Generate(std::string fileName)
{
	int extensionIndex = fileName.find_last_of('.');
	std::string extension = fileName.substr(extensionIndex, fileName.length() - extensionIndex);
	return this->generatorMap[extension]->Generate(fileName);
}

template<typename T>
bool AssetManager<T>::TryAddLiveAsset(std::string fileName, T* asset)
{
	if (this->liveAssetMap[fileName])
	{
		return false;
	}

	this->liveAssetMap[fileName] = asset;
	return true;
}