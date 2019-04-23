//выводи пакет в сыром виде. Байты разделены пробелами, а после каждого 8го - доп. пробел и после каждого 16го - новая строка.
static inline int show_pckt(uint8_t *pckt, uint pckt_size)
{
/*  if(NULL == pckt)
  {
    errno = EINVAL;
    return -1;
  }
*/
	int i;
	for(i = 0; i < pckt_size; i++)
	{
		printf("%02x ", pckt[i]);
		if(!((i+1)%16))
			printf("\n");
		else if(!((i+1)%8))
			printf(" ");
	}
  return 0;
}
