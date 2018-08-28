#include <stdio.h>
#include <stdlib.h>
#define OUT 0
#define IN 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int print[1000];
	int c, nl, nw, nc, state,prck;
	state=OUT;
	nl=nc=nw=prck=0;
	while ((c=getchar())!= EOF){
		++nc;
		if(c=='\n')
			++nl;
		if(c==' '||c=='\n'||c=='\t')
			state=OUT;
		else if (state==OUT){
			state=IN;
			++nw;
			print[prck++]='\n';
			print[prck++]=c;
		}
		else if(state=IN){
			print[prck++]=c;
		}
	}
	printf("%d %d %d\n",nl,nw,nc);
	int i=0;
	for(i=0;i<prck;i++){
		putchar(print[i]);
	}
	return 0;
}
