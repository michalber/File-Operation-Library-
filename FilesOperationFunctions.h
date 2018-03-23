#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>    // std::min_element, std::max_element
#include <sstream> //sstream auto-includes string.h, so no need to include that too

using namespace std;

/*
Funkcja, która dostaje jako argumeny œcie¿kê dostêpu do pliku tekstowego 
i wypisuje na standardowym wyjœciu zawartoœæ pliku z pominiêciem bia³ych znaków

-wersja dla znaków typu char
*/

void ShowFileWithoutWhiteChars_CHAR(string FilePath);
void ShowFileWithoutWhiteChars_WCHAR(string FilePath);
int GetMinimumDigitFromFile(string FilePath);
void CopyFile(ifstream FileRead, ofstream FileWrite);
