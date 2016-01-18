#include <stdio.h>

int main(){
	int a =1;
	int b =1;
	int* badd = &b;
/* print the memory map */ 
printf("Label\tAddress\t\tValue\n"); 
printf("a: \t %p \t %p\t %d\n", (void *)&a, &a, a); 
printf("b: \t %p \t %p\t %p \t%d\n", (void *)&badd, badd, &b, b);
return 0;
}
