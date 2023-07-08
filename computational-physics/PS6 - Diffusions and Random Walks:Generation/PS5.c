#include <stdio.h>
#include <math.h>
#include <stdlib.h>

////[PS5-1]
//int main(void)
//{
//    FILE * fileout;
//    int x,t,Nt;
//    double rho[1000],newrho[1000],D, dt, dx, Ddtodx2, norm,realx; //Double var's declared
//                    // two lists declared each with 1000 elements
//    fileout=fopen("/Users/Austin/Desktop/PHY 40/Homework/5/slughorn5_1.txt","w");
//    printf("\nEnter D,dt,dx   ");
//    scanf("%lf %lf %lf",&D, &dt, &dx);
//    Ddtodx2 = D*dt/(dx*dx); //controls the flow of matter from one box of size dx to
//                            //adjacent box in time interval dt. Flow v as dt v - hence dt in num.
//    printf("\nEnter number of time steps   ");
//    scanf("%d",&Nt);
//
//    //for loop that initializes values in all elements of rho to 0
//    for (x=0; x<1000;x=x+1)
//    {
//        rho[x]=0.0;
//    }
//    //For calculates values for elements > 500 and < 500 with the center value = norm of 1.0
//    rho[500]=1.0;
//    for (t=0; t<Nt; t=t+1)
//    {
//        for (x=1; x<999; x=x+1)
//        {
//            newrho[x]=rho[x]+Ddtodx2*(rho[x+1]+rho[x-1]-2.0*rho[x]); //fills elements of newrho
//        }
//        for (x=1; x<999; x=x+1)
//        {
//            rho[x]=newrho[x]; //newrho element values are placed in corresponding rho element
//        }
//        norm=0.0; //initialized norm to zero and adds corresponding element values s.t it's = 1.0
                    //Represents total number of particles
//        for (x=1; x<999; x=x+1)
//        {
//            norm=norm+rho[x];
//        }
//        printf("\n norm= %8.3lf  ",norm);
//    }
//    for (x=0; x<1000; x=x+1) //writes density and time values to a .txt
//    {
//        realx=dx*x;
//        fprintf(fileout,"\n %8.4lf %8.4lf",realx,rho[x]/dx);
//    }
//    fclose(fileout);
//    printf("\n");
//    return 0;
//}

////[PS5-2]
//
//int main(void)
//{
//    FILE * fileout;
//    int x,t,Nt;
//    double rho[1000],newrho[1000],D, dt, dx, Ddtodx2, norm,realx; //Double var's declared
//                    // two lists declared each with 1000 elements
//    fileout=fopen("/Users/Austin/Desktop/PHY 40/Homework/5/slughorn5_2.txt","w");
//    printf("\nEnter D,dt,dx   ");
//    scanf("%lf %lf %lf",&D, &dt, &dx);
//    Ddtodx2 = D*dt/(dx*dx); //controls the flow of matter from one box of size dx to
//                            //adjacent box in time interval dt. Flow v as dt v - hence dt in num.
//    printf("\nEnter number of time steps   ");
//    scanf("%d",&Nt);
//
//    //for loop that initializes values in all elements of rho to 0
//    for (x=0; x<1000;x=x+1)
//    {
//        rho[x]=0.0;
//    }
//    //For calculates values for elements > 500 and < 500 with the center value = norm of 1.0
//    rho[500]=1.0;
//    for (t=0; t<Nt; t=t+1)
//    {
//        for (x=1; x<999; x=x+1)
//        {
//            newrho[x]=rho[x]+Ddtodx2*(rho[x+1]+rho[x-1]-2.0*rho[x]); //fills elements of newrho
//        }
//        for (x=1; x<999; x=x+1)
//        {
//            rho[x]=newrho[x]; //newrho element values are placed in corresponding rho element
//        }
//        norm=0.0; //initialized norm to zero and adds corresponding element values s.t it's = 1.0
//                    //Represents total number of particles
//        for (x=1; x<999; x=x+1)
//        {
//            norm=norm+rho[x];
//        }
//        printf("\n norm= %8.3lf  ",norm);
//    }
//    for (x=0; x<1000; x=x+1) //writes density and time values to a .txt
//    {
//        realx=dx*x;
//        fprintf(fileout,"\n %8.4lf %8.4lf",realx,rho[x]/dx);
//    }
//    fclose(fileout);
//    printf("\n");
//    return 0;
//}


