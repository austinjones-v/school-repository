// Created by Austin Jones on 4/22/20.
//

#include <stdio.h>
#include <math.h>


////[PS4-1]
//
//int main(void)
//{
//
//    //double type constants declared
//    double g, ms,me,R,V;
//    g = 6.67e-11;
//    ms = 2.0e30;
//    me = 6.0e24;
//    R = 1.5e11;
//    V = 3.0e4;
//
//    //double type initialization var's
//    double x,y,vx,vy,ax,ay,dt,E,t = 0.;
//    int i, N;
//    FILE * fileout;
//    //open & write/rewrite txt file
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/4/PS4_1.txt", "w");
//
//    //initial var's
//    x = R;
//    y = 0;
//    vx = 0;
//    vy = V;
//
//    printf("\nEnter dt,N\n");
//    scanf("%lf %i",&dt,&N);
//
//    //loop to calculate values
//    for (i=1;i<N+1; i=i+1)
//    {
//      //each of these variables are calculated in each loop. Values may vary each loop.
//        x=x+vx*dt;
//        y=y+vy*dt;
//        R = sqrt(pow(x, 2) + pow(y,2));
//        E = (-g*ms*me/R) + (0.5*me*(pow(vx,2)+(vy,2)));
//        ax= -g*ms*x/pow(R,3);
//        ay= -g*ms*y/pow(R,3);
//        vx=vx+ax*dt;
//        vy=vy+ay*dt;
//        t=t+dt;
//
//        fprintf(fileout,"\n%12.6lf %12.6lf",t,E); //this will print out indicated variables to fileout file
//    }
//    fclose(fileout);//this closes the txt file after completion
//    return 0;
//}



////[PS4-3]
//
//
//int main(void)
//{
//
//    //double type constants declared
//    double g, ms,me,R,V;
//    g = 6.67e-11;
//    ms = 2.0e30;
//    me = 6.0e24;
//    R = 1.5e11;
//    V = 3.0e4;
//
//    //double type initialization var's
//    double x,y,vx,vy,ax,ay,dt,Q,t = 0.;
//    int i, N;
//    FILE *fileout;
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/4/PS4_3.txt", "w"); //open write/rewrite .txt
//
//    //initialized var's
//    x = R;
//    y = 0;
//    vx = 0;
//    vy = V;
//
//    printf("\nEnter dt,N\n");
//    scanf("%lf %i",&dt,&N);
//
//    //loop to calculate values
//    for (i=1;i<N+1; i=i+1)
//    {
//        //These are changing variables that depend on each other and
//        //will vary as the loop progresses
//        x=x+vx*dt;
//        y=y+vy*dt;
//        R = sqrt(pow(x, 2) + pow(y,2));
//        ax= -g*ms*x/pow(R,3);
//        ay= -g*ms*y/pow(R,3);
//        vx=vx+ax*dt;
//        vy=vy+ay*dt;
//        t=t+dt;
//        Q = me*(x*vy - y*vx);
//        fprintf(fileout,"\n%12.6lf %12.6lf",t,Q); //Output Q and t values to .txt file
//    }
//    fclose(fileout); //close text file
//    return 0;
//}


//
////[PS4-7]
//
//int main()
//{
//    double x[20000],v[20000],k,m,dt,a,t=0.; //two arrays w 200000 elements with initial values declared
//    int i,N;
//    printf("\nEnter k,m,dt,N   \n");
//    scanf("%lf %lf %lf %i",&k,&m,&dt,&N);
//    x[0]=5.0; //first value in x array initialised at 5
//    v[0]=0.0; //"  " for v=0 array
//    FILE*fileout;
//    //open & write/rewrite text
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/4/PS4_7\2.txt", "w");
//    for (i=0; i<N+1; i=i+1) //for loop placing
//
//        //for x,r the new array element [i+1] is = to the previous insex i * indicated values
//        //this goes on up until the i<N+!
//    {
//        x[i+1]=x[i]+v[i]*dt;
//        a=-k*x[i+1]/m;
//        v[i+1]=v[i]+a*dt;
//        t=t+dt;
//        fprintf(fileout,"\n%12.6lf %12.6lf",x[i+1],v[i+1]);
//
//    }
//    //user input and printed indicated values.
//    printf("\nEnter a time step at which you want to know");
//    printf("\nthe position and velocity:   \n");
//    scanf("%d",&i);
//    printf("\n The position at step %5i is %8.4lf",i,x[i]);
//    printf("\n The velocity at step %5i is %8.4lf\n ",i,v[i]);
//    return 0;
//}

/////////////////// Lab 8

////[PS4-6]
//
//double myfunction();
//int main(void)
//{
//    double x,dx,A,B,C,secondderiv; //variable declaration
//    printf("Enter x and dx \n");
//    scanf("%lf %lf",&x,&dx);
//    A=myfunction(x); //
//    B=myfunction(x+dx);
//    C=myfunction(x-dx);
//    secondderiv=(B+C-2.*A)/(dx*dx);
//    printf(" d^2f/dx^2=  %lf  \n",secondderiv);
//    return 0;
//}
//double myfunction(double x) {
//    double fofx;
//    fofx = pow(x,4);
//    return fofx;
//}

////[PS4-7]
//
//double myfunction();
//int main(void)
//{
//    double x,dx,A,B,C,secondderiv; //variable declaration
//    printf("Enter x and dx \n");
//    scanf("%lf %lf",&x,&dx);
//    A=myfunction(x); //
//    B=myfunction(x+dx);
//    C=myfunction(x-dx);
//    secondderiv=(B+C-2.*A)/(dx*dx);
//    printf(" d^2f/dx^2=  %lf  \n",secondderiv);
//    return 0;
//}
//double myfunction(double x) {
//    double fofx;
//    fofx = exp(x) + x/2;
//    return fofx;
//}
//
