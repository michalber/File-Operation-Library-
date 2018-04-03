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
	Funkcja, która dostaje jako argumeny œcie¿kê dostêpu do pliku tekstowego
	i wypisuje na standardowym wyjœciu zawartoœæ pliku z pominiêciem bia³ych znaków

	-wersja dla znaków typu char
	*/
	bool ShowFileWithoutWhiteChars_WCHAR(string FilePath);
	/*
	Funkcja, która dostaje jako argumeny œcie¿kê dostêpu do pliku tekstowego
	i wypisuje na standardowym wyjœciu zawartoœæ pliku z pominiêciem bia³ych znaków

	-wersja dla znaków typu wchar_t
	*/
	int GetMinimumDigitFromFile(string FilePath);
	/*
	Funkcja, która dostaje jako argumeny œcie¿kê dostêpu do pliku tekstowego
	i zwraca najmniejsz¹ wartoœæ liczby zawartej w pliku
	*/
	bool CopyFile(fstream& FileRead, fstream& FileWrite);
	/*
	Funkcja, która dostaje jako argumeny deskryptory dwóch plików tekstowych (plik do odczytu i zapisu)
	i przepisuje zawartoœæ pierwszego pliku do drugiego
	*/
	bool CopyArrayToFile(string FilePath, int** Array,  int ArraySizeA,  int ArraySizeB);
	/*
	Funkcja, która dostaje jako argumeny œcie¿kê dostêpu do pliku tekstowego, dwuwymiarow¹ tablice tablic
	i rozmiary tej tablicy i zapisuje binarnie zawartoœæ tablicy do pliku oraz jej wymiary
	*/
	bool loadArray(string FilePath, int ** Array,  int ArraySizeA,  int ArraySizeB);
	/*
	Funkcja sprawdzaj¹ca poprawnoœæ dzialania fuknkcji CopyArrayToFile. Zapisuje wartoœci odczytane
	z pliku do tablicy Array. (aby sprawdzic poprawne dzialanie trzeba potem ta tablice wyswietlic
	*/
}

