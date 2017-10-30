/*
	This program will calculate the canary value of MD5 Calculator in pwnable.kr site.
	As the MD5 Calculator binary, The Captcha value is made from canary value.
	So, We can get the canary value from that logic and Captcah value we got.
*/
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
	// this logic is made from logic of MD5 Calculator
	int v4 = - (iBuff[4] - iBuff[6] + iBuff[7] + iBuff[2] - iBuff[3] + iBuff[1] + iBuff[5] - gatchar);

	//This is the canary value of MD5 Calculator
	//We have to guess the position of canary value and than put it up this value to position we guessed.
	printf("%x",v4); 
	
	return 0;
}
