#ifndef KRUH_H
#define KRUH_H

#include "Tvar.h"


class Kruh : public Tvar
{
    public:
        Kruh(double x_in, double y_in, double r_in);
        virtual ~Kruh();
        void vypisInfo() const;
        virtual double obsah() ;
        double obvod();
        virtual bool leziUvnitr(double bx_in, double by_in) const;

        virtual double x_min() const {return x - r;};
        virtual double x_max() const {return x + r;};
        virtual double y_min() const {return y - r;};
        virtual double y_max() const {return y + r;};

        //const int N = 100;
        //const double dx = (xr-xl)/double(N);
        //double dy = (yr-yl)/double(N);

    protected:

    private:
        double x,y,r, bx, by, dx, dy, X, Y, S;
};

#endif // KRUH_H
