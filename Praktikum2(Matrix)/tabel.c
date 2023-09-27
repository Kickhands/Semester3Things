#ifndef TABEL_C
#define TABEL_C

#include "tabel.h"
#include "boolean.h"
#include <stdio.h>

/*Deskripsi : */
/*Pembuat : 24060122140150/Gigih Haidar Falah*/
/*Tanggal : 8 September 2023*/

/*procedure createTable( output T: Tabel)
{I.S.: -}
{F.S.: size=0, setiap elemen wadah=-999}
{Proses: menginisialisasi T} */
void createTable(Tabel *T) {
    int i;
    // Algoritma
    for (i = 1; i <= 10; i++) {
        (*T).wadah[i] = -999;
    }
    (*T).size = 0;
}

/*procedure printTable ( input T:Tabel )
{I.S.: T terdefinisi}
{F.S.: -}
{Proses: menampilkan semua elemen T ke layar} */
void printTable(Tabel T) {
    for (int i = 1; i <= T.size; i++) {
        printf("%d ", T.wadah[i]);
    }
    printf("\n");
}

/*procedure viewTable ( input T:Tabel )
{I.S.: T terdefinisi}
{F.S.: -}
{Proses: menampilkan elemen T yang terisi ke layar} */
void viewTable(Tabel T) {
    for (int i = 1; i <= T.size; i++) {
        if (T.wadah[i] != -999) {
            printf("%d ", T.wadah[i]);
        }
    }
    printf("\n");
}

/*function getSize( T: Tabel) -> integer
	{mengembalikan banyak elemen pengisi T } */
int getSize(Tabel T) {
    return T.size;
}

/*function countEmpty( T: Tabel) -> integer
{mengembalikan banyak elemen T yang belum terisi } */
int countEmpty(Tabel T) {
    // Kamus Lokal

    // Algoritma
    return 10 - T.size;
}



/*function isEmptyTable( T: Tabel) -> boolean
{mengembalikan True jika T kosong } */
boolean isEmptyTable(Tabel T) {
    if (T.size == 0) {
        return true;
    } else {
        return false;
    }
}

/*function isFullTable( T: Tabel) -> boolean
{mengembalikan True jika T penuh } */
boolean isFullTable(Tabel T) {
    if (T.size == 10) {
        return true;
    } else {
        return false;
        }
}

/*procedure populate1 ( input/output T:Tabel, input N: integer )
{I.S.: T terdefinisi, N terdefinisi dalam rentang 1..10}
{F.S.: T.wadah terisi sebanyak N elemen }
{Proses: mengisi elemen T.wadah sebanyak N kali dari keyboard}
{Syarat: angka-angka masukan keyboard > 0 }*/
void populate1(Tabel *T, int N) {
    int i;

    for (i = 1; i <= N; i++) {
        printf("Masukkan elemen ke-%d: ", i);
        scanf("%d", &(*T).wadah[i]);
        (*T).size++;
    }
}

/*procedure searchX1 ( input T:Tabel, input X: integer, output Pos: integer )
{I.S.: T terdefinisi, X terdefinisi }
{F.S.: Pos berisi posisi ketemu di T.wadah, atau -999 jika tidak ketemu }
{Proses: mencari elemen bernilai X dalam T.wadah}*/
void searchX1(Tabel T, int X, int *Pos) {
    int i;

    *Pos = -999;

    for (i = 1; i <= T.size; i++) {
        if (T.wadah[i] == X) {
            *Pos = i;
            break;
        }
    }
}

/*procedure countX ( input T:Tabel, input X: integer, output Byk: integer )
{I.S.: T terdefinisi, X terdefinisi }
{F.S.: Byk berisi banyaknya X di T.wadah, atau 0 jika tidak ketemu }
{Proses: menghitung elemen bernilai X dalam T.wadah}*/
void countX(Tabel T, int X, int *Byk) {
    int i;
    *Byk = 0;

    for (i = 1; i <= T.size; i++) {
        if (T.wadah[i] == X) {
            (*Byk)++;
        }
    }
}

/*function SumEl ( T:Tabel ) -> integer
{mengembalikan jumlah semua elemen pengisi T } */
int SumEl(Tabel T) {
    int sum = 0;
    int i;

    for (i = 1; i <= T.size; i++) {
        sum += T.wadah[i];
    }

    return sum;
}

