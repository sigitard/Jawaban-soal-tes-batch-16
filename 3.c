#include<stdio.h>
#include<conio.h>

void main(){

    int jumlah, i, j, k, e=1;
    printf("CreatTri: ");
    scanf("%d", &jumlah);

     for(i=1;i<=jumlah;i++){
        for(j=jumlah;j>=i;j--)
            printf("  ");

        for(k=1;k<=e;k++)
            printf("* ");
            e=e+2;

        printf("\n\n");
     }

    getch();
}
