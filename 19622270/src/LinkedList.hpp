#ifndef __LINKEDLIST__HPP__
#define __LINKEDLIST__HPP__
#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    // ctor
    LinkedList();

    // cctor
    LinkedList(const LinkedList &);

    // dtor
    ~LinkedList();

    // Getters
    Node *getNode(int);

    // Others
    void append(int);
    void insert(int, int);
    void print();
    void eradicate(int);
    void update(int, int);
    void swap(int, int);
    void split(int, LinkedList& list1, LinkedList& list2);
    void concatenate(LinkedList &list, LinkedList &result);
    void sort(char);
    void reverse();
    void clear();
    void state();
};

void choices();

LinkedList &choose(LinkedList &list1, LinkedList &list2, LinkedList &list3, int);

#endif
