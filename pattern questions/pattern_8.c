#include<stdio.h>
int main()
{   int n=5;
    int c = 64;
    for(int i=n; i>=1; i--)
    {
        for (int k=1 ; k<i; k++)
        {
            printf(" ");
        }
        for (int j=i; j<=n; j++)
        {
        printf("%c ",64+j);
        }
        printf("\n");
        
    }
    
    return 0;
}

