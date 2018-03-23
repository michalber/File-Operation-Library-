#include "FilesOperationFunctions.h"

void ShowFileWithoutWhiteChars_CHAR(string FilePath)
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
	}
	else {
		cout << "ERROR IN LOADING FILE" << endl;
	}
}

void ShowFileWithoutWhiteChars_WCHAR(string FilePath)
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
	}
	else {
		cout << "ERROR IN LOADING FILE" << endl;
	}
}

int GetMinimumDigitFromFile(string FilePath)
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

