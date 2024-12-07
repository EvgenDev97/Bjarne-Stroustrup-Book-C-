#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    /*Этот код сначала сортирует вектор, чтобы дубликаты были рядом, а затем использует std::unique,
     который перемещает все дубликаты в конец вектора. Затем метод erase удаляет все элементы, начиная с позиции первого дубликата до конца вектора.
    После выполнения этого кода вектор vec будет содержать уникальные элементы.*/
    std::vector<int> vec = {1, 2, 3, 1, 4, 2, 5};
    
    std::sort(vec.begin(), vec.end()); // сортировка вектора
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end()); // удаление дубликатов
    
    for (int num : vec) {
        std::cout << num << " ";
    }
    
    return 0;

}
