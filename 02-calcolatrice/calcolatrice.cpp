#include <iostream>

const int N_INPUTS = 3;
// 3 array di stringhe di 2 caratteri però c++ vuole [3] perchè oltre ai 2 caratteri esiste anche
// un carattere nullo '\0'
const char intKeys[N_INPUTS][N_INPUTS] = {"n1", "n2", "n3"};
const char validCommands[5][2]         = {"A", "B", "C", "D", "X"};

namespace laa {
  void printMenu() {
    std::cout << "istruzioni che puoi usare:\n";
    std::cout << "A: addizione:\tn1+n2+n3\n";
    std::cout << "B: multiplic.:\tn1*n2\n";
    std::cout << "C: sottrazione:\tn3-n1\n";
    std::cout << "D: divisione:\tn1/n2\n";
    std::cout << "X: uscita programma";
  };
  
  int addizione(int n1, int n2, int n3) {
    return n1 + n2 + n3;
  };

  int prodotto(int n1, int n2) {
    return n1 * n2;
  };

  int sottrazione(int n1, int n2) {
    return n1 - n2;
  };

  double divisione(double n1, double n2) {
    return n1 / n2;
  };


  bool isGoodCommand(char thisString[2]) {
    for (int i = 0; i < 5; i++) {
      const char thisValidCommand[2] = validCommands[i];
      if (thisValidCommand == thisString) { return true; }
    };
    return false;
  }
} // namespace laa

int main() {
  do {
    int  intValues[N_INPUTS];
    char choosedCommand[2];
    double valueToDisplay;

    for (int i = 0; i < N_INPUTS; i++) {
      do {
        std::cout << "inserire " << intKeys[i] << ": ";
        std::cin >> intValues[i];
      } while (!(intValues[i] >= 1 && intValues[i] <= 100));
    };

    do {
      laa::printMenu();
      std::cin >> choosedCommand;
    } while (!(laa::isGoodCommand(choosedCommand)));

    if (choosedCommand == "X") {
      std::cout << "grazie per aver utilizzato l'app. arrivederci!";
      return 0;
    }

    if (choosedCommand == "A") { valueToDisplay = laa::addizione(intValues[0], intValues[1], intValues[2]); }
    if (choosedCommand == "B") { valueToDisplay = laa::prodotto(intValues[1], intValues[2]); }
    if (choosedCommand == "C") { valueToDisplay = laa::sottrazione(intValues[3], intValues[1]); }
    if (choosedCommand == "D") { valueToDisplay = laa::divisione(intValues[1], intValues[2]); }

    std::cout << "il valore calcolato è: " << valueToDisplay << std::endl;
  } while (true);
};