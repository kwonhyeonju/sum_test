#include "sum.h"

int sum(int a, int b){
	int hap = 0;
	for(int i=a; i<=b; i++){
		hap += i;
	}
	return hap;
}

