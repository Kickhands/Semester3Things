/************************************/
/* Program   : titik.c */
/* Deskripsi :  */
/* NIM/Nama  : 24060122140150/Gigih Haidar Falah*/
/* Tanggal   : 2 September 2023*/
/***********************************/

#include <stdio.h>
#include "titik.h"
#include <math.h>

void makeTitik (Titik*T){
    (*T).absis = 0;
    (*T).ordinat = 0;
}

int getAbsis (Titik T){
    return T.absis;
}

int getOrdinat (Titik T){
    return T.ordinat;
}

void setAbsis (Titik *T, int xx){
    (*T).absis = xx;
}

void setOrdinat (Titik *T, int yy){
    (*T).ordinat = yy;
}

boolean isOrigin(Titik T){
    return T.absis == 0 && T.ordinat == 0;
}

void geserXY(Titik *T, int dx, int dy){
    (*T).absis = (*T).absis + dx;
    (*T).ordinat = (*T).ordinat + dy;
}

void refleksiSumbuX(Titik *T){
    (*T).absis = -(*T).absis;
}

void refleksiSumbuY(Titik *T){
    (*T).ordinat = -(*T).ordinat;
}

int Kuadran(Titik T){
    if (T.absis >= 0 && T.ordinat >= 0){
        return 1;
    } else if (T.absis < 0 && T.ordinat >= 0){
        return 2;
    } else if (T.absis < 0 && T.ordinat < 0){
        return 3;
    } else if (T.absis >= 0 && T.ordinat < 0){
        return 4;
    }
}

float Jarak(Titik T1, Titik T2){
    return (sqrt(pow((T1.absis)-(T2.absis),2) + pow((T1.ordinat)-(T2.ordinat),2)));
}