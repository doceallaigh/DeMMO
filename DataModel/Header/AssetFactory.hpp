#pragma once

template<typename T>
class AssetFactory
{
public:
	T* Generate(std::string fileName);
};