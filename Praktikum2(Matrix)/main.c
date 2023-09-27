#include <stdio.h>
#include "tabel.h"
#include "boolean.h"
/*Deskripsi : */
/*Pembuat : 24060122140150/Gigih Haidar Falah*/
/*Tanggal : 9/09/2023*/


int main() {
    Tabel A;
    int N = 10, Pos, Byk;


/*procedure createTable( output T: Tabel)
{I.S.: -}
{F.S.: size=0, setiap elemen wadah=-999}
{Proses: menginisialisasi T} */
    createTable(&A);
    addXTable(&A, 2);
    addXTable(&A, 3);
    addXTable(&A, 6);
    addXTable(&A, 11);
    addXTable(&A, 12);
    addXTable(&A, 15);
    printf("Isi tabel A: ");
/*procedure printTable ( input T:Tabel )
{I.S.: T terdefinisi}
{F.S.: -}
{Proses: menampilkan semua elemen T ke layar} */
    printTable(A);

/*procedure viewTable ( input T:Tabel )
{I.S.: T terdefinisi}
{F.S.: -}
{Proses: menampilkan elemen T yang terisi ke layar} */
    viewTable(A);

/*function getSize( T: Tabel) -> integer
	{mengembalikan banyak elemen pengisi T } */
    printf("Banyak Tabel yang sudah terisi: %d\n", getSize(A));

/*function countEmpty( T: Tabel) -> integer
{mengembalikan banyak elemen T yang belum terisi } */
    printf("Banyak Tabel yang belum terisi: %d\n", countEmpty(A));

/*function isEmptyTable( T: Tabel) -> boolean
{mengembalikan True jika T kosong } */
    printf("Is Empty: %d\n", isEmptyTable(A));

/*function isFullTable( T: Tabel) -> boolean
{mengembalikan True jika T penuh } */
    printf("Is Full: %d\n", isFullTable(A));


/*procedure populate1 ( input/output T:Tabel, input N: integer )
{I.S.: T terdefinisi, N terdefinisi dalam rentang 1..10}
{F.S.: T.wadah terisi sebanyak N elemen }
{Proses: mengisi elemen T.wadah sebanyak N kali dari keyboard}
{Syarat: angka-angka masukan keyboard > 0 }*/
    populate1(&A, N);

/*procedure searchX1 ( input T:Tabel, input X: integer, output Pos: integer )
{I.S.: T terdefinisi, X terdefinisi }
{F.S.: Pos berisi posisi ketemu di T.wadah, atau -999 jika tidak ketemu }
{Proses: mencari elemen bernilai X dalam T.wadah}*/
    searchX1(A, 2, &Pos);
    printf("2 berada pada tabel ke: %d\n", Pos);

/*procedure countX ( input T:Tabel, input X: integer, output Byk: integer )
{I.S.: T terdefinisi, X terdefinisi }
{F.S.: Byk berisi banyaknya X di T.wadah, atau 0 jika tidak ketemu }
{Proses: menghitung elemen bernilai X dalam T.wadah}*/
    countX(A, 2, &Byk);
    printf("Banyak 2: %d\n", Byk);


/*procedure addXTable ( input/output T:Tabel, input X: integer )
{I.S.: T terdefinisi, X terdefinisi }
{F.S.: isi T.wadah bertambah 1 elemen jika belum penuh}
{Proses: mengisi elemen T.wadah dengan nilai X}*/
    addXTable(&A, 4);

/*procedure delXTable ( input/output T:Tabel, input X: integer )
{I.S.: T terdefinisi}
{F.S.: isi T.wadah berkurang 1 elemen jika belum kosong}
{Proses: menghapus 1 elemen bernilai X, geser semua elemen sisa}*/
    delXTable(&A, 14);

/*procedure delAllXTable ( input/output T:Tabel, input X: integer )
{I.S.: T terdefinisi}
{F.S.: isi T.wadah berkurang semua elemen bernilai X jika belum kosong}
{Proses: menghapus semua elemen bernilai X, geser elemen sisa}*/
    delAllXTable(&A, 2);

/*function Modus ( T:Tabel ) -> integer
{mengembalikan elemen pengisi T yang paling banyak muncul } */
/*asumsi: bila terdapat banyak yang sama maka yang diambil yang pertama*/
    printf("Modus: %d\n", Modus(A));

    return 0;
}
