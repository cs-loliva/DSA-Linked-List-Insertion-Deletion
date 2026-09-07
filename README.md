# DSA-Linked-List-Insertion-Deletion
**CSDC103 Data Structures & Algorithms** 

Department of Computer Science, College of Computer Studies, Ateneo de Naga University 

# **LABORATORY EXERCISE #02 Linked List Insertion & Deletion** 

Input: Standard Output: Standard 

## **PROBLEM DESCRIPTION** 

Modify the singly linked list code shared with the class to perform the following operations: 

1. Insertion – Add a new node at the beginning of the list. 

2. Deletion – Remove the node at the beginning of the list. 

## **INPUT FORMAT** 

Input consists of a series of _N_ space-separated character-integer pairs _ci ni_ , where _ci_ is the command and _ni_ is an integer value associated with the command. If the command does not require _ni_ , it is still supplied but is ignored. 

## **CONSTRAINTS** 

- _1 <= N <= 10_<sup>_3_</sup> _-100 <= ni <= 100_ 

_1 <= i <= N_ 

_For ci, the current valid commands are as follows:_ 

- _i for insertion_ 

_d for deletion_ 

## **OUTPUT FORMAT** 

For each _c n_ pair, display the number of nodes present on the list enclosed in brackets followed by the current content of the list. If c is invalid, display INVALID COMMAND. If the d command is used on an empty list, display THE LIST IS ALREADY EMPTY. 

**_Note:_** _For an insertion (i) command, the user must provide the integer value to be inserted. For a deletion (d) command, no integer value is needed because the first node is automatically removed._ 

## **SAMPLE INPUT** 

i 8 i 24 d -1 x 12 

## **SAMPLE OUTPUT** 

|[1] 8|`→`insert**8**into the list|
|---|---|
|[2] 24 8|`→`insert**24**at the beginning|
|[1] 8|`→`delete the first node|
|INVALID COMMAND|`→`x is not a valid command|



## **<mark>Submission: Within the session schedule only.</mark>** 

**<mark>After execution of coding assessment/before session ends: Oral defense with your solution.</mark>** 

