/* Program   : tstack.c */
/* Deskripsi : file BODY modul stack karakter */
/* NIM/Nama  : 24060122140150/GigihHaidarFalah*/
/* Tanggal   : 15 September 2023*/
/***********************************/

#include <stdio.h>
#include "tstack.h"
#include "boolean.h"

/* include tstack+boolean */

/*procedure createStack( output T: Tstack)
	{I.S.: -}
	{F.S.: T terdefinisi, semua nilai elemen T.wadah = '#' }
	{Proses: menginisialisasi T} */
void createQueue (Tstack *T){
    //kamus lokal
    int i;

    //algoritma
    (*T).top = 0;
    for(i=1;i<=10;i++){
        (*T).wadah[i] = '#';
    }
}

/*function top( T: Tstack) -> integer
	{mengembalikan posisi puncak stack } */
//int top (Tstack T);
//dalam praktikum ini, fungsi dapat direalisasikan
//menjadi macro dalam bahasa C.
int top (Tstack T) {
    return T.top ;
}
/*function infotop( T: Tstack) -> character
	{mengembalikan nilai elemen top stack } */
//char infotop (Tstack T);
char infotop(Tstack T) {
    return (T.top == 0) ? '#' : T.wadah[T.top];
}

/*function isEmptyStack( T: Tstack) -> boolean
	{mengembalikan True jika T kosong } */
boolean isEmptyStack (Tstack T){
    return T.top == 0 ;
}

/*function isFullStack( T: Tstack) -> boolean
	{mengembalikan True jika T penuh } */
boolean isFullStack(Tstack T)
{
    return T.top == 10;
}

/*procedure push ( input/output T:Tstack, input E: character )
	{I.S.: T,E terdefinisi}
	{F.S.: infotop tetap, atau berisi nilai E }
	{Proses: mengisi elemen top baru, bila belum penuh }*/
void push (Tstack *T, char E){
    if (isFullStack(*T)){
            printf("Stack Pnuh\n");
    } else{
        (*T).top  =(*T).top +1;
        (*T).wadah[(*T).top] = E;
    }
}
/*procedure pop ( input/output T:Tstack, output X: character )
	{I.S.: T terdefinisi}
	{F.S.: X= infotop stack lama, atau '#' }
	{Proses: mengambil elemen top, bila belum kosong }*/
void pop (Tstack *T, char *X){
    // kamus lokal

    // algoritma
    if (isEmptyStack(*T)){
        printf("Stack kosong");
    } else {
        (*X) = (*T).wadah [(*T).top];
        (*T).wadah[(*T).top] = '#';
        (*T).top = (*T).top -1;
    }
}
/*procedure printStack ( input T:Tstack )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan kondisi wadah T ke layar}
	{setiap elemen dipisah tanda titik koma } */
void printStack (Tstack T){
    // kamus lokal
    int i;

    // algoritma
    for (i = 1; i < 11; i++) {
        printf("%c ", T.wadah[i]);
    }
}


/*procedure viewStack ( input T:Tstack )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan elemen tak kosong T ke layar}
	{setiap elemen dipisah tanda titik koma } */
void viewStack (Tstack T){
    //kamus lokal
    int i ;
   if (isEmptyStack(T)) {
        printf("#");
    } else {
        for (i = 0; i <= T.top; i++) {
            printf("%c", T.wadah[i]);
            if (i < T.top) {
                printf("; ");
            }
        }
    }
    printf("\n");
}

/* selanjutnya tugas algoritma palindrom dikerjakan di main */
//UNTUK FUNCTION POLINDROM ADA PADA main.c
/* kerjakan prosedur berikut bila tugas palindrom sudah sukses */

/*procedure pushN ( input/output T:Tstack, input N: integer )
	{I.S.: T,N terdefinisi}
	{F.S.: infotop tetap, atau top=N }
	{Proses: mengisi elemen top baru N kali dari keyboard, bila belum penuh }*/
void pushN (Tstack *T, int N)
    {
    int i;
    char E;
    for (i = 1; i <= N; i++)
    {
        printf("Masukkan karakter ke-%d: ", i);
        scanf(" %c", &E);
        push(T, E);
    }
}
/*procedure pushBabel1 ( input/output T:Tstack, input E: character )
	{I.S.: T terdefinisi, E terdefinisi }
	{F.S.: T bertambah 1 elemen (E) bila belum penuh atau menjadi kosong bila stack penuh }
	{Proses: menumpuk top atau menghapus semua elemen }*/
void pushBabel1 (Tstack *T, char E){
    //kamus lokal
    int i;

    //algoritma
    if(isFullStack(*T)){
        for(i=1;i<=10;i++){
            (*T).wadah[i] = '#';
        }
        printf("Tumpukan telah direset\n");
    } else {
        printf("m : ");
        scanf("%s",&E);
        (*T).top += 1;
        (*T).wadah[(*T).top] = E;
    }
}
/*procedure pushZuma ( input/output T:Tstack, input E: character )
	{I.S.: T terdefinisi, E terdefinisi }
	{F.S.: T bertambah 1 elemen (E) atau berkurang 1 elemen bila E bernilai sama dengan top }
	{Proses: menumpuk top atau menghapus elemen top }
    {contoh: T=['A','B','C'], E='C' menjadi T=['A','B']}*/
void pushZuma (Tstack *T, char E){
    //kamus lokal

    //algoritma
    printf("n : ");
    scanf("%s",&E);
    if(isFullStack(*T) && (*T).wadah[top(*T)]!=E){
        printf("Stack penuh dan elemen teratas tidak dihapus");
    }
    else if (isFullStack(*T)==false && (*T).wadah[top(*T)]!=E){
        (*T).top += 1;
        (*T).wadah[top(*T)] = E;
    }
    else {
        (*T).wadah[top(*T)] = '#';
    }
}
