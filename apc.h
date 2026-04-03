/*This file contains the structure definition and function declarations for the APC project.
It uses a doubly linked list to store large numbers digit by digit.
The file declares list operations and arithmetic functions such as addition, subtraction, multiplication, and division.*/

#ifndef APC_H
#define APC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Doubly Linked List Node //
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} APC;

//List operations 
int insert_at_last(APC **, APC **, int);

int insert_at_first(APC **, APC **, int);

void print_list(APC *);

void remove_leading_zeroes(APC **, APC **);

//Arithmatic operations 
int addition(APC *, APC *,APC **, APC **);

int compare_lists(APC *, APC *);

int subtraction(APC *, APC *,APC **, APC **);

int multiplication(APC *, APC *,APC **, APC **);

int division(APC **, APC **,APC *, APC *,char *, char *,APC **, APC **);

#endif
