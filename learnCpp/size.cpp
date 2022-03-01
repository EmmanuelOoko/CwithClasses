#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Carrots");
  grocery.push_back("German Bread");
  grocery.push_back("Cheese");

  std::cout << grocery.size() << "\n";
  
}