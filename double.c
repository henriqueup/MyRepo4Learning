#include <stdio.h>

int timesTwo(int n){
	return n*3;
}

int main(){
	int input;

	scanf("%d", &input);
	printf("Number entered times 2 = %d", timesTwo(input));
}