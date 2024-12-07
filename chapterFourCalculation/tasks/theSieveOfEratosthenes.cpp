#include <iostream>
#include <vector>


int main() {
  double x;
  std::cin >> x;

  std::vector<bool> is_prime(x, true); // Массив булевых значений, true - предполагаем простое
  is_prime[0] = is_prime[1] = false; // 0 и 1 не являются простыми

  for (int p = 2; p * p <= x; ++p) {
    if (is_prime[p]) {
      for (int i = p * p; i <= x; i += p) {
        is_prime[i] = false; // Отмечаем все кратные p как непростыеs
      }
    }
  }

  std::cout << "Простые числа от 1 до x" << std::endl;
  for (int p = 2; p <= x; ++p) {
    if (is_prime[p]) {
      std::cout << p << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}
