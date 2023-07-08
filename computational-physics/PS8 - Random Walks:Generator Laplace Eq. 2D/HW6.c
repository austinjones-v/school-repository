#include <stdio.h>
#include <math.h>
#include <stdlib.h>

////[HW6-1]
//
//int main() {
//    FILE *fileout;
//    double N, point, Rx, Ry;
//
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/6/HW6_1.txt", "w");
//
//    N = 10000;
//    //generates 1000 randsom numbers
//    for (point = 0; point < N; point = point + 1) {
//        Rx = (double)rand() / RAND_MAX;
//        Ry = (double)rand() / RAND_MAX;
//        fprintf(fileout,"\n %8.4lf %8.4lf",Rx,Ry);
//    }
//    fclose(fileout);
//    return 0;
//
//}


////[HW6-2]
//
//int main() {
//    FILE *fileout;
//    double N, point, M, Rx, Ry;
//
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/6/HW6_1.txt", "w");
//
//    N = 100000000;
//    M = 0;
//    //generates 1000 randsom numbers
//    for (point = 0; point < N; point = point + 1) {
//        Rx = (double)rand() / RAND_MAX;
//        Ry = (double)rand() / RAND_MAX;
//        if (pow(Rx,2) + pow(Ry,2) < 1) // if sum of each square < 1 M = M + 1
//            M = M + 1;
//        fprintf(fileout,"\n %8.4lf %8.4lf",Rx,Ry);
//    }
//    printf("\nM = %8.4lf", M);
//    printf("\nM/N is %8.4lf", M/N);
//    fclose(fileout);
//    return 0;
//
//}

////[HW6-4/5/6]
//
//int main(void)
//{
//    FILE * fileout;
//    int ix,iy,it,Nt;
//    double newV[31][21],V[31][21],x,dx,y,dy; //2 nxm matrices
//    fileout=fopen("/Users/Austin/Desktop/PHY 40/Homework/6/HW6_6.txt","w");
//    printf("\nEnter number of iterations  ");
//
////    dx = 0.01; //doubles initialized
////    dy = 0.01;
//
//    scanf("%d",&Nt);
//    dx=0.10; //doubles 0initialized
//    dy=0.10;
//    for (iy=0; iy<21; iy=iy+1) //initialized nxm matrix with values of zero
//    {
//        for (ix=0; ix<31; ix=ix+1)
//        {
//            V[ix][iy]=0.0;
//        }
//    }
//    iy=20; //highest y value for matrix
//    for (ix=0; ix<31; ix=ix+1)//for loop for top row
//    {
//        V[ix][iy]=8.0;//top row initialized to 8.0
//    }
//    for (it=0; it<Nt; it=it+1)
//    {
//        for (iy=1; iy<20; iy=iy+1)
//        {
//            for (ix=1; ix<30; ix=ix+1)
//            {
//                newV[ix][iy]=0.25*(V[ix+1][iy]+ V[ix-1][iy]+V[ix][iy+1]+V[ix][iy-1]); //New Matrix
//                //@i values
//            }
//        }
//        for (iy=1; iy<20; iy=iy+1)
//        {
//            for (ix=1; ix<30; ix=ix+1)
//            {
//                V[ix][iy]=newV[ix][iy];
//            }
//        }
//    }
//    for (iy=0; iy<21; iy=iy+1)
//    {
//        y=dy*iy;
//        for (ix=0; ix<31; ix=ix+1)
//        {
//            x=dx*ix;
//            fprintf(fileout,"\n %8.4lf  %8.4lf  %8.4lf",x,y,V[ix][iy]);
//        }
//        fprintf(fileout,"\n");
//    }
//    printf("\n V at box center %12.6lf",V[15][10]);
//    fclose(fileout);
//    printf("\n");
//    return 0;
//}
