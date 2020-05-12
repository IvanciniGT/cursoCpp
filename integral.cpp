#include <iostream>
#include <cmath>

double areaTrapecio(double altura1,double altura2,double a, double b){
    double alturaMedia=(altura1+altura2)/2;
    double base=b-a;
    return alturaMedia*base;
}

double f(double x){
    return x*x*x-x*x+2;
}

double integral(/*funcion,*/double a, double b, double tolerancia){

    double ha, hb, m, hm;
    ha=f(a);
    hb=f(b);
    m=(a+b)/2;
    hm=f(m);

    double areaT1, areaT2, areaTGrande;
    areaT1=areaTrapecio(ha,hm,a,m);
    areaT2=areaTrapecio(hm,hb,m,b);
    areaTGrande=areaTrapecio(ha,hb,a,b);

    double error = std::abs(areaTGrande-areaT1-areaT2);

    if(error>tolerancia){
        areaT1=integral(/*funcion,*/a, m, tolerancia);
        areaT2=integral(/*funcion,*/m, b, tolerancia);
    }
    return areaT1+areaT2;

}

int main()
{
    std::cout << integral(-2,2,0.000000001);
    return 0;
}
