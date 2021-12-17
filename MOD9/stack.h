#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>

using namespace std;

#define Top(S) (S).Top
#define info(S) (S).info
#define nil NULL

typedef int infotype;

struct stack{
    infotype info[10];
    int Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
int pop(stack &S);
void printInfo(stack S);
void ascending(stack &S);
void descending(stack &S);

#endif // STACK_H_INCLUDED
