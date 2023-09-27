#include <stdio.h>
#include "boolean.h"
#include "tstack.h"

int main()
{
    /* kamus main */
   Tstack A;
	char b;
	char d;
	char m;
	char n;
	char X;
    int i = 0;
	int N,Y,Z;


    /* algoritma */
     printf("Prosedur createStack\n");
	createStack(&A);
    A.wadah[1] = 'a';
	A.wadah[2] = 'u';
	A.wadah[3] = 'u';
	A.wadah[4] = 'u';
	A.wadah[5] = 'a';
    A.top = 5;
	printStack(A);

    printf("Top : %d\n", top(A));
    printf("infotop : %c\n", infotop(A));

    printf("\nFungsi isEmptyStack\n");
    if (isEmptyStack(A)) {
    printf("Stack kosong\n");
    } else {
    printf("Stack tidak kosong\n");
    }

    printf("\nFungsi isFullStack\n");
    if (isFullStack(A)) {
        printf ("Stack penuh");
    } else {
        printf ("Stack tidak penuh\n");
    }

/*    int n;
    printf("Masukkan size stack: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &E);
        push(&A, E);
    }
*/
      printf("\nStack Merupakan :\n");
    for(i=1;i<=top(A);i++){
        Y = A.wadah[i];
    }
    for(i=top(A);i>=1;i--){
        Z = A.wadah[i];
    }
    if(Y==Z){
        printf("Palindrom\n");
    }
    else {
        printf("Bukan Palindrom\n");
    }

    printf("\nStack :\n");
    printStack(A);

    printf("\n================================================");

    printf("\nProcedure push\n");
    push(&A, 'A');
    printStack(A);
    printf("\n");

    printf("\nProcedure pop\n");
    pop(&A, &X);
    printStack(A);
    printf("\n");

    printf("\n================================================");


    printf("\nPushN :");
    pushN(&A, 4);
    printStack(A);
    printf("\n");

    /*pop(&A, &X);
    printf("\nMasukkan Element untuk Pop: %c\n", X);

    printf("\nStack setelah Pop:\n");
    printStack(A);

    printf("Top : %d\n", top(A));
    printf("infotop : %c\n", infotop(A));
    */
    printf("\n================================================");

    // Menggunakan pushZuma
    /*
    char karakterZuma;
    printf("\nMasukkan karakter untuk pushZuma: ");
    scanf(" %c", &karakterZuma);
    pushZuma(&A, karakterZuma);

    printf("\nStack setelah pushZuma:\n");
    printStack(A);
    printf("Top : %d\n", top(A));
    printf("infotop : %c\n", infotop(A));
    */

    printf("\npushZuma :\n");
    pushZuma(&A, n);
    printStack(A);


    printf("\n================================================");

    // Menggunakan pushBabel1
    /*char karakterBabel;
    printf("\nMasukkan karakter untuk pushBabel1: ");
    scanf(" %c", &karakterBabel);
    pushBabel1(&A, karakterBabel);

    printf("\nStack setelah pushBabel1:\n");
    printStack(A);
    printf("Top : %d\n", top(A));
    printf("infotop : %c\n", infotop(A));
    */

    printf("\npushBabell :\n");
    pushBabel1(&A, m);
    printStack(A);
    printf("\n");

    printf("\n========================END======================");

    return 0;
}
