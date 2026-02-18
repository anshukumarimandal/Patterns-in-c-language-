#include <stdio.h>

int main() {
    int row,col;
    printf("Enter the nunber of rows:");
    scanf("%d",&row);
    printf("Enter the nunber of columns:");
    scanf("%d",&col);
    for( int i=0;i<=row-1;i++)
    {
        for( int j=0;j<=row-1;j++)
        {
                printf("*");
            
        
        }
        printf("\n");
    }
     return 0;
}
    