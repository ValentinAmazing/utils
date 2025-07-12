#include "../my_string.h"

void *my_trim(const char *src, const char *trim_chars) {
  if (src == S21_NULL) return S21_NULL;

  const char *str = src;
  // пустой trim_chars - по дефолту удалить пробелы и "\n\t\v\f\r"
  if (trim_chars == S21_NULL || my_strlen(trim_chars) == 0)
    trim_chars = " \n\r\t\v\f";

  // удалить символы слева
  const char *check = my_strchr(trim_chars, *str);
  while (check != S21_NULL && check[0] != '\0') {
    str++;
    check = my_strchr(trim_chars, *str);
  }

  // удалить символы справа
  my_size_t len = my_strlen(str);
  check = my_strchr(trim_chars, str[len - 1]);
  while (len > 0 && check != S21_NULL && check[0] != '\0') {
    len--;
    check = my_strchr(trim_chars, str[len - 1]);
  }
  // получили итоговую длину строки(len) без лишних символов по краям
  // создаем новую строку в памяти нужной длины
  char *buffer_pointer = S21_NULL;
  char *buffer = malloc((len + 1) * sizeof(char));
  if (buffer != S21_NULL) {
    buffer_pointer = buffer;
    while (*str != '\0' && len > 0) {
      *buffer = *str;
      buffer++;
      str++;
      len--;
    }
    *buffer = '\0';
  }
  return buffer_pointer;
}
