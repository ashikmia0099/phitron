// #include<stdio.h>
// int main()
// {
//     int N,M;
//     scanf("%d %d",&N,&M);
//     int array[N][M];
//     for(int i=0;i<N;i++)
//     {
//         for(int j=0;j<M;j++)
//         {
//             scanf("%d",&array[i][j]);
//         }
//     }
//     for(int i=0;i<N;i++)
//     {
//         printf("%d ",array[0][i]);
//     }
//     printf("\n");
//     for(int j=0;j<M;j++)
//     {
//         printf("%d ",array[j][M-1]);
        
//     }
    
//     return 0;
// }

#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int array[N][M];
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    
    for (int i = 0; i < M; i++)
    {
        printf("%d ",array[N-1][i]);
    }
    printf("\n");
    for(int j=0;j<N;j++)
    {
        printf("%d ",array[j][M-1]);
    }
    return 0;
}
