#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char* argv[]){
        char fname[128];
        unsigned long long otp[2];
/*
        int fd = open("/dev/urandom", O_RDONLY);
        if(fd==-1) exit(-1);

        int i=0;
	for(i =0; i<10;i++)
	{
		if(read(fd, otp, 16)==16) printf("%llu\n",*otp);
        }

	close(fd);
*/

	printf("%lu\n",strtoul(argv[1], 0, 16));
	return 0;


}
