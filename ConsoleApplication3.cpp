// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	for(int i = 1; i < 5; i++)
	{
		int a, b, c;
		cout << "Enter the integers" << endl;
		cin >> a >> b;
		if (a == 0 || a == 1 && b == 0 || b == 1)
		{
			int select;
			cout << "COMPUTER LOGICS CALCULATOR : " << endl
				<< "Main menu. Enter the operation :" << endl
				<< "1. Conjuction" << endl
				<< "2. Disjunction" << endl
				<< "3. Negation" << endl
				<< "4. Exclusive Conjuction" << endl
				<< "5. Exclusive Disjunction" << endl
				<< "6. Equality" << endl;
			cin >> select;
			switch (select) {
			case 1:
				c = a & b;
				cout << "Result : " << c << endl;
				break;
			case 2:
				c = a | b;
				cout << "Result : " << c << endl;
				break;
			case 3:
				cout << "Choose the integer" << endl;
				int select1;
				cin >> select1;
				if (select1 == 1) {
					c = !a;
					cout << "Result : " << c << endl;
					break;
				}
				else if (select1 == 2) {
					c = !b;
					cout << "Result : " << c << endl;
					break;
				}
				else break;
			case 4:
				c = !(a | b);
				cout << "Result : " << c << endl;
				break;
			case 5:
				c = !(a & b);
				cout << "Result : " << c << endl;
				break;
			case 6:
				c = (a == b);
				cout << "Result : " << c << endl;
				break;
			default:
				cout << "Error !!! You have chosen the wrong operation" << endl;
				break;
			}
		}
		else {
			cout << "You have entered the wrong value" << endl;
		}
	} 
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
