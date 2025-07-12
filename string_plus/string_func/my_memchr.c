#include "../my_string.h"

void* my_memchr(const void* str, int c, my_size_t n) {
  void* symbol = S21_NULL;

  const unsigned char* p = str;
  unsigned char ch = (unsigned char)c;
  for (my_size_t i = 0; i < n; i++) {
    if (p[i] == ch) {
      symbol = (void*)(p + i);
      break;
    }
  }
  return symbol;
}