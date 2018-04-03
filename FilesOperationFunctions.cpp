#include "FilesOperationFunctions.h"


bool FileOperation::ShowFileWithoutWhiteChars_CHAR(string FilePath)
{
	ifstream File(FilePath);
	char FileChar;

	if (File.is_open())
	{
		while (File.get(FileChar))
		{
			if (isspace(FileChar))		//sprawdzenie czy spacja
			{ 
				continue; //nic nie r�b
			}
			else
				cout << FileChar;
		}
		File.close();
		return true;
	}
	else {
		cout << "ERROR IN LOADING FILE" << endl;
		return false;
	}
}

bool FileOperation::ShowFileWithoutWhiteChars_WCHAR(string FilePath)
{
	wifstream File(FilePath);
	wchar_t FileChar;

	if (File.is_open())
	{
		while (File.get(FileChar))
		{
			if (isspace(FileChar))		//sprawdzenie czy spacja
			{
				continue; //nic nie r�b
			}
			else
				cout << FileChar;
		}
		File.close();
		return true;
	}
	else {
		cout << "ERROR IN LOADING FILE" << endl;
		return false;
	}
}

int FileOperation::GetMinimumDigitFromFile(string FilePath)
{
	ifstream File(FilePath);
	vector<int> Numbers;
	string CharContainer;
	char FileChar;
	signed int NumberBuffer;
	int MinimalNumber = NULL;


	if (File.is_open()) {

		while (File.get(FileChar))	// odczyt znaku
		{

			if (isspace(FileChar))	// jezeli znak jest znakiem bia�ym to:
			{
				NumberBuffer = atoi(CharContainer.c_str());		//je�eli po liczbie wystapi znak bia�y to ko�czymy wpisywanie cyfry
				Numbers.push_back(NumberBuffer);				//wpisujemy t� liczbe do wektora przechowuj�cego zczytane liczby
				if (CharContainer.size() > 0)					
					CharContainer.erase();						//jezeli pojemnik stringa jest pe�ny to go czy�cimy 
			}
			else
				CharContainer.push_back(FileChar);	//wpisanie do stringa przechowuj�cego liczbe
		}
		File.close();
	}
	else {
		cout << "ERROR IN LOADING FILE" << endl;
		return NAN;
	}

	MinimalNumber = *min_element(begin(Numbers), end(Numbers));	//zwrocenie najmniejszej liczby z vectora 

	return MinimalNumber;
}

bool FileOperation::CopyFile(fstream& FileRead, fstream& FileWrite)
{
	string line;

	if (FileRead.is_open() && FileWrite.is_open()) {
		while (getline(FileRead, line))
			FileWrite << line << endl;
		return true;
	}
	else {
		cout << "ERROR IN LOADING FILE" << endl;
		return false;
	}
}

bool FileOperation::CopyArrayToFile(string FilePath, int** Array, const int ArraySizeA, const int ArraySizeB)
{
	fstream File(FilePath, ios::out | ios::binary);

	if (File.is_open()) {
		
		for (int i = 0;i < ArraySizeA;i++) {
			for (int j = 0;j < ArraySizeA;j++) {
				File.write(reinterpret_cast<char*>(&Array[i][j]), sizeof(int));
			}
		}
		File.close();
		return true;
	}
	else {
		cout << "ERROR IN LOADING FILE" << endl;
		return false;
	}
}

bool FileOperation::loadArray(string FilePath, int** Array, const int ArraySizeA, const int ArraySizeB)
{
	std::ifstream File(FilePath, std::ios::binary | std::ios::in);
	if (!File.is_open())
		return false;
	else {

		for (int i = 0;i < ArraySizeA;i++) {
			for (int j = 0;j < ArraySizeA;j++) {
				File.read(reinterpret_cast<char*>(&Array[i][j]), sizeof(int));
			}
		}
		File.close();
	}
	return true;
}
