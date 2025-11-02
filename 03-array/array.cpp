#include <iostream>
#include <string>

const std::string validCommands[7] = {"1", "2", "3", "4", "5", "6", "7"};

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
  do {
    std::string choosedCommand;

    do {
      laa::printMenu();
      std::cin >> choosedCommand;
    } while (!(laa::isGoodCommand(choosedCommand)));
    
    if (choosedCommand == "7") {
      std::cout << "grazie per aver utlizzato il programma. arriverderci!" << std::endl
                << std::endl;
      return 0;
    }

    std::cout << std::endl << std::endl << "-----------------------" << std::endl << std::endl;
  } while (true);
}