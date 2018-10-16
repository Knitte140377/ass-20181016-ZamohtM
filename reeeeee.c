#include <stdio.h>
#include <math.h>

int SquareArea(int a) {
    
    return a*a;
}

int SquareCirc(int a) {
    
    return a*4;
}

int RectArea(int a, int b) {
    
    return a*b;
}

int RectCirc(int a, int b) {
    
    return 2*(a+b);
}

int RectTriangleArea(int a, int b) {
    
    return (a*b)/2;
}

double RectTriangleCirc(int a, int b) {
    
    double c = sqrt(pow(a,2)+pow(b,2));
    return a+b+c;
}

double CircleArea(double r) {
    
    return pow(r,2)*3.14;
}

double CircleCir(double r) {
    
    return 2*r*3.14;
}

double RingArea(double r1, double r2) {
    
    return 3.14*(pow(r1,2)-pow(r2,2));
}

double RingCir(double r1, double r2) {
    
    double u1 = 2*r1*3.14;
    double u2 = 2*r2*3.14;
    return u1 + u2;
}

double Current(double U,double R) {
    
    return U/R;
}

double Ps2KW(double ps) {
    
    return ps/1.36;
}

double Kw2PS(double kw) {
    
    return kw*1.36;
}


int main()
{
    int a = 2;
    int b = 2;
    double r = 2;
    double r1 = 2;
    double r2 = 4;
    double R = 2;
    double U = 2;
    double ps = 2;
    double kw = 2;
    
    printf("Result: %d\n",SquareArea(a));
    printf("Result: %d\n",SquareCirc(a));
    printf("Result: %d\n",RectArea(a,b));
    printf("Result: %d\n",RectCirc(a,b));
    printf("Result: %d\n",RectTriangleArea(a,b));
    printf("Result: %f\n",RectTriangleCirc(a,b));
    printf("Result: %f\n",CircleArea(r));
    printf("Result: %f\n",CircleCir(r));
    printf("Result: %f\n",RingArea(r1,r2));
    printf("Result: %f\n",RingCir(r1,r2));
    printf("Result: %f\n",Current(U,R));
    printf("Result: %f\n",Ps2KW(ps));
    printf("Result: %f\n",Kw2PS(kw));

    return 0;
}