/*function AverageEl ( T:Tabel ) -> integer
{mengembalikan nilai rata-rata elemen pengisi T } */
int AverageEl(Tabel T) {
    if (isEmptyTable(T)) {
        return 0;
    }

    return SumEl(T) / T.size;
}

/*function getMaxEl ( T: Tabel) -> integer
{mengembalikan nilai elemen terbesar } */
int getMaxEl(Tabel T) {
    if (isEmptyTable(T)) {
        return -999;
    }

    int max = T.wadah[1];
    int i;

    for (i = 2; i <= T.size; i++) {
        if (T.wadah[i] > max) {
            max = T.wadah[i];
        }
    }

    return max;
}

/*function getMinEl ( T: Tabel) -> integer
{mengembalikan nilai elemen terkecil } */
int getMinEl(Tabel T) {
    if (isEmptyTable(T)) {
        return -999;
    }

    int min = T.wadah[1];
    int i;

    for (i = 2; i <= T.size; i++) {
        if (T.wadah[i] < min) {
            min = T.wadah[i];
        }
    }

    return min;
}

/*procedure populate2 ( input/output T:Tabel )
{I.S.: T terdefinisi}
{F.S.: T.wadah terisi beberapa elemen positif}
{Proses: mengisi elemen T.wadah berulang, bila angka
dari keyboard <=0 maka berhenti, tidak diproses}
{Syarat: angka-angka masukan keyboard > 0 }*/
void populate2(Tabel *T) {
    int i = 1;
    int num;

    do {
        printf("Masukkan elemen ke-%d (<=0 untuk berhenti): ", i);
        scanf("%d", &num);

        if (num <= 0) {
            break;
        }

        (*T).wadah[i] = num;
        (*T).size++;
        i++;
    } while (i <= 10 && !isFullTable(*T));
}

/*procedure addXTable ( input/output T:Tabel, input X: integer )
{I.S.: T terdefinisi, X terdefinisi }
{F.S.: isi T.wadah bertambah 1 elemen jika belum penuh}
{Proses: mengisi elemen T.wadah dengan nilai X}*/
void addXTable(Tabel *T, int X) {
    if (!isFullTable(*T)) {
        (*T).size++;
        (*T).wadah[(*T).size] = X;
    }
}z

/*procedure delXTable ( input/output T:Tabel, input X: integer )
{I.S.: T terdefinisi}
{F.S.: isi T.wadah berkurang 1 elemen jika belum kosong}
{Proses: menghapus 1 elemen bernilai X, geser semua elemen sisa}*/
void delXTable(Tabel *T, int X) {
    if (!isEmptyTable(*T)) {
        int i, j;
        int found = 0;

        for (i = 1; i <= (*T).size; i++) {
            if ((*T).wadah[i] == X) {
                found = 1;

                for (j = i; j < (*T).size; j++) {
                    (*T).wadah[j] = (*T).wadah[j + 1];
                }
                (*T).size--;
                break;
            }
        }
    }
}

/*procedure delAllXTable ( input/output T:Tabel, input X: integer )
{I.S.: T terdefinisi}
{F.S.: isi T.wadah berkurang semua elemen bernilai X jika belum kosong}
{Proses: menghapus semua elemen bernilai X, geser elemen sisa}*/
void delAllXTable(Tabel *T, int X) {
    if (!isEmptyTable(*T)) {
        int i, j;
        int found = 0;

        for (i = 1; i <= (*T).size; i++) {
            if ((*T).wadah[i] == X) {
                found = 1;

                for (j = i; j < (*T).size; j++) {
                    (*T).wadah[j] = (*T).wadah[j + 1];
                }
                (*T).size--;
                i--;
            }
        }
    }
}

/*function Modus ( T:Tabel ) -> integer
{mengembalikan elemen pengisi T yang paling banyak muncul } */
/*asumsi: bila terdapat banyak yang sama maka yang diambil yang pertama*/
int Modus(Tabel T) {
    if (isEmptyTable(T)) {
        return -999;
    }

    int modus = T.wadah[1];
    int maxCount = 0;
    int i, j;

    for (i = 1; i <= T.size; i++) {
        int currentCount = 0;

        for (j = 1; j <= T.size; j++) {
            if (T.wadah[i] == T.wadah[j]) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            modus = T.wadah[i];
        }
    }

    return modus;
}

#endif
