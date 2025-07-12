#include "../my_string.h"

char* my_strrchr(const char* str, int c) {
  char* res = S21_NULL;
  while (*str) {
    if (*str == (char)c) {
      res = (char*)str;
    }
    str++;
  }
  return res;
}