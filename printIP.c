// input a number between 0~2^32, print the corresponding IP 

#include <stdio.h>
void printIP(unsigned int n);

int main()
{
	unsigned int n;
	scanf("%u", &n);    // %u  unsigned int format
	printIP(n);
	return 0;
}

void printIP(unsigned int n)
{
	unsigned int mask = 0xff;    // 0x000000ff , remain the last byte
	printf("%u", n>>24);
	printf(".%u", n>>16 & mask);
	printf(".%u", n>>8 & mask);
	printf(".%u\n", n & mask);
}
