#include <stdio.h>
int main(int argc, const char * argv[]) {
	int x,y,z,sum;
	printf("Please enter 3 numbers, use one space between them\n");
	scanf("%d %d %d",&x,&y,&z);
	sum = x+y+z;
	printf("The sum is %d\n",sum);
	return 0;
}
