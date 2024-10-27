// #include<stdio.h>
// int main()
// {
//     int row,colum;
//     scanf("%d %d",&row,&colum);
//     int array[row][colum];
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<colum;j++)
//         {
//             scanf("%d",&array[i][j]);
//         }
//     }
//     int flag = 1;
//     if(row != colum)
//     {
//             flag = 0;
//     }
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<colum;j++)
//         {
//             if(i==j)
//             {
//                 if(array[i][j]!=array[0][0])
//                 {
//                     flag = 0;
//                 }
//             }
//             else if(array[i][j]!=0)
//             {
//                 flag =0;
//             }
//         }
//     }
//     if(flag ==1)
//     {
//         printf("Scalar matrix\n");
//     }
//     else
//     {
//         printf("Not scaler matrix\n");
//     }
//     return 0;
// }



#include <stdio.h>

int main()
{
    int row, colum;
    scanf("%d %d", &row, &colum);
    int array[row][colum];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &array[i][j]);
        }
        
        int flag = 1;
        if (row != colum)
        {
            flag = 0;
        }
        
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < colum; j++)
            {
                if (i == j)
                {
                    if (array[i][j] != array[0][0])
                    {
                        flag = 0;
                    }
                }
                else if (array[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }

        if (flag == 1)
        {
            printf("Scalar matrix\n");
        }
        else
        {
            printf("Not scalar matrix\n");
        }
    }

    return 0;
}
