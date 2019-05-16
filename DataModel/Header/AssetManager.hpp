#pragma once
#include <string>
#include <map>

#include "../Header/AssetFactory.hpp"

template<typename TGen, typename TAsset>
class AssetManager
{
public:
	AssetManager();
	~AssetManager();
	void AddGenerator(std::string extension, TGen* assetFactory);
	TAsset* Generate(std::string fileName);
protected:
	virtual bool TryAddLiveAsset(std::string fileName, TAsset* asset);
private:
	std::map<std::string, TGen*> generatorMap;
	std::map<std::string, TAsset*> liveAssetMap;
};

#include "../Template/AssetManager.ipp"