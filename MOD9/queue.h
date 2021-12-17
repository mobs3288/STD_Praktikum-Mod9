#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define head(L) ((L).head)
#define tail(L) ((L).tail)
#define nil NULL

typedef string infoType;
typedef struct ElmQueue *address;

struct ElmQueue{
    infoType info;
    address next;
};

struct Queue{
    address head;
    address tail;
};

void createQueue(Queue &Q);
address newElmt(infoType X);
void enQueue(address P, Queue &Q);
void deQueue(address &P, Queue &Q);
void masukan_transaksi(Queue &Q, address P, infoType x);
void proses_transaksi(Queue &Q, address &P);
void printQueue(Queue Q);


#endif // QUEUE_H_INCLUDED
