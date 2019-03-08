#include <stdio.h>
#include "sum.h"

int main(){
	int a,b;
	scanf("%d %d",a,b);
	int i = sum(a,b);
	printf("%d", i);
}

