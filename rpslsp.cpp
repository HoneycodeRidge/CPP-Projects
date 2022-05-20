#include <iostream>
#include <stdlib.h>

int main() {

  /* This is a Rock Paper Scissors game that covers Rock, Paper, Scissors and additionally, Lizard, Spock. */

  // Live long and prosper
  srand (time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!!\n";
  std::cout << "====================\n";

  std::cout << "1) Rock ✊\n";
  std::cout << "2) Paper ✋\n";
  std::cout << "3) Scissors ✌️\n";
  std::cout << "4) Lizard 🦎\n";
  std::cout << "5) Spock 🖖\n";

  std::cout << "shoot! \n\n";
  std::cin >> user;

  if (user == 1) {

    std::cout << "You choose: Rock!\n";

  } else if (user == 2) {

    std::cout << "Your choose: Paper!\n";

  } else if (user == 3) {

    std::cout << "You choose: Scissors!\n";

  } else if (user == 4) {

    std::cout << "You choose: Lizard!\n";

  } else {

    std::cout << "You choose: Spock!\n";

  }

  if (computer == 1) {

    std::cout << "CPU chooses: Rock!\n\n";

  } else if (computer == 2) {

    std::cout << "CPU chooses: Paper!\n\n";

  } else if (computer == 3){

    std::cout << "CPU chooses: Scissors!\n\n";

  } else if (computer == 4) {

    std::cout << "CPU chooses: Lizard!\n\n";

  } else {

    std::cout << "CPU chooses: Spock!\n\n";

  }

  if (user == computer) {

    std::cout << "We have a tie!\n\n";

  } else if (user == 1) {

    if (computer == 2) {

      std::cout << "Paper covers Rock!\nYou've lost!\n\n";

    }

    if (computer == 3) {

      std::cout << "Rock crushes Scissors!\nYou've Won!\n\n";

    }  

    if (computer == 4) {

      std::cout << "Rock crushes Lizard\nYou've Won!\n\n";

    }

    if (computer == 5) {

      std::cout << "Spock vaporizes Rock!\nYou've Lost!\n\n";

    }
    
  } else if (user == 2) {

    if (computer == 1) {

      std::cout << "Paper covers Rock!\nYou've Won!\n\n";

    }

    if (computer == 3) {

      std::cout << "Scissors cuts Paper!\nYou've Lost!\n\n";

    } 

    if (computer == 4) {

      std::cout << "Lizard eats Paper!\nYou've Lost!\n\n";

    }

    if (computer == 5) {

      std::cout << "Paper disproves Spock!\nYou've Won!\n\n";

    }

  } else if (user == 3) {

    if (computer == 1) {

      std::cout << "Rock crushes Scrissors!\nYou've lost!\n\n";

    }

    if (computer == 2) {

      std::cout << "Scissors cuts Paper!\nYou've Won!!\n\n";

    }

    if (computer == 4) {

      std::cout << "Scissors decapitate Lizard!\nYou've Won!\n\n";

    }

    if (computer == 5) {

      std::cout << "Spock smashes Scissors!\nYou've Lost!\n\n";

    }

  } else if (user == 4) {

    if (computer == 1) {

      std::cout << "Rock curshes Lizard!\nYou've Lost!\n\n";

    }

    if (computer == 2) {

      std::cout << "Lizard eats Paper!\nYou've Won!\n\n";

    }

    if (computer == 3) {

      std::cout << "Scissors decapitate Lizard!\nYou've Lost!\n\n";

    }

    if (computer == 5) {

      std::cout << "Lizard poisons Spock!\nYou've Won!\n\n";

    }

  } else if (user == 5) {

    if (computer == 1) {

      std::cout << "Spock vaporizes Rock!\nYou've Won!\n\n";

    }

    if (computer == 2) {

      std::cout << "Paper disproves Spock!\nYou've Lost!\n\n";

    }

    if (computer == 3) {

      std::cout << "Spock smashes Scissors!\nYou've Won!\n\n";

    }

    if (computer == 4) {

      std::cout << "Lizard poisons Spock!\nYou've Lost!\n\n";

    }

  }

}