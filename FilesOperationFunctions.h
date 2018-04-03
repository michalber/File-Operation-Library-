#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>    // std::min_element, std::max_element

using namespace std;


namespace FileOperation {

	bool ShowFileWithoutWhiteChars_CHAR(string FilePath);
	/*
	Funkcja, kt�ra dostaje jako argumeny �cie�k� dost�pu do pliku tekstowego
	i wypisuje na standardowym wyj�ciu zawarto�� pliku z pomini�ciem bia�ych znak�w

	-wersja dla znak�w typu char
	*/
	bool ShowFileWithoutWhiteChars_WCHAR(string FilePath);
	/*
	Funkcja, kt�ra dostaje jako argumeny �cie�k� dost�pu do pliku tekstowego
	i wypisuje na standardowym wyj�ciu zawarto�� pliku z pomini�ciem bia�ych znak�w

	-wersja dla znak�w typu wchar_t
	*/
	int GetMinimumDigitFromFile(string FilePath);
	/*
	Funkcja, kt�ra dostaje jako argumeny �cie�k� dost�pu do pliku tekstowego
	i zwraca najmniejsz� warto�� liczby zawartej w pliku
	*/
	bool CopyFile(fstream& FileRead, fstream& FileWrite);
	/*
	Funkcja, kt�ra dostaje jako argumeny deskryptory dw�ch plik�w tekstowych (plik do odczytu i zapisu)
	i przepisuje zawarto�� pierwszego pliku do drugiego
	*/
	bool CopyArrayToFile(string FilePath, int** Array,  int ArraySizeA,  int ArraySizeB);
	/*
	Funkcja, kt�ra dostaje jako argumeny �cie�k� dost�pu do pliku tekstowego, dwuwymiarow� tablice tablic
	i rozmiary tej tablicy i zapisuje binarnie zawarto�� tablicy do pliku oraz jej wymiary
	*/
	bool loadArray(string FilePath, int ** Array,  int ArraySizeA,  int ArraySizeB);
	/*
	Funkcja sprawdzaj�ca poprawno�� dzialania fuknkcji CopyArrayToFile. Zapisuje warto�ci odczytane
	z pliku do tablicy Array. (aby sprawdzic poprawne dzialanie trzeba potem ta tablice wyswietlic
	*/
}