////[HW5-4]
//int main()
//{
//    double R;
//    int i,N;
//    unsigned int seed;
//    printf("\nEnter number of iterations and seed");
//    printf("\n");
//    scanf("%i %u",&N,&seed);
//    srand(seed);
//    for(i=0;i<N;i=i+1) //For loop gets seeder value and prints N values each with value 0<r(i)<1
//    {
//        R=(double)rand()/RAND_MAX;
//        printf("%12.8lf \n",R);
//    }
//    printf("\n");
//    return 0;
//}

////[PS5-5]
//int main()
//{
//    double R;
//    int i,j,N;
//    unsigned int seed;
//
//    printf("\nEnter number of iterations and seed");
//    printf("\n");
//    scanf("%i %u",&N,&seed);
//    srand(seed);
//    for(j=0;j<6;j=j+1) //Outer for loop for each moment of N values from inside this loop
//    {
//        for(i=0;i<N;i=i+1)
//        {
//            R=(double)rand()/RAND_MAX;
//            printf("%12.8lf \n",R);
//        }
//        printf("\n");
//    }
//    return 0;
//}

////[HW5-7]
//
//int main()
//{
//    FILE * fileout;
//    int j,Nx;
//    double D,rho,dx,x,t,pi=3.1415926;
//    fileout=fopen("/Users/Austin/Desktop/PHY 40/Homework/5/madeyemoody5_7.txt","w");
//    printf("\nEnter dx   ");
//    scanf("%lf",&dx);
//    printf("\nEnter Nx   ");
//    scanf("%d",&Nx);
//    printf("\nEnter D,t   ");
//    scanf("%lf %lf",&D,&t);
//
//    for (j=-Nx; j<Nx+1; j=j+1) //analytical for loop calculations
//    {
//        x=dx*j;
//        rho = exp(-(x*x)/(4.*D*t)) /sqrt(4.*pi*D*t);
//        fprintf(fileout,"\n %12.6lf %12.6lf  ",5.+x,rho);
//    }
//    fclose(fileout);printf("\n");
//    return 0;
//}

////[HW5-8]
//
//int main(void)
//{
//    FILE * fileout;
//    int x,t,Nt;
//    double rho[1000],newrho[1000],D, dt, dx, Ddtodx2, norm,realx; //Double var's declared
//    // two lists declared each with 1000 elements
//    fileout=fopen("/Users/Austin/Desktop/PHY 40/Homework/5/slughorn5_8.txt","w");
//    printf("\nEnter D,dt,dx   ");
//    scanf("%lf %lf %lf",&D, &dt, &dx);
//    Ddtodx2 = D*dt/(dx*dx); //controls the flow of matter from one box of size dx to
//    //adjacent box in time interval dt. Flow v as dt v - hence dt in num.
//    printf("\nEnter number of time steps   ");
//    scanf("%d",&Nt);
//
//    //for loop that initializes values in all elements of rho to 0
//    for (x=0; x<1000;x=x+1)
//    {
//        rho[x]=0.0;
//    }
//    rho[600]=1.0; //middle element either 400 or 600 .. follows the same logic as that from 5_1/5_1
//    for (t=0; t<Nt; t=t+1)
//    {
//        for (x=1; x<999; x=x+1)
//        {
//            newrho[x]=rho[x]+Ddtodx2*(rho[x+1]+rho[x-1]-2.0*rho[x]);
//        }
//        for (x=1; x<999; x=x+1)
//        {
//            rho[x]=newrho[x];
//        }
//        norm=0.0;
//        for (x=1; x<999; x=x+1)
//        {
//            norm=norm+rho[x];
//        }
//        printf("\n norm= %8.3lf  ",norm);
//    }
//    for (x=0; x<1000; x=x+1)
//    {
//        realx=dx*x;
//        fprintf(fileout,"\n %8.4lf %8.4lf",realx, rho[x]/dx);
//    }
//    fclose(fileout);
//    printf("\n");
//    return 0;
//}

////[HW5-9]
//
//int main()
//{
//    double R;
//    int i, j, N, x;
//    unsigned int seed;
//    printf("\nEnter number of steps");
//    printf("\n");
//    scanf("%i", &N);
//
//    //getting random seed variables
//    for (j = 0; j < 10; j++)
//    {
//
//        seed = j;
//        srand(seed);
//
//        x = 0;
//        for (i = 0; i < N; i++)
//        {
//            R = (double) rand() / RAND_MAX;
//            if (R < 0.5)
//                x = x + 1;
//            else
//                x = x - 1;
//        }
//        printf("Seed: %i\tFinal Location: %d\n", j + 1, x);
//    }
//}
