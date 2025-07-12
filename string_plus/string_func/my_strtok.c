#include "../my_string.h"

char *my_strtok(char *str, const char *delim) {
  static char *memo = "";

  if (str == S21_NULL) str = memo;

  // Удалить разделители в начале строки
  const char *check = my_strchr(delim, *str);
  while (check != NULL && check[0] != '\0') {
    str++;
    check = my_strchr(delim, *str);
  }

  char *result = str;

  for (; *str != '\0'; str++) {
    // проверяем строку по одному символу
    check = my_strchr(delim, *str);
    if (check != S21_NULL && check[0] != '\0') {
      // если символ присутствует в строке разделитля то
      // ставим вместо этого чара конец строки
      *str = '\0';
      // сместить указатель за символ разделитель
      str++;
      break;
    }
  }
  // запоминаем указатель str в static memo
  memo = str;

  return my_strlen(result) ? result : S21_NULL;
}
