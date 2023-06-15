#include <filesystem>
#include <iostream>

int main(void) {
  std::filesystem::path p1("foo/bar");
  std::cout << p1 << std::endl;
  std::wcout << p1.native() << std::endl;
  return 0;
}
