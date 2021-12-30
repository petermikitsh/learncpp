// Your First C++ Program

#include <iostream>
#include <string>

int main() {

  int someHexValues[] = { 0x01, 0x02, 0x03, 0x04, 0x05 };
  std::string result = "";

  for(int i = 0; i < 5; i++) {
    result.append(std::to_string(someHexValues[i]));
  }

  printf("Hello World. Result is: %s\n", result.c_str());

  // time for pointers
  int result2 = 42;
  printf("result2 is: %d\npointer is: %p\npointer-with-indirection is: %d\n", result2, &result2, *&result2);

  return 0;
}
