#include "../my_string.h"

int my_strncmp(const char *str1, const char *str2, my_size_t n) {
  int result = 0;

  if (n != 0) {
    do {
      char c1 = *str1++;
      char c2 = *str2++;

      if (c1 != c2) result = c1 - c2;
      if (c1 == '\0' || result != 0) break;

    } while (--n != 0);
  }
  return result;
}
