#include "../std_lib_facilities.h"

int main ()
{
    /*Вектор - это просто последовательность элементов, к которым
    можно обращаться по индексу*/
    vector<int> v = {5, 7 ,9 ,12} ;
    vector <string> s = {"a", "b", "cd", "fvv"};
    //инициализация вектора
    vector <int> vi(6);
    vi[2] = 7;
    cout << vi[2] << "\n";
    //обход вектора
    for (size_t i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<<"\n";
    //цикл по диапзону (полуоткрытая последовательсность)
    for (int x : v)
    {
       cout<< x << " ";
    }
    // увеличение вектора
    /*vector похож на массив в языке С и других языках программирования. Однако вам нет необходимости заранее указывать размер (длину) вектора, и
    вы можете добавлять в него элементы по мере необходимости*/
    vector <int> empty;
    empty.push_back(1);// добавляет элемент в конец
    //161

    
}