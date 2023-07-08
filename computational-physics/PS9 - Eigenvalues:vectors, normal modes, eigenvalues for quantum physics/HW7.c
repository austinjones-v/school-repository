// Austin Jones

//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fileout;
//    int i,k,N,ix, iy;
//    double M[128][128];
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/7/HW7_3.txt", "w");
//    printf("\nEnter N, k  ");
//    scanf("%d %d",&N, &k);
//
//
//    for (ix = 0; ix < N; ix++) //initialized nxm matrix with values of zero
//    {
//        for (iy = 0; iy < N; iy++)
//        {
//            M[ix][iy] = 0.0;
//        }
//    }
//    for (i = 0; i < N; i++)
//    {
//        M[i][i] = 2*k;
//    }
//    for (i = 0; i < N-1; i++)
//    {
//        M[i][i + 1] = -k;
//    }
//    M[N-2][N-1] = -k;
//    for (i = 0; i < N-1; i++)
//    {
//        M[i + 1][i] = -k;
//    }
//    M[0][N-1] = -k;
//    M[N-1][0] = -k;
//    for (ix=0; ix < N; ix++)
//    {
//        for (iy=0; iy<N; iy++)
//        {
//            fprintf(fileout, "%4.11f   ",M[ix][iy]);
//        }
//        fprintf(fileout,"\n");
//    }
//    fclose(fileout);
//    return 0;
//}

//Lab 14

////[HW7-6]
//
//int main(void)
//{
//    int i,N;
//    double patronus[1024],length;
//    printf("\nEnter the number of components, N, of the vector   ");
//    scanf("%d",&N);
//    for (i=0; i<N; i=i+1)
//    {
//        printf("\nEnter vector component %4d   ",i);
//        scanf("%lf",&patronus[i]);
//    }
//    length=0.0;
//    for (i=0; i<N; i=i+1)
//    {
//        length=length+patronus[i]*patronus[i];
//    }
//    length=sqrt(length);
//    printf("\nYour vector has length   %12.6lf \n",length);
//    for (i=0; i<N; i=i+1){patronus[i]=patronus[i]/length;
//    printf("\nComponent %d of your normalized vector: %12.6lf \n",i,patronus[i]);
//    }
//    for ()
//    return 0;
//}
