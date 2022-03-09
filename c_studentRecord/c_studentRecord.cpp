
#include <iostream>

using namespace std;

#define	NAME_SIZE		32
#define	ADDRESS_SIZE	128
#define PHONE_SIZE		14

#define	STUDENT_MAX		10


struct _tagStudent
{
	char	strName[NAME_SIZE];
	char	strAddress[ADDRESS_SIZE];
	char	strPhoneNumber[PHONE_SIZE];
	int		iNumber;
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAvg; 
};

enum MENU
{
	MENU_NONE,
	MENU_INSERT,
	MENU_DELETE,
	MENU_SEARCH,
	MENU_OUTPUT,
	MENU_EXIT
};

int main()
{
	_tagStudent tStudentArr[STUDENT_MAX] = {};
	// Array length
	int	iStudentCount = 0;
	int iStdNumber = 1;

	char strName[NAME_SIZE] = {};

	while (true)
	{
		system("cls");
		
		// output Menu.
		cout << "1. Add Student" << endl;
		cout << "2. Delete Student" << endl;
		cout << "3. Search Student" << endl;
		cout << "4. Output Student" << endl;
		cout << "5. Exit" << endl;
		cout << "Please select a menu : ";
		int iMenu;
		cin >> iMenu;
		
		// input check
		// 1. error check. if error, cin.fail() return true.
		if (cin.fail())
		{
			// Empty error buffer.
			cin.clear();

			// Delete \n in input buffer.
			cin.ignore(1024, '\n');
			continue;
		}

		if (iMenu == MENU_EXIT)
			break;

		switch (iMenu)
		{
		case MENU_INSERT:
			system("cls");
			cout << "=============== Add Student ===============" << endl;
			// Check limit.
			if (iStudentCount == STUDENT_MAX)
				break;

			// Input student info.
			cout << "Name : ";
			cin >> tStudentArr[iStudentCount].strName; 

			cin.ignore(1024, '\n');

			cout << "Address : ";
			cin.getline(tStudentArr[iStudentCount].strAddress, ADDRESS_SIZE);

			cout << "Phone number : ";
			cin.getline(tStudentArr[iStudentCount].strPhoneNumber, PHONE_SIZE);

			cout << "Korean :";
			cin >> tStudentArr[iStudentCount].iKor;

			cout << "English :";
			cin >> tStudentArr[iStudentCount].iEng;

			cout << "Math :";
			cin >> tStudentArr[iStudentCount].iMath;

			tStudentArr[iStudentCount].iTotal =
				tStudentArr[iStudentCount].iKor +
				tStudentArr[iStudentCount].iEng +
				tStudentArr[iStudentCount].iMath;
			tStudentArr[iStudentCount].fAvg =
				tStudentArr[iStudentCount].iTotal / 3.f;  

			tStudentArr[iStudentCount].iNumber = iStdNumber;

			++iStdNumber;
			++iStudentCount;

			cout << " Complete adding " << endl;

			break;
		case MENU_DELETE:
			break;
		case MENU_SEARCH:
			system("cls");

			cout << "=============== Search Student ===============" << endl;

			
			cin.ignore(1024, '\n');
			cout << "Input searching name : ";
			cin.getline(strName, NAME_SIZE);

			for (int i = 0; i < iStudentCount; ++i)
			{
				if (strcmp(tStudentArr[i].strName, strName) == 0)
				{
					cout << "Name : " << tStudentArr[i].strName << endl;
					cout << "Phone Number : " << tStudentArr[i].strPhoneNumber << endl;
					cout << "Student Number : " << tStudentArr[i].iNumber << endl;
					cout << "Korean : " << tStudentArr[i].iKor << endl;
					cout << "English : " << tStudentArr[i].iEng << endl;
					cout << "Math : " << tStudentArr[i].iMath << endl;
					cout << "Total : " << tStudentArr[i].iTotal << endl;
					cout << "Average : " << tStudentArr[i].fAvg << endl << endl;
					break;
				}
			}
			break;
		case MENU_OUTPUT:
			system("cls");
			cout << "=============== Output Student ===============" << endl;
			
			for (int i = 0; i < iStudentCount; ++i)
			{
				cout << "Name : " << tStudentArr[i].strName << endl;
				cout << "Phone Number : " << tStudentArr[i].strPhoneNumber << endl;
				cout << "Student Number : " << tStudentArr[i].iNumber << endl;
				cout << "Korean : " << tStudentArr[i].iKor << endl;
				cout << "English : " << tStudentArr[i].iEng << endl;
				cout << "Math : " << tStudentArr[i].iMath << endl;
				cout << "Total : " << tStudentArr[i].iTotal << endl;
				cout << "Average : " << tStudentArr[i].fAvg << endl << endl;
			}
			break;
		default:
			cout << "You chose the wrong menu." << endl;
			break;
		}

		system("pause");
	}

	return 0;
}