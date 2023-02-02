// 1. Write a program to calculate the sum of two matrices each of order 3x3.
// #include <stdio.h>
// int main()
// {
//     int a[3][3],b[3][3],sum[3][3];
//     printf("Enter the 9 element of 1st matrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }     
//     }
//     printf("Enter the 9 element of 2nd matrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }      
//     }
//     printf("1st matrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }    
//     printf("2nd matrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ",b[i][j]);
//         }
//         printf("\n");
//     }  
//     printf("Sum of 1st and 2nd martrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum[i][j] = a[i][j] + b[i][j];
//             printf(" %d ",sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 2. Write a program to calculate the product of two matrices each of order 3x3.
// #include <stdio.h>
// int main()
// {
//     int a[3][3],b[3][3],c[3][3];
//      printf("Enter the element of 1st matrix::\n");
//      for (int i = 0; i < 3; i++)
//      {
//          for (int j = 0; j < 3; j++)
//          {
//              scanf("%d",&a[i][j]);
//          }     
//      }
//  printf("Enter the element of 2nd matrix::\n");
//        for (int i = 0; i < 3; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                scanf("%d",&b[i][j]);
//            }   
//        }    
//     printf("1st matrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//      printf("2nd matrix::\n");
//      for (int i = 0; i < 3; i++)
//      {
//          for (int j = 0; j < 3; j++)
//          {
//              printf("%d\t",b[i][j]);
//          }
//          printf("\n");
//      }    
//     printf("Product::\n");
//     for (int i = 0; i < 3; i++)
//     {      
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = 0;
//             for (int k = 0; k < 3; k++)
//             {
//                c[i][j] = c[i][j] + a[i][k]*b[k][j];
//             }    
//         }      
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t",c[i][j]);
//         }
//         printf("\n");
//     }   
//     return 0;
// }

// 3. Write a program in C to find the transpose of a given matrix.
// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     printf("Given matrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }    
//     printf("Transpose of a given matrix::\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ",a[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4. Write a program in C to find the sum of right diagonals of a matrix.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of square matrix::\n");
//     scanf("%d %d",&n);
//     int a[n][n],sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }      
//     }
//     printf("Matrix::\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i==j)
//             {
//                 sum = sum + a[i][j];
//             }          
//         }       
//     }
//     printf("Sum of diagonal:: %d",sum);
//     return 0;
// }

// 5. Write a program in C to find the sum of left diagonals of a matrix.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of square matrix::\n");
//     scanf("%d",&n);
//     int a[n][n],sum = 0;
//     printf("Enter all %d element of matrix::\n",n*n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Matrix::\n");
//       for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ((i+j)==(n-1))
//             {
//                     sum = sum + a[i][j];
//             }          
//         }     
//     }
//     printf("Sum of left diagonal:: %d",sum);
//     return 0;
// }

// 6. Write a program in C to find the sum of rows and columns of a Matrix.
// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     int row_sum,col_sum,i,j;
//     printf("SUM OF COLUMN::\n");
//     for (i = 0; i < 3; i++)
//     {
//         row_sum = 0;
//         for (j = 0; j < 3; j++)
//         {
//             row_sum = row_sum + a[i][j];        
//         }
//         printf("%dst row sum = %d\n",i,row_sum);       
//     }
//     printf("SUM OF ROWS::\n");
//     for ( i = 0; i < 3; i++)
//     {
//         col_sum = 0;
//         for ( j = 0; j < 3; j++)
//         {
//             col_sum = col_sum + a[j][i];
//         }
//         printf("%dst col sum = %d\n",i,col_sum);
//     }
//     return 0;
// }

// 7. Write a program in C to print or display the lower triangular of a given matrix.
// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i<j)
//             {
//                 printf(" 0 ");
//             }
//             else
//             {
//                 printf(" %d ",a[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 8. Write a program in C to print or display an upper triangular matrix.
// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i>j)
//             {
//                 printf(" 0 ");
//             }
//             else
//             {
//                 printf(" %d ",a[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {1,2,4,0,0,0,0,0};
//     int count = 0;
//     int size = 3 * 3;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (a[i][j] == 0)
//             count++;
//         }
//     }
//     (count > size/2 ) ? printf("It is a sparse matrix.") : printf("It is not a sparse matrix");
//     return 0;
// }

// 10. Write a program in C to find the row with maximum number of 1s.++
// #include <stdio.h>
// int main()
// {
//     int a[4][4] = {0,1,1,
//                    0,0,1,
//                    1,1,1,
//                    0,0,0}; 
//     int count,max = 0,row;
//     for (int i = 0; i < 3; i++)
//     {
//         count = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             if (a[i][j] == 1)
//             {
//                 count++;
//             }
//         }
//         if (count > max)
//         {
//             count = max;
//             row = i;
//         }
//     }
//     printf("Row no-%d have maximum number of 1s.",row);
//     return 0;
// }