#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int array[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int flag =1;
    if(N !=N)
    {
        flag = 0;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j)
            {
                if(array[i][j]!=1)
                {
                    flag =0;
                }
            }
            else if(array[i][j]!=0)
            {
                flag =0;
            }
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}



// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int array[n][n];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &array[i][j]);
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", array[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
