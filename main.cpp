/// Luaay Naboulsi
/// ADS103 Algorithmsand Data Structures
/// Assessment 2 Question 2

#include <iostream>
#include <string>
#include <windows.h>								//Library for controling windows functions
#include <fstream>									//Library for File System control
#include <chrono>									//Library for Time Control
#include <cstdlib>
#include <ctime>
#include "list.h"

using namespace std;


//Main Master Code
void main() 
{
	//Declaration of Variables
	int firstLineVariable;

	//Reads in textfile and stores information into Variables
	ifstream readFile;
	readFile.open("input-a1q2.txt");
	readFile >> firstLineVariable;

	//Generate Random Number and store in a variable
	srand((unsigned)time(0));
	int randomNumber = rand();






	//Line 1: time taken by insertAtBeginning
	
	//create list
	list list1;

	//start time 
	chrono::steady_clock::time_point begin = chrono::steady_clock::now();


	//inseration to number received from input file
	for (int i = 0; i < firstLineVariable; i++)
	{
		list1.insertAtFront(randomNumber);
	}


	//end time and output MS
	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end - begin).count() << "[ms]" << endl;
	







	//Line 2: time taken by insertAtEnd 

	//create list
	list list2;

	//start time 
	chrono::steady_clock::time_point begin2 = chrono::steady_clock::now();


	//inseration to number received from input file
	for (int i = 0; i < firstLineVariable; i++)
	{
		list2.insertAtEnd(randomNumber);
	}


	//end time and output MS
	chrono::steady_clock::time_point end2 = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end2 - begin2).count() << "[ms]" << endl;





	//Line 3: time taken by deleteFromBeginning

	//start time 
	chrono::steady_clock::time_point begin3 = chrono::steady_clock::now();


	//delete numbers in list from front
	for (int i = 0; i < firstLineVariable; i++)
	{
		list1.deleteAtFront();
	}


	//end time and output MS
	chrono::steady_clock::time_point end3 = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end3 - begin3).count() << "[ms]" << endl;







	//Line 4: time taken by deleteFromEnd

	//start time 
	chrono::steady_clock::time_point begin4 = chrono::steady_clock::now();


	//delete numbers in list from back
	for (int i = 0; i < firstLineVariable; i++)
	{
		list2.deleteAtEnd();
	}


	//end time and output MS
	chrono::steady_clock::time_point end4 = chrono::steady_clock::now();
	cout << "Milliseconds = " << chrono::duration_cast<chrono::milliseconds>(end4 - begin4).count() << "[ms]" << endl;



	system("pause");
}