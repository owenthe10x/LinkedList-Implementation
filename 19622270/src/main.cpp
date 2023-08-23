#include "LinkedList.hpp"
#include <iostream>

using namespace std;
int main()
{
    cout << "Inisialisasi List 1" << endl;
    LinkedList list1;
    system("pause");
    system("cls");
    cout << "Inisialisasi List 2" << endl;
    LinkedList list2;
    system("pause");
    system("cls");
    cout << "Inisialisasi List 3" << endl;
    LinkedList list3;
    system("pause");
    system("cls");
    LinkedList *list;
    int option, choice, choice2, element, index, index2;
    while (true)
    {
        system("cls");
        cout << "WELCOME!" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete " << endl;
        cout << "3. Update " << endl;
        cout << "4. Concatenate " << endl;
        cout << "5. Split " << endl;
        cout << "6. Sort Ascending" << endl;
        cout << "7. Sort Descending" << endl;
        cout << "8. Reverse " << endl;
        cout << "9. Swap " << endl;
        cout << "10. Clear " << endl;
        cout << "11. Print " << endl;
        cout << "12. Exit" << endl;
        cout << "What do you want to do? (1-12)" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            system("cls");
            cout << "--- LIST INSERTING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            list->print();
            cout << "\nElement you want to insert: ";
            cin >> element;
            cout << "at index: ";
            cin >> index;
            cout << "\nInserting element..." << endl;
            list->insert(index, element);
            list->state();
            break;
        case 2:
            system("cls");
            cout << "--- LIST DELETING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            list->print();
            cout << "\nElement you want to delete (index): ";
            cin >> index;
            cout << "\nDeleting element..." << endl;
            list->eradicate(index);
            list->state();
            break;
        case 3:
            system("cls");
            cout << "--- LIST UPDATING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            list->print();
            cout << "\nIndex you want to update: ";
            cin >> index;
            cout << "New value: ";
            cin >> element;
            cout << "\nUpdating element..." << endl;
            list->update(index, element);
            list->state();
            break;
        case 4:
            system("cls");
            cout << "--- LIST CONCATENATING ---" << endl;
            choices();
            cin >> choice;
            cout << " and ";
            cin >> choice2;
            cout << "\nConcatenating lists..." << endl;
            if (choice == 1)
            {
                list = &list1;
                if (choice2 == 2)
                {
                    list->concatenate(list2, list3);
                    cout << "List 1" << endl;
                    list1.print();
                    cout << endl;
                    cout << "List 2" << endl;
                    list2.print();
                    cout << endl;
                    cout << "List 3" << endl;
                    list3.print();
                    cout << endl;
                }
                else if (choice2 == 3)
                {
                    list->concatenate(list3, list2);
                    cout << "List 1" << endl;
                    list1.print();
                    cout << endl;
                    cout << "List 2" << endl;
                    list2.print();
                    cout << endl;
                    cout << "List 3" << endl;
                    list3.print();
                    cout << endl;
                }
            }
            else if (choice == 2)
            {
                list = &list2;
                if (choice2 == 1)
                {
                    list->concatenate(list1, list3);
                    cout << "List 1" << endl;
                    list1.print();
                    cout << endl;
                    cout << "List 2" << endl;
                    list2.print();
                    cout << endl;
                    cout << "List 3" << endl;
                    list3.print();
                    cout << endl;
                }
                else if (choice2 == 3)
                {
                    list->concatenate(list3, list1);
                    cout << "List 1" << endl;
                    list1.print();
                    cout << endl;
                    cout << "List 2" << endl;
                    list2.print();
                    cout << endl;
                    cout << "List 3" << endl;
                    list3.print();
                    cout << endl;
                }
            }
            else if (choice == 3)
            {
                list = &list2;
                if (choice2 == 1)
                {
                    list->concatenate(list3, list2);
                    cout << "List 1" << endl;
                    list1.print();
                    cout << endl;
                    cout << "List 2" << endl;
                    list2.print();
                    cout << endl;
                    cout << "List 3" << endl;
                    list3.print();
                    cout << endl;
                }
                else if (choice2 == 2)
                {
                    list->concatenate(list2, list1);
                    cout << "List 1" << endl;
                    list1.print();
                    cout << endl;
                    cout << "List 2" << endl;
                    list2.print();
                    cout << endl;
                    cout << "List 3" << endl;
                    list3.print();
                    cout << endl;
                }
            }
            else
            {
                cout << "Enter 1/2/3!" << endl;
            }
            system("pause");
            break;
        case 5:
            system("cls");
            cout << "--- LIST SPLITTING ---" << endl;
            choices();
            cin >> choice;
            if (choice == 1)
            {
                list1.print();
                cout << "\nAt index: ";
                cin >> index;
                cout << "Splitting list..." << endl;
                list1.split(index, list2, list3);
                cout << "List 1" << endl;
                list1.print();
                cout << endl;
                cout << "List 2" << endl;
                list2.print();
                cout << endl;
                cout << "List 3" << endl;
                list3.print();
                cout << endl;
            }
            else if (choice == 2)
            {
                list2.print();
                cout << "\nAt index: ";
                cin >> index;
                cout << "Splitting list..." << endl;
                list2.split(index, list1, list3);
                cout << "List 1" << endl;
                list1.print();
                cout << endl;
                cout << "List 2" << endl;
                list2.print();
                cout << endl;
                cout << "List 3" << endl;
                list3.print();
                cout << endl;
            }
            else if (choice == 3)
            {
                list3.print();
                cout << "\nAt index: ";
                cin >> index;
                cout << "Splitting list..." << endl;
                list3.split(index, list1, list2);
                cout << "List 1" << endl;
                list1.print();
                cout << endl;
                cout << "List 2" << endl;
                list2.print();
                cout << endl;
                cout << "List 3" << endl;
                list3.print();
                cout << endl;
            }
            else
            {
                cout << "Masukkan 1/2/3!" << endl;
                continue;
            }
            system("pause");
            break;
        case 6:
            system("cls");
            cout << "--- LIST ASCEND SORTING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            cout << "Initial State:" << endl;
            list->print();
            cout << "\n\nSorting linked list..." << endl;
            list->sort('A');
            list->state();
            break;
        case 7:
            system("cls");
            cout << "--- LIST DESCEND SORTING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            cout << "Initial State:" << endl;
            list->print();
            cout << "\n\nSorting linked list..." << endl;
            list->sort('D');
            list->state();
            break;
        case 8:
            system("cls");
            cout << "--- LIST REVERSING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            cout << "Initial State:" << endl;
            list->print();
            cout << "\n\nReversing linked list..." << endl;
            list->reverse();
            list->state();
            break;
        case 9:
            system("cls");
            cout << "--- ELEMENTS SWAPPING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            cout << "Initial State:" << endl;
            list->print();
            cout << "\nSwapping element of index: ";
            cin >> index;
            cout << "with index: ";
            cin >> index2;
            cout << "\nSwapping elements..." << endl;
            list->swap(index, index2);
            list->state();
            break;
        case 10:
            system("cls");
            cout << "--- LIST CLEANING ---" << endl;
            choices();
            cin >> choice;
            list = &(choose(list1, list2, list3, choice));
            cout << "\nClearing linked list..." << endl;
            list->clear();
            cout << "List is cleared." << endl;
            system("pause");
            break;
        case 11:
            system("cls");
            cout << "--- LISTS PRINTING ---" << endl;
            cout << "List 1" << endl;
            list1.print();
            cout << endl;
            cout << "List 2" << endl;
            list2.print();
            cout << endl;
            cout << "List 3" << endl;
            list3.print();
            cout << endl;
            system("pause");
            break;
        case 12:
            exit(0);
            break;
        default:
            cout << "Masukkan angka 1-12!" << endl;
            break;
        }
    }
}