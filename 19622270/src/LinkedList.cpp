#include "Linkedlist.hpp"

// constructor
LinkedList::LinkedList()
{
    this->head = NULL;
    int nilai;
    int counter = 0;
    cout << "Type -9999 to stop the input." << endl;
    while (true)
    {
        cin >> nilai;
        if (nilai == -9999)
        {
            break;
        }
        else
        {
            append(nilai);
        }
        system("cls");
        cout << "Enter the element:" << endl;
        print();
        cout << " -> ";
    }
}

// copy constructor
LinkedList::LinkedList(const LinkedList &other)
{
    this->head = nullptr;
    Node *current = other.head;
    while (current != nullptr)
    {
        append(current->data);
        current = current->next;
    }
}

// destructor
LinkedList::~LinkedList()
{
    Node *current = head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
}

Node *LinkedList::getNode(int index)
{
    int counter = 0;
    Node *current = this->head;

    while (current != NULL && counter < index)
    {
        current = current->next;
        counter++;
    }
    return current;
}

void LinkedList::append(int value)
{
    Node *new_node = new Node(value);
    if (this->head == NULL)
    {
        this->head = new_node;
    }
    else
    {
        Node *current = this->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
}

void LinkedList::insert(int index, int data)
{
    Node *newNode = new Node(data);

    if (this->head == NULL)
    {
        if (index == 0)
        {
            this->head = newNode;
        }
        else
        {
            cout << "Invalid index." << endl;
            return;
        }
    }
    else if (index == 0)
    {
        newNode->next = this->head;
        this->head = newNode;
    }
    else
    {
        Node *current = this->head;
        int count = 0;

        while (current != NULL && count < index - 1)
        {
            current = current->next;
            count++;
        }

        if (current == NULL)
        {
            cout << "Invalid index." << endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }
}

void LinkedList::print()
{
    Node *current = this->head;
    while (current != NULL)
    {
        cout << current->data;
        if (current->next != NULL)
        {
            cout << " -> ";
        }
        current = current->next;
    }
}

void LinkedList::eradicate(int index)
{
    int counter = 0;
    Node *current = this->head;
    Node *temp;
    if (counter == index)
    {
        delete current;
    }
    else
    {
        while (counter < index - 1)
        {
            current = current->next;
            counter++;
        }
        temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}
void LinkedList::update(int index, int value)
{
    int counter = 0;
    Node *current = this->head;
    if (counter == index)
    {
        current->data = value;
    }
    else
    {
        current = getNode(index);
        current->data = value;
    }
}

void LinkedList::swap(int index1, int index2)
{
    if (this->head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *node1 = getNode(index1);
    Node *node2 = getNode(index2);

    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}
void LinkedList::clear()
{
    Node *current = this->head;
    while (current != NULL)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }
    this->head = NULL;
}
void LinkedList::split(int index, LinkedList &listA, LinkedList &listB)
{
    Node *current = head;
    int count = 0;
    listA.clear();
    listB.clear();
    while (current != nullptr && count <= index)
    {
        listA.append(current->data);
        current = current->next;
        count++;
    }
    while (current != nullptr)
    {
        listB.append(current->data);
        current = current->next;
    }
}

void LinkedList::concatenate(LinkedList &list, LinkedList &result)
{
    // Insert elements from list1 into result
    Node *current = this->head;
    result.clear();
    while (current != NULL)
    {
        result.append(current->data);
        current = current->next;
    }

    // Insert elements from list2 into result
    current = list.head;
    while (current != NULL)
    {
        result.append(current->data);
        current = current->next;
    }
}

void LinkedList::sort(char type)
{
    if (this->head == NULL)
    {
        cout << "List kosong." << endl;
    }
    else
    {
        Node *current = this->head;
        Node *prev = NULL;
        Node *next = NULL;
        int count = 0;

        while (current != NULL)
        {
            count++;
            current = current->next;
        }

        for (int i = 0; i < count; i++)
        {
            current = this->head;
            prev = NULL;

            while (current != NULL && current->next != NULL)
            {
                next = current->next;
                if (type == 'A')
                {
                    if (current->data > next->data)
                    {
                        if (prev == NULL)
                        {
                            this->head = next;
                        }
                        else
                        {
                            prev->next = next;
                        }
                        current->next = next->next;
                        next->next = current;
                        prev = next;
                    }
                    else
                    {
                        prev = current;
                        current = current->next;
                    }
                }
                else if (type == 'D')
                {
                    if (current->data < next->data)
                    {
                        if (prev == NULL)
                        {
                            this->head = next;
                        }
                        else
                        {
                            prev->next = next;
                        }
                        current->next = next->next;
                        next->next = current;
                        prev = next;
                    }
                    else
                    {
                        prev = current;
                        current = current->next;
                    }
                }
            }
        }
    }
}
void LinkedList::reverse()
{
    if (this->head == NULL)
    {
        cout << "List kosong." << endl;
    }
    else
    {
        Node *current = this->head;
        Node *prev = NULL;
        Node *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        this->head = prev;
    }
}

void LinkedList::state()
{
    cout << "Final State:" << endl;
    print();
    cout << endl;
    system("pause");
}

LinkedList &choose(LinkedList &list1, LinkedList &list2, LinkedList &list3, int choice)
{
    switch (choice)
    {
    case 1:
        return list1;
    case 2:
        return list2;
    case 3:
        return list3;
    default:
        // handle invalid choice
        cout << "Invalid choice: " << choice << endl;
        exit(1);
    }
}
void choices()
{
    cout << "Available lists: " << endl;
    cout << "list 1 | list 2 | list 3" << endl;
    cout << "Which list do you wanna use?(1/2/3)" << endl;
}