#include <cctype>
#include <cstddef>
#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
  }
  for (int i = 1; i < argc; i++) {
    for (size_t j = 0; j < strlen(argv[i]); j++) {
      char x = toupper(argv[i][j]);
      std::cout << x;
    }
    std::cout << std::endl;
  }
  return (0);
}
