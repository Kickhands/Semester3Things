#include <stdio.h>
#include <stdlib.h>
#include "tqueue3.h"
#include "boolean.h"
/* Program   : main.c */
/* Deskripsi : ADT Queue representasi kontigu dengan array,
               model III: head memutar searah jarum jam */
/* NIM/Nama  : 24060122140150/GigihHaidarFalah*/
/* Tanggal   : 07-10-2023*/
/***********************************/
int main()
{
   //Kamus Lokal
   tqueue3 B;
   int i;
   char E;
   //Algoritma
    createQueue3(&B);
    enqueue3(&B,'C');
    enqueue3(&B,'C');
    enqueue3(&B,'A');
    enqueue3(&B,'T');
    //Menghapus C pertama menggunakan Dequeue
    dequeue3(&B,&E);
//=============================================
    printf("\nisEmpty = ");
        isEmptyQueue3(B) ? printf("Queue Kosong") : printf("Queue Tidak Kosong");
    printf("\nisFullQueue = ");
        isFullQueue3(B) ? printf("Queue Penuh") : printf("Queue Tidak Penuh");
    printf("\nisOneElement = ");
        isOneElement3(B) ? printf("Satu Elemen\n") : printf("Bukan Satu Elemen\n");
//=============================================
    printf("\nHead = %d", head(B));
    printf("\nTail = %d\n", tail(B));

//=============================================
    printf("\ninfoHead = %c", infoHead3(B));
    printf("\nInfoTail = %c\n", infoTail3(B));
//=============================================
    printf("\nSizeQueue = %d\n", sizeQueue3(B));
    printf("PrintQueue = ");
    printQueue3(B);
    printf("\nViewQueue = ");
    viewQueue3(B);
//=============================================
    printf("\nisTailoverHead = ");
        isTailOverHead(B) ? printf("True\n") : printf("false\n");

    char target = 'C';
    int count = countMember(B, target);
        printf("CountMember %c = %d\n", target, count);

    char newValue = 'E';
    enqueue3E(&B, newValue);
        printf("Setelah enqueue3E = ");
            viewQueue3(B);

    return 0;
}
