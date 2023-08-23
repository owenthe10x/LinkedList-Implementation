# Day 2 Assignment 1 Specification

## Description

### Specifications

Explore about **single linked list** data structure. Implement this data structure with C++ using pointers with node's data as integer and node's next as pointer. Also, show some linked list operations using the code you have implemented. These operations must be implemented:

1. Insert at certain index
2. Delete at certain index
3. Change node's data at certain index 
4. Concatenate two linked list into one new linked list, not connecting one list to another but create a new linked list with node's data from one list and another list.
5. Split a linked list into two new linked list at a certain index.
6. Sort the linked list in ascending order.
7. Sort the linked list in descending order.
8. Reverse linked list.
9. Swap values of two nodes with certain indexes.
10. Clear the linked list.
11. Print all node's data sequentially according to the sequence of the linked list.
12. Main menu in CLI that stores three linked lists and can choose no.1-11 to manipulate one of three linked lists.

The program starts by initializing three linked lists based on user's input.

Use **header files** to split between implementation and function declarations.

### Examples

Indexing starts from **zero**.

Insertion at index 2 example:
```
Initial : 1 -> 2 -> 3 -> 5 -> 7
Final   : 1 -> 2 -> 9 -> 3 -> 5 -> 7
```

Deletion at index 4 example:
```
Initial : 1 -> 2 -> 3 -> 9 -> 5 -> 7
Final   : 1 -> 2 -> 3 -> 9 -> 7
```

Change node at index 0 to 10:
```
Initial : 1 -> 2 -> 3 -> 9
Final   : 10 -> 2 -> 3 -> 9
```

Concatenate list 1 and list 2:
```
List 1 : 1 -> 2 -> 3
List 2 : 4 -> 5
Final List 3: 1 -> 2 -> 3 -> 4 -> 5
# If the user chose list 1 and 2 to be concatenated, store the result in list 3 (overwrite list 3)
# User chose list 1 and 3, result stored in list 2 (overwrite list 2)
# User chose list 2 and 3, result stored in list 1 (overwrite list 1)
```

Split list 2 in index 4:

```
List 2 : 1 -> 2 -> 3 -> 5 -> 7 -> 9 -> 11
Final List 1 : 1 -> 2 -> 3 -> 5 -> 7
Final List 3 : 9 -> 11
# Store the result in the other two list (by overwriting the other two list with the results).
```

Sort linked list in ascending order:
```
Initial : 3 -> 2 -> 8 -> 2 -> 5
Final : 2 -> 2 -> 3 -> 5 -> 8
```

Sort linked list in descending order:
```
Initial : 3 -> 2 -> 8 -> 2 -> 5
Final : 8 -> 5 -> 3 -> 2 -> 2
```

Reverse linked list:
```
Initial : 1 -> 2 -> 5 -> 3 -> 7
Final : 7 -> 3 -> 5 -> 2 -> 1
```

Swap values of index 1 and 4:
```
Initial : 1 -> 2 -> 5 -> 3 -> 7
Final : 1 -> 7 -> 5 -> 3 -> 2
```

Clear linked list:
```
Initial : 1 -> 2 -> 5 -> 3 -> 7
Final : EMPTY
```
### Bonus Specifications

These specifications are optional. If you want to challenge yourself, try to implement these. It will help you to understand more about next week lesson.
- Apply **Object Oriented Programming (OOP)** to implement the linked list data structure.
- Use exceptions to validate user's input.


### Illustrations

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

Single Linked List Illustration (GeeksforGeeks)


## Deliverables
1. Fork this repository into your group.
2. Create a `development` branch in the forked repository.
3. Create a folder with your NIM as the folder name and implement your changes in the folder.
4. Create **src**, **bin**, and **doc** folder inside the NIM folder. Use src folder to store the source code, bin folder to store the executable file, and doc folder to store image documentations (screenshots of your running program).
4. Create a README inside the NIM folder to explain your work and how to run it. Also don't forget to follow the documentation format. You can also add the screenshots to your README file.
5. Submit your work after the due date by creating a merge request (MR) to [this repository's master branch]().

## Assessment Criteria
1. Correctness of the implementation.
2. Code cleanliness.
3. Documentations. (whether in the README or comments in the implementation)
4. Git best practices.
