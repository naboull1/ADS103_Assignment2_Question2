/// Luaay Naboulsi
/// ADS103 Algorithmsand Data Structures
/// Assessment 2 Question 2

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include "list.h"

using namespace std;

void main() 
{
	//Declaring reading and passing line in text file to a variable
	ifstream readFile;
	int firstLineVariable;
	readFile.open("input-a1q2.txt");
	readFile >> firstLineVariable;

	//generating random number and assigning it to a variable
	srand((unsigned)time(0));
	int randomNumber = rand();

	//Creating a link list 
	list list1;

	chrono::steady_clock::time_point begin = chrono::steady_clock::now();
	for (int i = 0; i < firstLineVariable; i++)
	{
		list1.insertAtFront(randomNumber);
	}
	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end - begin).count() << "[ms]" << endl;
	

	list list2;

	chrono::steady_clock::time_point begin2 = chrono::steady_clock::now();
	for (int i = 0; i < firstLineVariable; i++)
	{
		list2.insertAtFront(randomNumber);
	}
	chrono::steady_clock::time_point end2 = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end2 - begin2).count() << "[ms]" << endl;







	chrono::steady_clock::time_point begin3 = chrono::steady_clock::now();
	for (int i = 0; i < firstLineVariable; i++)
	{
		list1.deleteAtFront();
	}
	chrono::steady_clock::time_point end3 = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end3 - begin3).count() << "[ms]" << endl;




	chrono::steady_clock::time_point begin4 = chrono::steady_clock::now();
	for (int i = 0; i < firstLineVariable; i++)
	{
		list2.deleteAtEnd();
	}
	chrono::steady_clock::time_point end4 = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end4 - begin4).count() << "[ms]" << endl;



	system("pause");
}