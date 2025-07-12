#include "../my_string.h"

// Вычисляет длину начального сегмента str1, который полностью состоит из
// символов, не входящих в str2 Иначе говоря, выполняет поиск первого вхождения
// в строку str1 любого из символов строки str2, возвращает количество символов
// до найденного первого вхождения
my_size_t my_strcspn(const char* str1, const char* str2) {
  my_size_t len1 = my_strlen(str1);
  my_size_t len2 = my_strlen(str2);
  bool found = false;
  my_size_t i = 0;
  while ((i < len1) && (found == false)) {
    for (my_size_t j = 0; (j < len2) && (found == false); j++)
      if (str1[i] == str2[j]) found = true;
    if (!found) i++;
  }
  my_size_t res = len1;
  if (found) res = i;

  return res;
}