#include "C.h"
#include <iostream>

C::C(){
    re = 0.0;
    im = 0.0;
    
}

C::C(double real){
    re= real;
    im= 0.0;
}

C::C(double real, double imaginary){
    re = real;
    im = imaginary;
}

C& C::operator=(const C& rhs){
    if ( this == &rhs)
        return *this;
    else
    {
        re = rhs.r();
        im = rhs.i();
        return *this;
    }
}


double C::r() const{
    return re;
}

double C::r(double r){
    re = r;
    return r;
}

double C::i() const{
    return im;
}

double C::i(double i){
    im = i;
    return i;
}

C operator+(C lhs, const C& rhs) {
    lhs = lhs.r() + rhs.r();
    lhs = lhs.i() + rhs.i();
    
    return lhs;
}

C operator-(C lhs, const C& rhs) {
    lhs = lhs.i() - rhs.i();
    lhs = lhs.r() - rhs.r();
    return lhs;
}

C operator*(C lhs, const C& rhs) {
    double d_re = lhs.r();
    double d_im = lhs.i();
    d_re = lhs.r() * rhs.r();
    d_im = lhs.i() * rhs.i();
    
    lhs.re = d_re;
    lhs.im = d_im;
    
    return lhs;
}

std::ostream & operator<<(std::ostream & ostr, const C& c)
{
    ostr <<  c.r() << " +- " <<  c.i() << std::endl;
    return ostr;
}
