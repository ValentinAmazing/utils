#include "../my_string.h"

char* my_strchr(const char* str, int c) {
  char* symbol = S21_NULL;
  for (; *str != '\0'; str++) {
    if (*str == c) {
      symbol = (char*)str;
      break;
    }
  }
  if (c == '\0') symbol = (char*)str;

  return symbol;
}