#include <iostream>
#include <string>
#include <stdlib.h>     
#include <time.h>

const std::string validCommands[7] = {"1", "2", "3", "4", "5", "6", "7"};
const int ARRAY_SIZE = 50;

namespace laa {
  void printMenu() {
    std::cout << "menu:" << std::endl;
    std::cout << "➜ 1. media" << std::endl;
    std::cout << "➜ 2. massimo" << std::endl;
    std::cout << "➜ 3. minimo" << std::endl;
    std::cout << "➜ 4. rigenerare array" << std::endl;
    std::cout << "➜ 5. valori vicino alla media" << std::endl;
    std::cout << "➜ 6. calcolare la moda" << std::endl;
    std::cout << "➜ 7. uscire dal programma" << std::endl << std::endl;
    std::cout << "inserisci un numero fra 1 e 7: " << std::endl << std::endl;
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
    int thisGeneratedArray[ARRAY_SIZE];
    double media;
    int minimo;
    int massimo;
    int thisMaxRipetizioni = 0;
    int numeroRipetizioniArray[100];

    do {
      laa::printMenu();
      std::cin >> choosedCommand;
    } while (!(laa::isGoodCommand(choosedCommand)));

    if (choosedCommand == "7") {
      std::cout << "grazie per aver utlizzato il programma. arriverderci!" << std::endl
                << std::endl;
      return 0;
    }

    for(int i=1; i<=ARRAY_SIZE; i++) {
      const int thisGeneratedNumber = (rand()%100)+1;

    };

    std::cout << std::endl << std::endl << "-----------------------" << std::endl << std::endl;
  } while (true);
}