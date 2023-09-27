/************************************/
/* Program   : main.c */
/* Deskripsi :  */
/* NIM/Nama  : 24060122140150/Gigih Haidar Falah*/
/* Tanggal   : 2 September 2023*/
/***********************************/

#include <stdio.h>
#include "titik.h"
#include "titik.c"

int main(){
	//kamus main
	Titik T;
	Titik T1, T2;
	int X, Y;
	float distance;
	
	//algoritma

	makeTitik(&T);
		X = getAbsis (T);
		Y = getOrdinat(T);
			//printf("Absis : %d Ordinat : %d\n",X,Y);

	setAbsis(&T1,2);
	setOrdinat(&T1,4);
		printf("Titik 1 : (%d,%d)\n",T1.absis,T1.ordinat);

	setAbsis(&T2,8);
	setOrdinat(&T2,10);
		printf("Titik 2 : (%d,%d)\n",T2.absis,T2.ordinat);

	isOrigin(T1);
		printf("isOrigin Titik 1 bernilai : %d\n", isOrigin(T1));
	isOrigin(T2);
		printf("isOrigin Titik 2 bernilai : %d\n", isOrigin(T2));

	geserXY(&T1,0,0);
		printf ("Setelah digeser Titik 1 menjadi : (%d,%d)\n", T1.absis, T1.ordinat);
	geserXY(&T2,0,0);
		printf ("Setelah digeser Titik 2 menjadi : (%d,%d)\n", T2.absis, T2.ordinat);

	Kuadran(T1);
		printf("Titik 1 berada pada Kuadran %d\n", Kuadran(T1));
	Kuadran(T2);
		printf("Titik 2 berada pada Kuadran %d\n", Kuadran(T2));

	Jarak(T1,T2);
		printf("Jarak antara 2 titik adalah : %.2f", (Jarak(T1, T2)));
}