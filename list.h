#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include "node.h"

using namespace std;



class list
{
public:
	// points to front of our linked list
	node* head = NULL;

	int count();
	void displaylist();
	int timeBegin();
	int timeEnd();
	int timeCount(int begin, int end);

	void insertAtFront(int number);
	void insertAtEnd(int number);
	void insertAtPosition(int number, int index);

	void deleteAtFront();
	void deleteAtEnd();
	void deleteAtPosition(int index);


};

