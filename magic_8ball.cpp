#include <iostream>
#include <cstdlib>

int main() {

  // Your future is here
  std::cout << "MAGIC 8-BALL: \n\n";

  srand(time(NULL));

  int answer = std::rand() % 10;

  if (answer == 0) {

    std::cout << "It is certain.\n";

  } else if (answer == 1) {

    std::cout << "Most likely.\n";

  } else if (answer == 2) {

    std::cout << "Outlook good.\n";

  } else if (answer == 3) {

    std::cout << "Reply hazy, try again.\n";

  } else if (answer == 4) {

    std::cout << "Signs point to yes.\n";

  } else if (answer == 5) {

    std::cout << "Better not tell you now.\n";

  } else if (answer == 6) {

    std::cout << "My reply is no.\n";

  } else if (answer == 7) {

    std::cout << "Don't count on it.\n";

  } else if (answer == 8) {

    std::cout << "My sources say no.\n";

  } else if (answer == 9) {

    std::cout << "As I see it, yes.\n";

  } else {

    std::cout << "Very doubtful.";

  }


}