#include "../my_string.h"

void *my_insert(const char *src, const char *str, my_size_t start_index) {
  char *result = S21_NULL;

  if (src && str) {
    my_size_t src_len = my_strlen(src);
    my_size_t str_len = my_strlen(str);
    if (start_index <= src_len) {
      result = (char *)malloc(src_len + str_len + 1);
      if (result) {
        my_memcpy(result, src, start_index);
        my_memcpy(result + start_index, str, str_len);
        my_memcpy(result + start_index + str_len, src + start_index,
                   src_len - start_index + 1);
      }
    }
  }
  return (void *)result;
}