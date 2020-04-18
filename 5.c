#include<stdio.h>
#include<conio.h>


void main(){
        int i,j,sum=0;
        int A[3][3]={3,9,12,10,37,81,91,5,44};
            for(i=0;i<3;i++){
                printf("\n\t\t|\t");
                for(j=0;j<3;j++)
            {
            printf("%d\t\a",A[i][j]);
            }
            printf("|\n\n");
            }
            {
                for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                    {
                        if (i==j) sum+=A[i][j];
                    }
                    }
        printf ("\t\tJumlah diagonalnya adalah = %d\n\n",sum);
            printf ("\t\t[1][1] + [2][2] + [3][3] = %d\n\n",sum);
            }


getch();
}
