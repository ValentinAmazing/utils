#include "../my_string.h"

char* my_strncpy(char* dest, const char* src, my_size_t n) {
  char* res = dest;
  while (*src && 0 < n) {
    *dest = *src;
    n--;
    dest++;
    src++;
  }

  while (n > 0) {
    n--;
    *dest++ = '\0';
  }

  return res;
}