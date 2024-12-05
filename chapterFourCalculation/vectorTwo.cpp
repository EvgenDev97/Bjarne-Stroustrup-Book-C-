#include "../std_lib_facilities.h"

int main()
{
    vector <double> d;
    for (double value; cin>>value;)
    {
        d.push_back(value);
    }
    /*в цикле for все, что должно происходить, показано в заголовке, так что такой код легче понять, и труднее допустить в нем случайную ошибку*/
    sort(d);
    for(double x: d){
        cout<<x << " ";
    }
   
    //<Ctrl+Z>.  завершение потока ввода
    vector <string> s;
    for(string str;cin >> str;){
        s.push_back(str);
    }
    sort(s);
    for (size_t i = 0; i < s.size(); i++)
        {
            if(!s[i].find("fuck")){
            s[i]= "BLEEP";
        }
            /*первого слова предшественника нет (i==O), поэтому сначала следует проверить номер
            слова и объединить эти проверки с помощью оператора*/
            if(i == 0 || s[i-1] != s[i])
                cout << s[i] << " ";
        }
    vector <int> ints(5);
    
     return 0;
}