#include "Kruh.h"
#include <iostream>
#include <math.h>
#include <cmath>

Kruh::Kruh(double x_in, double y_in, double r_in)
{
    x = x_in;
    y = y_in;
    r = r_in;
    xl = x_min();
    xr = x_max();
    yl = y_min();
    yr = y_max();
    int N = 100;
    dx = (xr-xl)/double(N);
    dy = (yr-yl)/double(N);
    X=xl;
    Y=yl;
    S =0;

    //ctor
}

void Kruh::vypisInfo() const
{
    std::cout << "Polomer: " << r << ";" << " Souradnice stredu [x,y] = " << "[" << x << ";" << y << "]" << ")\n";

}

double Kruh::obsah()
{
    for(int i; i< N; i++){

        for( int j; j<N; j++){


            if(leziUvnitr(X+dx/2, Y+dy/2)==True){
                S= S+ dx*dy;
                }
            Y=Y+dy;
        }
        X=X+dx;
    }
    std::cout << dx << "lol\n";
    return r*r*3.14;
}

double Kruh::obvod()
{

    return 2*3.14*r;
}

bool Kruh::leziUvnitr(double bx_in, double by_in) const
{
    //bx = bx_in;
    //by = by_in;
    double vzdalenost;
    vzdalenost = std::sqrt(pow(bx_in-x,2)+pow(by_in-y,2));
    if (vzdalenost<r){
        return true;
    }
    else{
        return false;
    }

}

Kruh::~Kruh()
{
    //dtor
}
