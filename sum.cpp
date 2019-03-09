#include "sum.h"

int sum(int a,int b){
	int hap=0;
	for(int i=0; i=b-a; i++){
	int c = a+i;
	hap += c;
	}
	return hap;
}

