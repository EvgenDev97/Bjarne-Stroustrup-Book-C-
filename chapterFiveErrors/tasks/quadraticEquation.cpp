#include "../../std_lib_facilities.h"

double disqualifier(double a, double b, double c)
{
    double d = pow(b,2.0) - (4*a*c);
    if(d < 0 ){
        throw "d must be >=  0";
    }
    return d;
}

int  main()
{
    double a,b,c;
    cin >> a >> b >> c;
    try
    {
        double D =sqrt(disqualifier(a,b,c));
        double x1 = (-b + D)/(2*a);
        double x2 = (-b-D)/(2*a);
        if(a * pow(x1, 2.0) + (b * x1) + c == 0)
            cout << "x1 = " << x1 << " " << "x2 =  "<< x2 << "\n";
    }
    catch(const char* message)
    {
        cerr << message << "\n" ;
    }
    return 0;
}