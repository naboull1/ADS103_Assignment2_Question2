#include <windows.h>								//Library for controling windows functions
#include <fstream>									//Library for File System control
#include <chrono>									//Library for Time Control
#include <cstdlib>
#include <ctime>
#include "list.h"


//Function that provides a count of the number of items in the items list
int list::count()
{
    int counter = 0;
    node* iterator = head;
    while (iterator != NULL)
    {
        iterator = iterator->next;
        counter++;
    }
    return counter;
}


//Function that cycles through the list of(removed cout from this function)
void list::displaylist()
{
    node n(0);
    n.number = 0;
    int x = 0;
    int* ptr = &x;

    node* iterator = head;

    while (iterator != NULL)
    {
        iterator = iterator->next;
    }
}

//Function that inserts a number at the front of the list
void list::insertAtFront(int number)
{
    node* newnode = new node(number);
    newnode->next = head;
    head = newnode;
}


//Function that inserts a number at the End of the list
void list::insertAtEnd(int number)
{
    //if list is empty , use insert at front logic
    if (head == NULL)
    {
        insertAtFront(number);
        return; //exits this function early
    }

    node* newnode = new node(number);

    //setup iterator and move it to final thing in list
    node* iterator = head;

    while (iterator->next != NULL)
    {
        iterator = iterator->next;
    }
    //position of iterator is now set. next line adds number to list
    iterator->next = newnode;
}


void list::deleteAtFront()
{

    node* iterator = head;
    // move head up to the next position
    head = head->next;
    //delete old head
    delete iterator;

}

void list::deleteAtEnd()
{
    //if list empty nothing to delete
    if (head == NULL)
        return;


    node* iterator = head;
    node* previous = head;


    while (iterator->next != NULL)
    {
        previous = iterator;
        iterator = iterator->next;
    }


    //detach back
    previous->next = NULL;


    //delete lastnode in list in ram
    delete iterator;
}
