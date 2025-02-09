#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <Windows.h>
#include "TextureConverter.h"

enum Argument {
	kApplicationPayh,
	kFilePath,

	NumArgument
};

int main(int argc, char* argv[]) {
	assert(argc >= NumArgument);

	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	TextureConverter converter;
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	CoUninitialize();


	/// 02_03 ///
	/*for (int i = 0; i < argc; i++) {
		printf(argv[i]);
		printf("\n");
	}*/
	/// 02_02 ///
	/*printf("Hello,World!\n");*/


	system("pause");
	return 0;
}