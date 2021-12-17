#include "stack.h"

void createStack(stack &S){
    Top(S) = 0;
}

bool isEmpty(stack S){
    if (Top(S) == 0){
        return true;
    } else {
        return false;
    }
}

bool isFull(stack S){
    if (Top(S) == 10) {
        return true;
    } else {
        return false;
    }
}

void push(stack &S, infotype x){
    if (isFull(S)){
        cout << "Stack Penuh" << endl;
    } else {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

int pop(stack &S){
    infotype x;

    x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo(stack S){
    int i;

    for(i = Top(S); i >= 1; i--){
        cout <<info(S)[i] << " ";
    }
    cout << endl;
}

void descending(stack &S){
    int temp[Top(S)];
    int i;
    int j;

    for (i = 1; i < Top(S); i++){
        for(j = Top(S); j > 1; j--){
            if(info(S)[j - 1] > info(S)[j]) {

                temp[j] = info(S)[j - 1];

                info(S)[j - 1] = info(S)[j];

                info(S)[j] = temp[j];
            }
        }
    }
    printInfo(S);
}

void ascending(stack &S){
    int temp[Top(S)];
    int i;
    int j;

    for (i = 1; i < Top(S); i++){
        for(j = Top(S); j > 1; j--){
            if(info(S)[j - 1] < info(S)[j]) {

                temp[j] = info(S)[j - 1];

                info(S)[j - 1] = info(S)[j];

                info(S)[j] = temp[j];
            }
        }
    }
    printInfo(S);
}
