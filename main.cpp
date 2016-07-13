#include <iostream>
#include<math.h>
#include<cmath>
#include "C.h"
using namespace std;

int main(){
    C i(0,1);
    C r1, r2, r3, r4;
    
    cout << "The magic of complex numbers: "<< endl;
    r1 = i;
    r2 = i*i;
    r3 = i*i*i;
    r4 = i*i*i*i;
    
    cout << "i^1 = " << r1 << endl;
    cout << "i^2 = " << r2 << endl;
    cout << "i^3 = " << r3 << endl;
    cout << "i^4 = " << r4 << endl;
    return 0;
}
