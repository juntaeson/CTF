#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{

	int t = atoi(argv[1]);
	int gatchar = atoi(argv[2]);

	srand(t);

	int iBuff[8];
	int i=0;
	for(i=0; i<=7 ; ++i)
		iBuff[i] = rand();

	int v4 = - (iBuff[4] - iBuff[6] + iBuff[7] + iBuff[2] - iBuff[3] + iBuff[1] + iBuff[5] - gatchar);

	printf("%x",v4);
	return 0;
}
