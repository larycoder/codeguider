#include <stdio.h>

int main(){
	printf("enter words: \n");
	int count[100];
	int c,i=0;
	while((c=getchar())>=0){
		count[i++]=c;
	}
	printf("now i will replace something:\n");
	for(int j=0;j<i;j++){
		if(count[j]=='\t') printf("\\t");
		else if (count[j]=='\b') printf("\\b");
		else if (count[j]==' ') printf("\\\\");
		else {
			//printf("%d",count[j]);
			putchar(count[j]);
		}
	}
	return 0;
}
