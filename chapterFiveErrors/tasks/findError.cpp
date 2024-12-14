#include "../../std_lib_facilities.h"

int main()
{
    try
    {
        string s = "Success ! \n" ;
         for (int i=0 ; i<s.size() ; ++i)
            cout << s [i] << " " ; 
        keep_window_open();
        return 0;
    }
    catch(const std::exception& e)
    {
        
        std::cerr<< "ERROR" << e.what() << '\n';
        return 1;
    }
    catch(...){
        std::cerr << "unknow exeption!\n";
        keep_window_open();
        return 2;
    }
}