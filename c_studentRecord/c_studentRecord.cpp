
#include <iostream>

using namespace std;

#define NAME_SIZE 32
#define STUDENT_MAX 10

struct _tagStudent
{
	char strName[NAME_SIZE];
	int iNumber;
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float fAvg; 
};

enum MENU
{
	MENU_NON,
	MENU_INSERT,
	MENU_DELETE,
	MENU_SEARCH,
	MENU_OUTPUT,
	MENU_EXIT
};

int main()
{
	_tagStudent tStudentArr[STUDENT_MAX] = {};

	while (true)
	{
		system("cls");
		
		// output Menu.
		cout << "1. Add student" << endl;
		cout << "2. Delete Student" << endl;
		cout << "3. Search Student" << endl;
		cout << "4. Output Student" << endl;
		cout << "5. Exit" << endl;
		cout << "Please select a menu : ";
		int iMenu;
		cin >> iMenu;

		if (iMenu == MENU_EXIT)
			break;

		switch (iMenu)
		{
		case MENU_INSERT:
			break;
		case MENU_DELETE:
			break;
		case MENU_SEARCH:
			break;
		case MENU_OUTPUT:
			break;
		default:
			cout << "You chose the wrong menu." << endl;
			break;
		}

		system("pause");
	}

	return 0;
}