/*
#                    GROUP - 16
#2021A7PS1452P                   Aaradhya Kulshreshtha
#2021B5A70900P                   Anshul Maheshwari
#2021B5A70925P                   Dhruv Bhandari
#2021B5A71144P                   Nimish Sharma
#2021B4A70817P                   Prakhar Agarwal
#2021B4A71746P                   Sugeet Sood

*/
#ifndef STACK_H
#define STACK_H
#include "parserDef.h"
typedef struct StkNode
{
    parsetreeNode *data;
    struct StkNode *next;
} StkNode;

typedef StkNode *stkNODE;

typedef struct stack
{
    stkNODE top;
} Stack;

void push(Stack *stack, parsetreeNode *ptn);
void pop(Stack *stack);
parsetreeNode *top(Stack *stack);
Stack *createNewStack();
bool isEmpty(Stack *stack);

#endif