#include <stdio.h>
#include "boolean.h"
#include "tqueue.h"

/* Program   : main.c */
/* Deskripsi : ADT Queue representasi kontigu dengan array,
               model I: head selalu di posisi 0 atau 1 */
/* NIM/Nama  : 24060122140150/GigihHaidarFalah*/
/* Tanggal   : 23 September 2023*/
int main() {
    //KAMUS LOKAL
    tqueue Q;
    tqueue Q1;
    tqueue Q2;
    tqueue A;
    char E;

    //ALGORITMA
    createQueue(&Q1);
    createQueue(&Q2);
    //printf("Prosedur createQueue\n");
    createQueue(&Q);

    enqueue(&Q1, 'A');
    enqueue(&Q1, 'B');
    enqueue(&Q1, 'C');
    enqueue(&Q1, 'M');
//    enqueue(&Q1, 'N');
    enqueue(&Q2, 'D');
    enqueue(&Q2, 'E');
    // Menampilkan isi Queue
//    printf("PrintQueue: ");
//    printQueue(Q);
    printf("\n=====================================================");
    printf("\nHead : %c", infoHead(Q));
    printf("\nTail : %c", infoTail(Q));

    printf("\n=====================================================");
    printf("\nFungsi isEmptyQueue = ");
    if (isEmptyQueue(Q)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    printf("Fungsi isFullQueue = ");
    if (isFullQueue(Q)) {
        printf("Queue penuh\n");
    } else {
        printf("Queue tidak penuh\n");
    }

    printf("Cek isOneElement = ");
    if (isOneElement(Q)) {
        printf("True = Hanya satu elemen\n");
    } else {
        printf("False = Tidak hanya satu elemen\n");
    }
    printf("=====================================================\n");

    printf("SizeQueue = %d\n", sizeQueue(Q));

    printf("PrintQueue = ");
    printQueue(Q);

    printf("ViewQueue = ");
    viewQueue(Q);
    printf("\n=====================================================");
    printf("\nEnqueue = ");
    enqueue(&Q, 'E');
    printQueue(Q);
    printf("=====================================================");

    printf("\nDequeued: %c\n", E);
    dequeue(&Q, &E);

    printf("\n=====================================================");
    int maxLen = maxlength(Q1, Q2);
    printf("\nPanjang Maksimum: %d", maxLen);
    printf("\n=====================================================\n");
    printf("viewQueueQ1 = ");
    viewQueue(Q1);
    printf("viewQueueQ2 = ");
    viewQueue(Q2);
    printf("\n=====================================================\n");
    enqueue2(&Q1, &Q2, 'Z');
    printf("viewQueueQ1 = ");
    viewQueue(Q1);
//    printf("Dequeued dari Q = %c", E);
//    dequeue2(&Q, &Q1, &E);
    printf("\nDequeued dari Q2 = %c", E);
    dequeue2(&Q1, &Q2, &E);
    printf("\n=====================================================\n");
    printf("viewQueueQ1 = ");
    viewQueue(Q1);
    printf("viewQueueQ2 = ");
    viewQueue(Q2);
    printf("\n=====================================================\n");

    return 0;
}
