#include "../my_string.h"

int my_memcmp(const void *str1, const void *str2, my_size_t n) {
  const unsigned char *s1 = (const unsigned char *)str1;
  const unsigned char *s2 = (const unsigned char *)str2;
  int result = 0;

  for (my_size_t i = 0; i < n && !result; i++) {
    result = s1[i] - s2[i];
  }
  return result;
}