#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
  int *b = new int[N_ELEMENTS];
  // int osszeg = 0;
  int j = 1;
  std::cout << "1-100 ertekek duplazasa\n";
  for (int i = 0; i < N_ELEMENTS; i++) {
    b[i] = j * 2;
    // osszeg += b[i];
    j++;
  }
  for (int i = 0; i < N_ELEMENTS; i++) {
    std::cout << "Ertek: " << b[i] << " " << std::endl;
  }
  // std::cout << "Összeg: " << osszeg << std::endl;
  std::cout << "\nAtlag szamitasa: " << std::endl;
  int atlag;
  for (int i = 0; i < N_ELEMENTS; i++) {
    atlag += b[i];
  }
  atlag /= N_ELEMENTS;
  std::cout << "Atlag: " << atlag << std::endl;
  delete[] b;
  std::cout << "The end..so far";
  return 0;
}
