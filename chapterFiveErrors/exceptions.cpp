#include "../std_lib_facilities.h"

class Bad_area {};

int area (int width, int length)
{
    if(width <= 0 || length <=0) throw Bad_area{};
    return width * length;
}

int main()
{
    try
    {
       int x = -1;
       int y = 2;
       int z = 4;
       int area1 = area(x,y);
       int area2 = area(y,z);
       double res = area1 / area2;
    }
    catch(Bad_area)
    {
        std::cout <<"Error" << "\n";
    }
    
}