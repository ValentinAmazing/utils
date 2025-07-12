#include "../my_string.h"

void *my_memset(void *str, int c, my_size_t n) {
  // Заполлняем передаваемым значением
  if (n != 0) {
    unsigned char *s = (unsigned char *)str;
    const unsigned char value = (unsigned char)c;

    while (n--) {
      *s++ = value;
    }
  }
  return str;
}