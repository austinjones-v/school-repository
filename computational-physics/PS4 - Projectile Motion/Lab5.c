//Lab 5
// Created by Austin Jones on 4/19/20.
//

#include <stdio.h>
#include <math.h>


////[PS 3-1]
//
//int main() {
//    double x, v, k, b, m, dt, a, t = 0.;
//    int i, N;
//    FILE *fileout;
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/P3_1.txt", "w");
//    printf("\nEnter initial x,v   \n");
//    scanf("%lf %lf", &x, &v);
//    printf("\nEnter k,b,m,dt,N   \n");
//    scanf("%lf %lf %lf %lf %i", &k, &b, &m, &dt, &N);
//    for (i = 1; i < N + 1; i = i + 1) {
//        x = x + v * dt;
//        a = -k * x / m - b*v/m;
//        v = v + a * dt;
//        t = t + dt;
//        fprintf(fileout, "\n%12.6lf %12.6lf", t, x);
//    }
//    fclose(fileout);
//    return 0;
//}
//
//
//
////[PS 3- 2]
//
//int main() {
//    double f, x, v, m, dt, a, t = 0.;
//    int i, N;
//    FILE *fileout;
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/PS3_2.txt", "w");
//    printf("\nEnter initial x,v   \n");
//    scanf("%lf %lf", &x, &v);
//    printf("\nEnter f,m,dt,N   \n");
//    scanf("%lf %lf %lf %i",&f, &m, &dt, &N);
//    for (i = 1; i < N + 1; i = i + 1) {
//        x = x + v * dt;
//        a = f/m;
//        v = v + a * dt;
//        t = t + dt;
//        fprintf(fileout, "\n%12.6lf %12.6lf", t, x);
//    }
//    fclose(fileout);
//    return 0;

}

////[PS3-3]
////Projectile motion in 2D
//
//int main(void)
//{
//    double x,y,vx,vy,ax,ay,m,dt, t = 0.;
//    int i, N;
//    FILE *fileout;
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/PS3-3.txt", "w");
//    printf("\nEnter initial x,y,vx,vy   \n");
//    scanf("%lf %lf %lf %lf", &x,&y,&vx,&vy);
//    printf("\nEnter m,dt,N   \n");
//    scanf("%lf %lf %i", &m,&dt,&N);
//
//    for (i=1;i<N+1 && y>=0; i=i+1)
//    {
//        x=x+vx*dt;
//        y=y+vy*dt;
//        ax=0.;
//        ay=-9.8;
//        vx=vx+ax*dt;
//        vy=vy+ay*dt;
//        t=t+dt;
//        fprintf(fileout,"\n%12.6lf %12.6lf",x,y);
//    }
//    fclose(fileout);
//    return 0;
//}




////[PS3-4]
////Projectile motion in 2D
//
//int main(void)
//{
//
//    double g, ms,me,R,V;
//    g = 6.67e-11;
//    ms = 2.0e30;
//    me = 6.0e24;
//    R = 1.5e11;
//    V = 3.0e4;
//
//    double x,y,vx,vy,ax,ay,dt, t = 0.;
//    int i, N;
//    FILE *fileout;
//    fileout = fopen("/Users/Austin/Desktop/PHY 40/Homework/PS3-4.txt", "w");
//    printf("\nEnter initial x,y,vx,vy   \n");
//    scanf("%lf %lf %lf %lf", &x,&y,&vx,&vy);
//    printf("\nEnter dt,N   \n");
//    scanf("%lf %i",&dt,&N);
//
//
//    //rather than typing entire value out for R, V etc.
//    // user will input fraction the values i.e. for x: in 1 >> out 1R
//    //for vy: in = 0.5 >> out = 0.5*V
//    x = x*R; y = y*R; vx = vx*V; vy=vy*V;
//    for (i=1;i<N+1 && y>=0; i=i+1)
//    {
//        x=x+vx*dt;
//        y=y+vy*dt;
//        ax= -g*me*x/pow(R,3);
//        ay= -g*me*y/pow(R,3);
//        vx=vx+ax*dt;
//        vy=vy+ay*dt;
//        t=t+dt;
//        fprintf(fileout,"\n%12.6lf %12.6lf",x,y);
//    }
//    fclose(fileout);
//    return 0;
//}



