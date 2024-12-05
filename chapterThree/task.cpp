#include "../std_lib_facilities.h"

int main()
{
    string first;
    string second;
    char friend_sex = 0;
    int age;
    cin>>first>>second;
    cout<< "Enter friend sex. m or f";
    cin>> friend_sex;
    if(friend_sex == 'm' || friend_sex == 'f'){
        cout<< "Dear "<< first << " " << second<<" "
            <<"your friend is: " << friend_sex << "\n";
        cout << "Enter age of your friend 0-109";
        cin >> age;
        if(age>=0 && age< 12){
            cout << "Your friend is young";
        }else if (age > 12 && age < 50)
        {
            cout << "Your friend is adult";
        }else if( age > 50 && age < 110){
            cout << "your friend is old";
        }else{
            cout << "WTF?" << "Age error";
                return 0;
        }
        
    }else{
        cout<< "friend_sex must be m or f";
        return 0;
    }

    
}