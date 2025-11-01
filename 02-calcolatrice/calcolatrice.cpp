#include <iostream>
#include <string>

const int         N_INPUTS          = 3;
const std::string intKeys[N_INPUTS] = {"n1", "n2", "n3"};
const std::string validCommands[5]  = {"A", "B", "C", "D", "X"};

namespace laa {
  void printMenu() {
    std::cout << "istruzioni che puoi usare:\n";
    std::cout << "➜ A: addizione:\t\tn1+n2+n3\n";
    std::cout << "➜ B: multiplicazione:\tn1*n2\n";
    std::cout << "➜ C: sottrazione:\tn3-n1\n";
    std::cout << "➜ D: divisione:\t\tn1/n2\n";
    std::cout << "➜ X: uscita programma\n";
  };

  bool isGoodCommand(std::string thisString) {
    for (int i = 0; i < 5; i++) {
      const std::string thisValidCommand = validCommands[i];
      if (thisValidCommand == thisString) { return true; }
    };
    return false;
  }
} // namespace laa

int main() {
  do {
    int         intValues[N_INPUTS];
    std::string choosedCommand;
    double      valueToDisplay;

    for (int i = 0; i < N_INPUTS; i++) {
      do {
        std::cout << "inserire " << intKeys[i] << ": ";
        std::cin >> intValues[i];
      } while (!(intValues[i] >= 1 && intValues[i] <= 100));
    };

    do {
      std::cout << std::endl;
      laa::printMenu();
      std::cout << "inserisci il commando scelto: ";
      std::cin >> choosedCommand;
    } while (!(laa::isGoodCommand(choosedCommand)));

    if (choosedCommand == "X") {
      std::cout << "grazie per aver utilizzato l'app. arrivederci!\n\n";
      return 0;
    };

    if (choosedCommand == "A") { valueToDisplay = intValues[0] + intValues[1] + intValues[2]; }
    if (choosedCommand == "B") { valueToDisplay = intValues[0] * intValues[1]; }
    if (choosedCommand == "C") { valueToDisplay = intValues[2] - intValues[0]; }
    if (choosedCommand == "D") { valueToDisplay = (double) intValues[0] / (double) intValues[1]; }

    std::cout << "il valore calcolato è: " << valueToDisplay << std::endl << std::endl;

    std::cout << "----------------------------" << std::endl << std::endl;
  } while (true);
};