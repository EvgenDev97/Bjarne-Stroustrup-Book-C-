#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

void restartGetUserValue(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

vector <int> getUserValue()
{
    vector <int> userValue;

    bool valid = false;
    cout << "Введите 4 неповторяющихся числа от 1 до 9 через пробел: " ;
    while (userValue.size() < 4 && !valid)
    {
        int num;
        cin >> num;

        if(cin.fail()){
            cout << "\n" << "Вы ввели символ " << "Введите " << 4 - userValue.size() << " неповторяющихся числа от 1 до 9, а не символы: ";
            restartGetUserValue();
            continue;
        }

        if(num < 1 || num > 9){
            cout << "числа должны быть от 1 до 9, введенные через пробел:";
            restartGetUserValue();
            continue;
        }

        if(find(userValue.begin(), userValue.end(), num) == userValue.end()){
            userValue.push_back(num);
        }else{
            for (size_t i = 0; i < userValue.size(); i++)
            {
                cout << "вы ввели число: " <<userValue[i] << "; ";
            }
            cout<<"числа не должны повторяться " << "\n" <<"введите " << 4 - userValue.size() << " неповторяющихся числа от 1 до 9: " ;
            restartGetUserValue();
            continue;
        }
        if(userValue.size() == 4){
            valid = true;
        } 
    }
    
    return userValue;
}

