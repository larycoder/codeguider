#include <stdio.h>
void matrix(int colume,int row,int nb);
int check();
int main(){
	int colume=0,row=0,nb=0,j;
	do{
		printf("\nmatrix:");
		scanf("%d%d%d\n",&colume,&row,&nb);
		matrix(colume,row,nb);
		j=check();
	}while(j);
	return 0;
}

void matrix(int colume,int row,int nb){
	for(int i=0;i<row;i++){
		for(int j=0;j<colume;j++){
			printf("%d   ",nb);
		}
		printf("\n\n");
	}
}

int check(){
	printf("do you want to continue?");
	char check;
	scanf("%c",&check);
	if(check=='n') return 0;
}
