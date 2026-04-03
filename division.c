/* Compare list : This function compares two large numbers stored as linked lists.

Division : This function performs division of two large numbers using repeated subtraction.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "apc.h"
// compare two numbers//
int compare_lists(APC *head1, APC *head2)
{
    //take length variables for 2 lists
    int length1 = 0;
    int length2 = 0;
    APC *tail1 = head1;
    APC *tail2 = head2;

    //find length of first node
    while (tail1 != NULL) 
    { 
        length1++; 
        tail1 = tail1->next; 
    }
    //find length of second node
    while (tail2 != NULL) 
    { 
        length2++; 
        tail2 = tail2->next; 
    }
    //check which number is greater
    if (length1 > length2) 
        return 1;
    if (length1 < length2) 
        return -1;

    //lengths equal → compare digit by digit 
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data > head2->data) 
            return 1;
        if (head1->data < head2->data) 
            return -1;

        head1 = head1->next;
        head2 = head2->next;
    }
    //if numbers are exactly equal
    return 0;
}

int division(APC **head1, APC **tail1,APC *head2, APC *tail2,char *num1, char *num2,APC **reshead, APC **restail)
{
    //variable to store quotient count
    int count = 0;
    //temporary list to store subtraction result
    APC *temphead = NULL, *temptail = NULL;

    //repeated subtraction
    while (compare_lists(*head1, head2) >= 0)
    {
        //subtract divisor from dividend 
        subtraction(*tail1, tail2, &temphead, &temptail);
        //remove leading zeros from subtraction result
        remove_leading_zeroes(&temphead, &temptail);
        //update dividend with new value
        *head1 = temphead;
        *tail1 = temptail;
        // reset temporary pointers for next iteration
        temphead = NULL;
        temptail = NULL;
        //increment the count
        count++;
    }

    // store quotient 
    if (count == 0)
    {
        insert_at_last(reshead, restail, 0);
    }
    else
    {
        //store quotient digits into result list
        while (count)
        {
            insert_at_first(reshead, restail, count % 10);
            count = count/10;
        }
    }
    //after division completed
    return 1;
}
