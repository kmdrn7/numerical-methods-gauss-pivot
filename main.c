#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ordo = 3;

    printf("+--------------------------------+\n");
    printf("|       Program Gauss-Pivot      |\n");
    printf("+--------------------------------+\n\n");

    printf("Cara penggunaan : \n");
    printf("- Masukkan banyaknya peubah (3 atau 4) \n");
    printf("- Masukkan persamaan dengan format X1 X2 X3 Xn\n");
    printf("\n");

    printf("Masukkan banyaknya peubah : ");
    scanf("%d", &ordo);
    printf("\n");

    float matriks[ordo][ordo+1];

    int i, j, k;
    /**for (i=0; i<ordo; i++){
        if( ordo == 3 ){
            printf("Masukkan persamaan ke %d (n n n hasil) \n: ", i+1);
            scanf("%f %f %f %f", &matriks[i][0], &matriks[i][1], &matriks[i][2], &matriks[i][3]);
        }
    }**/

    matriks[0][0] = 1;
    matriks[0][1] = 1;
    matriks[0][2] = 2;
    matriks[0][3] = 9;

    matriks[1][0] = 2;
    matriks[1][1] = 4;
    matriks[1][2] = -3;
    matriks[1][3] = 1;

    matriks[2][0] = 3;
    matriks[2][1] = 6;
    matriks[2][2] = -5;
    matriks[2][3] = 0;

    printf("\n");
    printf("Persamaan setelah diubah menjadi matriks : \n");
    printf("---------+-------------------------------- \n");
    for (i=0; i<ordo; i++){
        for (j=0; j<ordo; j++){
            printf("%2g ", matriks[i][j]);
        }
        printf(" | %2g ", matriks[i][ordo]);
        printf("\n");
    }
    printf("----------+------------------------------ \n\n");

    float pkl = 0;

    for (i=1; i<ordo; i++){
        for (j=0; j<i; j++){
            pkl = matriks[i][j]/matriks[j][j];
            for(k=0; k<=ordo; k++){
                matriks[j][k] *= pkl;
                matriks[i][k] -= matriks[j][k];
            }
        }
    }

    printf("Setelah dicari dengan metode Gauss-Pivot : \n");
    printf("---------+-------------------------------- \n");
    for (i=0; i<ordo; i++){
        for (j=0; j<ordo; j++){
            printf("%-5g ", matriks[i][j]);
        }
        printf("| %-5g ", matriks[i][ordo]);
        printf("\n");
    }
    printf("----------+------------------------------ \n\n");

    float hasil[99];
    int inc=1;

    for (i=ordo-1; i>=0; i++){
        hasil[i] = 0;
        for (j=ordo-1; j>ordo+(inc++)){
            hasil[i] +=
        }
    }
    hasil[2] = matriks[2][3]/matriks[2][2];
    hasil[1] = (matriks[1][3]-matriks[1][2]*hasil[2]) / matriks[1][1];
    hasil[0] = (matriks[0][3]-matriks[0][2]*hasil[2] - matriks[0][1]*hasil[1]) / matriks[0][0];

    for (i=0; i<ordo; i++){
        printf("%c = %g\n", 88+i, x[i]);
    }
}
