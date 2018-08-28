#include<stdio.h>
float sqr(float x);

int main(){
	printf("enter number: ");
	float x=0;
	scanf("%f",&x);
	printf("sqare rot of %d is %f",(int)x,sqr(x));
	return 0;
}

float sqr(float x){
	float x1=x;
	int i;
	for(i=0;i<100;i++){
		float x2=x1;
		x1=(x-x2*x2)/(2*x2)+x2;
	}
	return x1;
}
