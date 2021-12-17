#include "queue.h"

void createQueue(Queue &Q){
    head(Q) = nil;
    tail(Q) = nil;
}

address newElmt(infoType X){
    address P = new ElmQueue;

    info(P) = X;
    next(P) = nil;
}

void enQueue(address P, Queue &Q){
    if(head(Q) == nil){
        head(Q) = P;
        tail(Q) = P;
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void deQueue(address &P, Queue &Q){
    if(head(Q) == tail(Q)){
        P = head(Q);
        head(Q) = nil;
        tail(Q) = nil;
    } else {
        P = head(Q);
        head(Q) = next(P);
        next(P) = nil;

    }
}

void masukan_transaksi(Queue &Q, address P, infoType x) {
    P = newElmt(x);

    enQueue(P, Q);
}

void proses_transaksi(Queue &Q, address &P) {
    deQueue(P, Q);
}

void printQueue(Queue Q){
    address P = head(Q);

    while(P != nil){

        cout << info(P) << endl;

        P = next(P);
    }
    cout << endl;
}


