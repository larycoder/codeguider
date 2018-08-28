#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[128];
	int c;
	for(c=0;c<128;c++)
		array[c]=0;
	while((c=getchar())!=EOF){
		++array[c];
	}
	int j,k;
	for(j=0;j<128;j++){
		if(array[j]!=0){
			printf("%3d[%2d][ ",j,array[j]);
			if(j=='\n')
				printf("\b\\n");
			else if(j=='\t')
				printf("\b\\t");
			else if(j==' ')
				printf("\b\\\\");
			else if(j=='\b')
				printf("\b\\b");
			else if(j=='\a')
				printf("\b\\a");
			else if(j=='\r')
				printf("\b\\r");
			else
				putchar(j);
			printf("]");
			for(k=0;k<array[j];k++)
				printf(" *");
			printf("\n");
		}
	}
	return 0;
}
