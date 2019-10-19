#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1=0,n2=1,sum=0,num,i=0;
	printf("enter a number\n");
	scanf("%d",&num);
		printf("%d\n",n1);
			printf("%d\n",n2);
	for(;i<num;i++){
		sum=n1+n2;
		n1=n2;
		n2=sum;
			printf("%d\n",sum);
	}

}
