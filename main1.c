#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int x, y;
    int plus, minus, multyply, division, remainder;
    
    printf("enter 2 integers : 16 7");
    scanf("%d %d", &x, &y);
    
    plus = x+y;
    minus = x-y;
    multyply = x*y;
    division = x/y;
    remainder = x%y;

    printf("plus is %i\n", x+y);
	printf("minus is %i\n", x-y);
    printf("multyply is %i\n", x*y);
    printf("division is %i\n", x/y);
    printf("remainder is %i\n", x%y);

	
	return 0;
}
