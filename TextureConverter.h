#pragma once
#include <string>
#include "DirectXTex/DirectXTex.h"

class TextureConverter
{
public:
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	void LoadWICTextureFromFile(const std::string& filePath);

private:
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

private:
	DirectX::TexMetadata metadata_;
	DirectX::ScratchImage scratchImage_;

private:
	void SeparateFilePath(const std::wstring& filePath);

private:
	std::wstring directoryPath_;
	std::wstring fileName_;
	std::wstring fileExt_;

private:
	void SaveDDSTextureToFile();
};