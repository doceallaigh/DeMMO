#pragma once
#include <string>
#include <map>

template<typename TAsset>
class AssetManager
{
public:
	AssetManager();
	~AssetManager();
	void AddGenerator(std::string extension, TAsset* (*assetGenerator)(std::string fileName));
	TAsset* Generate(std::string fileName);
protected:
	virtual bool TryAddLiveAsset(std::string fileName, TAsset* asset);
private:
	std::map<std::string, TAsset* (*)(std::string)> generatorMap;
	std::map<std::string, TAsset*> liveAssetMap;
};

#include "../Template/AssetManager.ipp"