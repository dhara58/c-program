#include<stdio.h>
int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
      
        for(j=i; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}