#include "src/lib/solution.h"
#include <iostream>



int main() {
  Solution solution;
  std::string from = "add";
  std::string to = "egg";
  std::cout << "input: " << from << " & "<< to << std::endl;
  std::cout << "output:" << std::endl;
  solution.Mapping(from, to);


  std::string from2 = "extreme";
  std::string to2 = "egg";
  std::cout << "input: " << from2 << " & "<< to2 << std::endl;
  std::cout << "output:" << std::endl;
  solution.Mapping(from2, to2);

  std::string from3 = "harder";
  std::string to3 = "waiter";
  std::cout << "input: " << from3 << " & "<< to3 << std::endl;
  std::cout << "output:" << std::endl;
  solution.Mapping(from3, to3);

  std::string from4 = "aabbrr";
  std::string to4 = "ddeekk";
  std::cout << "input: " << from4 << " & "<< to4 << std::endl;
  std::cout << "output:" << std::endl;
  solution.Mapping(from4, to4);
}
