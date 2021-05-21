#include <iostream>
#include <string>

struct Films {
  std::string title;
  int duration;
  std::string director;
  bool isRelease;
};

int main() {
  struct Films * myfilm, mine;
  myfilm = & mine;
  myfilm -> title = "Merah Putih";
  myfilm -> duration = 120;
  myfilm -> director = "Deo";
  myfilm -> isRelease = false;

  std::cout << myfilm -> title << std::endl;
}