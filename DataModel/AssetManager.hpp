#pragma once
#include <string>
#include <map>

#include "AssetFactory.hpp"

template<typename T>
class AssetManager 
{
public:
	AssetManager();
	~AssetManager();
	void AddGenerator(std::string extension, AssetFactory<T>* assetFactory);
	T* Generate(std::string fileName);
protected:
	virtual bool TryAddLiveAsset(std::string fileName, T* asset);
private:
	std::map<std::string, AssetFactory<T>*> generatorMap;
	std::map<std::string, T*> liveAssetMap;
};

#include "AssetManager.tpp"