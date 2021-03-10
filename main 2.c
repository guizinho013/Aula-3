#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y = 0, z = 0;
	
	for(x=0;x<=10;x=x+1){
		printf("%i\n",x);	
	}
	
	while(y <= 10){
		printf("%i\n",y);
		y = y + 1;
	}
	
	do{
		printf("%i\n",z);
		z = z + 1;	
	}while(z <= 10);
}
