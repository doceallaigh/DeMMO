#pragma once

template<typename T>
class AssetFactory
{
public:
	virtual T* Generate(std::string fileName) = 0;
};
