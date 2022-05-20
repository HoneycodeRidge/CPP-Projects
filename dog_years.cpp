// Dog Years Mini Project

#include <iostream>

int main() {
  
  int dog_age = 15;
  /* The first 2 years are equal to 21 human years. */
  int early_years = 21;
  /* Each following year counts as 4 human years. */
  int later_years = (dog_age - 2) * 4;
  /* Add these together to get the correct value in human years. */
  int human_years = (early_years + later_years);

  std::cout << "My name is Haley! Ruff ruff, I am " << human_years << " years\nold in human years.\n\n";
  
}