#pragma once
#include <iostream>
#include <string>



using namespace std;


class node
{
public:
	// data of node
	int number;

	//pointer to next node
	node* next;

	//constructiors
	node();
	node(int number);

};

