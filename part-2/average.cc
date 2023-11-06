// Gala Ferdaous
// galaferdaous@csu.fullerton.edu
// @galarenee
// partners: n/a

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }

  double sum = 0.0;
  int count = 0;

  for (int i = 1; i < arguments.size(); ++i) {
    double num = std::atof(arguments[i].c_str());
    sum += num;
    count++;
  }

  double average = sum / count;

  std::cout << "average = " << average << std::endl;

  return 0;
}

