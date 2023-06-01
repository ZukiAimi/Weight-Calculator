#include <iostream>

int main() {
  
  double weight_on_earth;
  int Planet_Number;

  std::cout << "Input your weight\n";
  std::cin >> weight_on_earth;

  std::cout << "What planet do you want to fight on\n";
  std::cout << "Enter 1 for Mercury\n";
  std::cout << "Enter 2 for Venus\n";
  std::cout << "Enter 3 for Mars\n";
  std::cout << "Enter 4 for Jupiter\n";
  std::cout << "Enter 5 for Saturn\n";
  std::cout << "Enter 6 for Uranus\n";
  std::cout << "Enter 7 for Neptune\n";
  std::cin >> Planet_Number;
  
  
  switch(Planet_Number){
    case 1:
    weight_on_earth *= 0.38;
    std::cout << weight_on_earth;
    break;
    case 2:
    weight_on_earth *= 0.91;
    std::cout << weight_on_earth;
    break;
    case 3:
    weight_on_earth *= 0.38;
    std::cout << weight_on_earth;
    break;
    case 4:
    weight_on_earth*=2.34;
    std::cout << weight_on_earth;
    break;
    case 5:
    weight_on_earth*=1.06;
    std::cout << weight_on_earth;
    break;
    case 6:
    weight_on_earth*=0.92;
    std::cout << weight_on_earth;
    break;
    case 7:
    weight_on_earth*=1.19;
    std::cout << weight_on_earth;
    break;
    default:
    std::cout << "Error either number is not one that is listed or is to high, try again";


  }
   
}