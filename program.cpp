// Your First C++ Program

#include <iostream>
#include <string>
#include <array>

int main()
{
  // Example 1: Static Iteration: Create a string representation of an array
  printf("\n---Example 1: Static Length Iteration---\n\n");
  int result1arr[] = {0x01, 0x02, 0x03, 0x04, 0x05};
  std::string result1 = "";
  for (int i = 0; i < 5; i++)
  {
    result1.append(std::to_string(result1arr[i]));
  }
  printf("result1 is: %s\n", result1.c_str());

  // Example 2: Basic Pointers and Indirection
  printf("\n---Example 2: Basic Pointers and Indirection---\n\n");
  int result2 = 42;
  printf("result2 is: %d\n", result2);
  printf("result2 pointer is: %p\n", &result2);
  printf("result2 pointer-with-indirection is: %d\n", *&result2);

  // Example 3: Create a string representation of an array, while dynamically computing its length
  printf("\n---Example 3: Dynamic Iteration---\n\n");
  int result3arr[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0xFFFF, INT_MAX};
  int result3len = *(&result3arr + 1) - result3arr;
  std::string result3 = "";
  for (int i = 0; i < result3len; i++)
  {
    std::string prefix = i == 0 ? "" : ",";
    result3.append(prefix + std::to_string(result3arr[i]));
  }
  printf("result3 is: %s\n", result3.c_str());
  printf("result3 length is: %d\n", result3len);

  // Example 4: Simple Memory Math
  printf("\n---Example 4: Simple Memory Math---\n\n");
  int result4[] = {5, 4, 3, 2, 1, 100, 1000};
  printf("result4 size of array (in memory): %lu\n", sizeof(result4));
  printf("result4 array memory end (hex): %p\n", (&result4 + 1));
  printf("result4 array memory begin (hex): %p\n", result4);
  printf("result4 array memory end (decimal): %lu\n", (unsigned long)(&result4 + 1));
  printf("result4 array memory begin (decimal): %lu\n", (unsigned long)result4);

  // Example 5: Advanced Memory Math - Array with items of different sizes in memory
  // Slightly harder: use raw array
  printf("\n---Example 5: Advanced Memory Math---\n\n");
  std::string result5raw[] = {"1st", "2nd item", "3rd longest item", "4th even longer item"};
  int result5rawLen = *(&result5raw + 1) - result5raw;
  printf("result5raw %lu\n", (long)*(&result5raw + 1));
  printf("result5raw %lu\n", (long)result5raw);
  printf("result5raw length: %d\n", result5rawLen);

  // Easy mode: use std::array
  std::array<std::string, 3> result5 = {"1st", "2nd item", "3rd longest item"};
  printf("result5 length: %lu\n", result5.size());

  return 0;
}
