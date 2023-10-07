#ifndef tqueue3_C
#define tqueue3_C
#include "boolean.h"
#include <math.h>
#include "tqueue3.h"

/* Program   : tqueue3.c */
/* Deskripsi : ADT Queue representasi kontigu dengan array,
               model III: head memutar searah jarum jam */
/* NIM/Nama  : 24060122140150/GigihHaidarFalah*/
/* Tanggal   : 07-10-2023*/
/***********************************/

/*function isEmptyQueue3(Q:tQueue3) -> boolean
{mengembalikan true jika Q kosong}*/
boolean isEmptyQueue3(tqueue3 Q){
    //KamusLokal

    //Algoritma
    if (Q.head == 0 && Q.tail==0){
        return true ;
    } else {
        return false ;
    }
}
/*function isFullQueue3(Q:tQueue3) -> boolean
{mengembalikan true jika Q penuh}*/
boolean isFullQueue3(tqueue3 Q){
    //KamusLokal

    //Algoritma
    return ((Q.tail + 1 ) % 6== Q.head);
}
 /*   if (sizeQueue3(Q) == 5) {

        return true ;
    } else {
        return false ;
    }

}
*/
/*function isOneElement3(Q:tQueue3) -> boolean
{mengembalikan true jika Q 1 elemen}*/
boolean isOneElement3(tqueue3 Q){
    //KamusLokal

    //Algoritma
    return Q.head == Q.tail ;
}
    /*if (head(Q)!=0 && head(Q)==tail(Q)) {

        return true ;
    } else {
        return false ;
    }*/

/*procedure createQueue3 ( output Q:tQueue3)
{I.S.: -}
{F.S.: Q terdefinisi, kosong}
{Proses: mengisi komponen dengan 0, elemen kosong='#'}*/
void createQueue3(tqueue3 *Q) {
    // Kamus Lokal
    int i;

    // Algoritma
    (*Q).head = 0;
    (*Q).tail = 0;
    for (i = 1; i <= 5; i++) {
        (*Q).wadah[i] = '#';
    }
}

/*Function Head3(Q:tqueue3) -> integer
{mengembalikan posisi elemen terdepan} */
int head(tqueue3 Q){
    return Q.head ;
}

/*Function Tail3(Q:tqueue3) -> integer
{mengembalikan posisi elemen terakhir} */
int tail(tqueue3 Q){
    return Q.tail ;
}

/*Function InfoHead3(Q:tqueue3) -> character
{mengembalikan nilai elemen terdepan} */
char infoHead3(tqueue3 Q){
    return Q.wadah[Q.head];
}

/*Function InfoTail3(Q:tqueue3) -> character
{mengembalikan nilai elemen terakhir} */
char infoTail3(tqueue3 Q){
     return Q.wadah[Q.tail];
}

/*function sizeQueue3(Q:tQueue3)-> integer
{mengembalikan panjang antrian Q} */
int sizeQueue3(tqueue3 Q){
    //kamusLokal
    int E ;

    //Algoritma
    for (int i = Q.head; i < Q.tail; i++) {
        if (Q.wadah[i] != '#') {
            E = E + 1;
        }
    }

    return E;
}

/*procedure printQueue3(input Q:tQueue3)
{I.S.: Q terdefinisi}
{F.S.: -}
{proses: mencetak isi wadah ke layar, berisi atau kosong}*/
void printQueue3(tqueue3 Q){
    //kamusLokal
    int i ;
    //Algoritma
    if (isEmptyQueue3(Q)){
        printf("QueueuKosong");
    }else{
    for (i=1;i<=5;i++){
        printf("%c",Q.wadah[i]);
        }
    }
}

