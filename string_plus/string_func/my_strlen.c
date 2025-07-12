#include "../my_string.h"

// Возвращает длину строки без учета нуль символа
my_size_t my_strlen(const char *str) {
  my_size_t len = 0;
  while (*str) {
    len++;
    str++;
  }

  return len;
}