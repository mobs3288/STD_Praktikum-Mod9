#include "stack.h"
#include "queue.h"

int main()
{
    // Soal Stack
    cout << "======SOAL TERBIMBING STACK=======" << endl << endl;
    stack S;
    createStack(S);

    /*push(S, 2);
    push(S, 3);
    push(S, 4);
    push(S, 5);

    printInfo(S);

    pop(S);

    printInfo(S);*/

    push(S, 12);
    push(S, 17);
    push(S, 5);
    push(S, 10);
    push(S, 15);
    push(S, 25);
    push(S, 11);
    push(S, 22);
    push(S, 19);

    printInfo(S);
    descending(S);
    ascending(S);

    cout << endl;
    cout << "========SOAL MANDIRI QUEUE=========" << endl << endl;

    // Soal Mandiri Queue
    Queue Q;
    address P;
    infoType X;
    address data_transaksi;

    createQueue(Q);

    // Masukkan transaksi 1
    X = "Andi transfer Doni 50.000";
    masukan_transaksi(Q, P, X);
    printQueue(Q);

    // Masukkan transaksi 2
    X = "Doni transfer Saras 20.000";
    masukan_transaksi(Q, P, X);
    printQueue(Q);

    // Masukkan transaksi 3
    X = "Tono transfer Bili 20.000";
    masukan_transaksi(Q, P, X);
    printQueue(Q);

    proses_transaksi(Q, P);
    data_transaksi = P;

    cout << "Data Transaksi : " << info(data_transaksi) << endl << endl;
    cout << "Proses Transaksi : " << endl;
    printQueue(Q);

    cout << "==================================" << endl << endl;

    return 0;

}

