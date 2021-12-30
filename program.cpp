// Your First C++ Program

#include <iostream>
#include <string>

int main()
{

  int someHexValues[] = {0x01, 0x02, 0x03, 0x04, 0x05};
  std::string result = "";

  for (int i = 0; i < 5; i++)
  {
    result.append(std::to_string(someHexValues[i]));
  }

  printf("Hello World. Result is: %s\n", result.c_str());

  // iterate area when length is unknown
  int unknownArrayLength[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0xFFFF, INT_MAX};
  int len = *(&unknownArrayLength + 1) - unknownArrayLength;

  printf(
      "1a: First: %d. Second: %d. First - second: %d.\n",
      *(*(&unknownArrayLength + 1)),
      *unknownArrayLength,
      len);

  std::string result1a = "";
  for (int i = 0; i < len; i++)
  {
    std::string prefix = i == 0 ? "" : ",";
    result1a.append(prefix + std::to_string(unknownArrayLength[i]));
  }
  printf("Hello World 1a. Length is: %d. Result is: %s\n", len, result1a.c_str());

  // time for pointers
  int result2 = 42;
  printf("result2 is: %d\npointer is: %p\npointer-with-indirection is: %d\n", result2, &result2, *&result2);

  return 0;
}