/*procedure viewQueue3(input Q:tQueue3)
{I.S.: Q terdefinisi}
{F.S.: -}
{proses: mencetak elemen yang tidak kosong ke layar}*/
void viewQueue3(tqueue3 Q){
    //KamusLokal
    int i = Q.head ;
    //Algoritma
    if (isEmptyQueue3(Q)){
        printf("QueueKosong\n");
    }else{
        while (i != Q.tail){
            printf("%c",Q.wadah[i]);
            i = (i%5)+1 ;
        }
        printf ("%c\n",Q.wadah[Q.tail]);
    }
}
//    for (i>head(Q);i<10;i++);
//        if (Q.wadah[i] != '$'){
//            return (Q.wadah[i]);}
//    for (i>1;i<head(Q)-1;i++);
//        if (Q.wadah) []
//}

/*procedure enQueue3( input/output Q:tQueue3, input E: character )
{I.S.: E terdefinisi}
{F.S.: elemen wadah Q bertambah 1 bila belum penuh}
{proses: menambah elemen wadah Q sebagai tail, mungkin memutar ke 1 } */
void enqueue3(tqueue3 *Q, char E){
    //KamusLokal

    //Algoritma

    if (isFullQueue3(*Q)){
        printf ("QueuePenuh\n");
    }else{
        if (isEmptyQueue3(*Q)) {
            (*Q).head = 1;
            (*Q).tail = 1;
        } else {
            (*Q).tail = ((*Q).tail % 5) + 1;
        }
        (*Q).wadah[(*Q).tail] = E;
    }
}
///*procedure deQueue3( input/output Q:tQueue3,output E: character )
//{I.S.: }
//{F.S.: elemen wadah Q berkurang 1 (Head), E=infohead(Q), bila kosong E=' '}
//{proses: mengurangi elemen wadah Q, bila 1 elemen, maka Head dan Tail mengacu ke 0 } */
void dequeue3(tqueue3 *Q, char *E) {
    //KamusLokal

    //Algoritma
    if (isEmptyQueue3(*Q)) {
        printf("Queue Kosong\n");
    } else {
        *E = (*Q).wadah[(*Q).head];
        (*Q).wadah[(*Q).head] = '#';
        if ((*Q).head == (*Q).tail) {
            (*Q).head = (*Q).tail = -1;
        } else {
            (*Q).head = ((*Q).head + 1) % 6;
        }
    }
}

/*EKSTRA: kerjakan bila semua fungsi/prosedur di atas sudah well tested*/
/*function isTailOverHead(Q:tQueue3) -> boolean
{mengembalikan true jika tail berada di depan head}*/
boolean isTailOverHead(tqueue3 Q){
    //KamusLokal

    //Algoritma
    if (isEmptyQueue3(Q)){
            return false;
        } else {
            return (Q.tail < Q.head);
    }
}

/*function countMember(Q:tQueue3, E:character) -> boolean
{mengembalikan banyaknya nilai E dalam antrian Q}*/
int countMember(tqueue3 Q, char E){
    //KamusLokal
    int counter = 0;
    //Algoritma
    for (int i = Q.head; i <= Q.tail; i++) {
        if (Q.wadah[i] == E) {
            counter++;
        }
    }
    return counter;
}

/*procedure enQueue3E( input/output Q:tQueue3, input E: character )
{I.S.: E terdefinisi}
{F.S.: elemen wadah Q bertambah 1 bila belum penuh}
{proses: menambah elemen wadah Q sebagai tail, mungkin memutar ke 1 dengan syarat nilai E belum ada di Q} */
void enqueue3E(tqueue3 *Q, char E) {
    // kamus lokal
    int i;

    // algoritma
    if (isFullQueue3(*Q)) {
        printf("Antrian penuh. Tidak dapat menambahkan elemen baru.\n");
        return;
    }
    for (i = 1; i <= 5; i++) {
        if ((*Q).wadah[i] == E) { // Menggunakan operator '->' untuk mengakses elemen antrian
            printf("Nilai %c sudah ada di dalam antrian. Tidak dapat ditambahkan kembali.\n", E);
            return;
        }
    }
    (*Q).tail++;
    if ((*Q).tail > 5) {
        (*Q).tail = 1;
    }
    (*Q).wadah[(*Q).tail] = E; 
}

#endif
