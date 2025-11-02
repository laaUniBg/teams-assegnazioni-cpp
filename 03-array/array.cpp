#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

const std::string validCommands[7] = {"1", "2", "3", "4", "5", "6", "7"};
const int         ARRAY_SIZE       = 50;

namespace laa {
  void printMenu() {
    std::cout << "menu:\n";
    std::cout << "➜ 1. media\n";
    std::cout << "➜ 2. massimo\n";
    std::cout << "➜ 3. minimo\n";
    std::cout << "➜ 4. rigenerare array\n";
    std::cout << "➜ 5. valori vicino alla media\n";
    std::cout << "➜ 6. calcolare la moda\n";
    std::cout << "➜ 7. uscire dal programma\n\n";
    std::cout << "inserisci un numero fra 1 e 7: \n\n";
  }

  bool isGoodCommand(std::string thisCommand) {
    for (int i = 0; i < 7; i++) {
      const std::string thisGoodCommand = validCommands[i];
      if (thisCommand == thisGoodCommand) { return true; }
    };
    return false;
  };
}; // namespace laa

int main() {
  srand(time(0));

  do {
    std::string choosedCommand;
    int         thisGeneratedArray[ARRAY_SIZE];
    double      media;
    int         minimo;
    int         massimo;
    int         thisMaxRipetizioni = 0;
    int         numeroRipetizioniArray[100][100];

    do {
      laa::printMenu();
      std::cin >> choosedCommand;
    } while (!(laa::isGoodCommand(choosedCommand)));

    if (choosedCommand == "7") {
      std::cout << "grazie per aver utlizzato il programma. arriverderci!\n\n";
      return 0;
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
      const int thisGeneratedNumber = (rand() % 100) + 1;
      thisGeneratedArray[i]         = thisGeneratedNumber;
      media                         = (media + thisGeneratedNumber) / (i != 0 ? 2 : 1);
      if (thisGeneratedNumber < minimo) { minimo = thisGeneratedNumber; };
      if (thisGeneratedNumber > massimo) { massimo = thisGeneratedNumber; };
    };

    std::cout << "\n\n-----------------------\n\n";
  } while (true);
}