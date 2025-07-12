#include "../my_string.h"

// Добавляет строку, на которую указывает src, в конец строки, на которую
// указывает dest, длиной до n символов
char* my_strncat(char* dest, const char* src, my_size_t n) {
  char* res_str = dest;
  if (n > 0) {
    my_size_t dest_len = my_strlen(dest);
    my_size_t src_len = my_strlen(src);
    my_size_t len_to_add = src_len;
    if (n < src_len) len_to_add = n;
    for (my_size_t i = 0; i < len_to_add; i++) res_str[dest_len + i] = src[i];

    res_str[dest_len + len_to_add] = '\0';
  }
  return res_str;
}