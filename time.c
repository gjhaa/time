#include <stdio.h>
#include <time.h>
int main()
{
	time_t rawtime;
	time(&rawtime);
	struct tm * info;
	info=localtime(&rawtime);
	//printf("time=%ld\n",timea/3600);
//	printf("%s\n",*info);
	printf("time-->%s",asctime(info));

}
