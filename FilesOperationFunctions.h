#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>    // std::min_element, std::max_element
#include <sstream> //sstream auto-includes string.h, so no need to include that too

using namespace std;

/*
Funkcja, kt�ra dostaje jako argumeny �cie�k� dost�pu do pliku tekstowego 
i wypisuje na standardowym wyj�ciu zawarto�� pliku z pomini�ciem bia�ych znak�w

-wersja dla znak�w typu char
*/

void ShowFileWithoutWhiteChars_CHAR(string FilePath);
void ShowFileWithoutWhiteChars_WCHAR(string FilePath);
int GetMinimumDigitFromFile(string FilePath);
void CopyFile(ifstream FileRead, ofstream FileWrite);
