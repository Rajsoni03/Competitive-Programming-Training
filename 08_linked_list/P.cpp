#include <stdio.h>

int main(){
	int a = 10;
	int *p = &a;

	printf("%d\n", sizeof(p));
	int arr = (int)p;

	printf("%p\n", p);
	printf("%x\n", arr);
	printf("%d\n", arr);

	printf("%d\n", *(int*)arr);
}