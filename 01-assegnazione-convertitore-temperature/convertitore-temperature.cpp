#include <iostream>

int main() {
  int tIniziale;
  int tFinale;
  int stepSize;

  std::cout << "scrivi tIniziale: ";
  std::cin >> tIniziale;

  do {
    std::cout << "scrivi tFinale: ";
    std::cin >> tFinale;
  } while (!(tFinale > tIniziale));

  std::cout << "scrivi stepSize: ";
  std::cin >> stepSize;

  std::cout << "Celsius:\t";
  for (int thisCelsius = tIniziale; thisCelsius < tFinale; thisCelsius += stepSize) {
    std::cout << thisCelsius << "\t";
  };

  std::cout << "\nFahrenheit:\t";
  for (int thisCelsius = tIniziale; thisCelsius < tFinale; thisCelsius += stepSize) {
    std::cout << (thisCelsius*(9.0/5.0))+32 << "\t";
  };

  return 0;
}