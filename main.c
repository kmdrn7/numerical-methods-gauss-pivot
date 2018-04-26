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
    for (i=0; i<ordo; i++){
        printf("Masukkan persamaan ke %d : \n", i+1);
        for (j=0; j<ordo; j++){
            printf("- konstanta X%d: ", j+1);
            scanf("%f", &matriks[i][j]);
        }
        printf("- konstanta hasil %d: ", i+1, j+1);
        scanf("%f", &matriks[i][ordo]);
    }

    printf("\n");
    printf("Persamaan setelah diubah menjadi matriks : \n");
    printf("----------+-------------------------------- \n");
    for (i=0; i<ordo; i++){
        for (j=0; j<ordo; j++){
            printf("%2.2f ", matriks[i][j]);
        }
        printf(" | %2.2f ", matriks[i][ordo]);
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

    float hasil[99], temp = 0;
    int inc=0;

    for (i=ordo-1; i>=0; i--){

        hasil[i] = matriks[i][ordo];
        temp = hasil[i];
        for (j=ordo-1; j>i; j--){
            temp -= matriks[i][j]*hasil[j];
        }
        temp /= matriks[i][i];
        hasil[i] = temp;
    }

    for (i=0; i<ordo; i++){
        printf("%c = %.2f\n", 88+i, hasil[i]);
    }
}
