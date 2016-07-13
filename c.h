#ifndef C_H
#define C_H
#include <iostream>

class C {
private:
    double re;
    double im;
public:
    C();
    C(double);
    C(double, double);
    
    double r() const; // get
    double r(double); // set
    double i() const; // get
    double i(double); // set
    
    C & operator=(const C&);
    
    friend std::ostream& operator<<(std::ostream & ostr, const C& im);
    friend C operator+(C, const C&);
    friend C operator-(C, const C&);
    friend C operator*(C, const C&);
};


#endif //C_H
