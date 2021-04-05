#include <windows.h>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include "list.h"

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

void list::displaylist()
{
    node n(0);
    n.number = 0;
    int x = 0;
    int* ptr = &x;
    //cout << *ptr << endl; 

    node* iterator = head;

    while (iterator != NULL)
    {
        //cout << iterator->number << endl;
        iterator = iterator->next;
    }

}

//int list::timeBegin()
//{
//    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
//}


void list::insertAtFront(int number)
{
    node* newnode = new node(number);

    // make new nodes next point to current head
    newnode->next = head;
    // update who is front of list
    head = newnode;
}

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
    // now we are pointing to the last position
    // so attach new node to it
    iterator->next = newnode;

}

void list::insertAtPosition(int number, int index)
{
    //if list is empty , use insert at front logic
    if (head == NULL)
    {
        insertAtFront(number);
        return; //exits this function early
    }

    //if index exceeds side of list then put at end
    if (index >= count())
    {
        insertAtEnd(number);
    }

    node* newnode = new node(number);

    //move 2 iterators up to index and one previous to that
    node* iterator = head;
    node* previous = head;
    for (int i = 0; i < index; i++)
    {
        previous = iterator;
        iterator = iterator->next;
    }
    // fit new node into the list
    newnode->next = iterator;
    previous->next = newnode;
}

void list::deleteAtFront()
{
    // if list empty nothing to delete
    //if (head == NULL)
        //return;
    

    node* iterator = head;
    // move head up to the next position
    head = head->next;
    //delete old head
    delete iterator;

}

void list::deleteAtEnd()
{
    // if list empty nothing to delete
    //if (head == NULL)
        //return;


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

void list::deleteAtPosition(int index)
{
    // if list empty nothing to delete
    //if (head == NULL)
        //return;

    //if index is at front
    /*if (index == 0)
    {
        deleteAtFront();
        return;
    }*/

    //if index is last node or greater then
 /*   if (index >= count() - 1)
    {
        deleteAtEnd();
        return;
    }*/

    //move 2 iterators up to index and one previous to that
    node* iterator = head;
    node* previous = head;
    for (int i = 0; i < index; i++)
    {
        previous = iterator;
        iterator = iterator->next;
    }
    //detach index node by rewiring the previous nodes next pointer to the one after index
    previous->next = iterator->next;
    //safe to delete node now
    delete iterator;
}
