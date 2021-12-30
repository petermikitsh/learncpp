// Your First C++ Program

#include <iostream>
#include <string>

int main() {

  int someHexValues[] = { 0x01, 0x02, 0x03, 0x04, 0x05 };
  std::string result = "";

  for(int i = 0; i < 5; i++) {
    result.append(std::to_string(someHexValues[i]));
  }

  printf("Hello World. Result is: %s", result.c_str());
  return 0;
}
