#include "Debug.h"

//https://www.tutorialspoint.com/how-to-convert-std-string-to-lpcwstr-in-cplusplus
void Debug::OutputString(std::string OutputString)
{
	OutputDebugStringA(OutputString.c_str());
}


