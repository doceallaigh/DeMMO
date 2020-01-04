#pragma once
#include <string>
#include <map>

template<typename TAsset>
class AssetManager
{
public:
	AssetManager();
	~AssetManager();
	void AddGenerator(std::string extension, std::shared_ptr<TAsset>(*assetGenerator)(std::string fileName));
	std::shared_ptr<TAsset> Generate(std::string fileName);
protected:
	virtual bool TryAddLiveAsset(std::string fileName, std::shared_ptr<TAsset> asset);
private:
	std::map<std::string, std::shared_ptr<TAsset> (*)(std::string)> generatorMap;
	std::map<std::string, std::shared_ptr<TAsset>> liveAssetMap;
};

#include "../Template/AssetManager.tpp"