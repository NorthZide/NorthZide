#include <stdio.h>


int main(){
	int i, n, t1 = 0, t2 = 1, NextTerm = 0;;
	printf("Enter Number: \n");
	scanf("%d", &n);
	
	printf("The Fibonacci Series are: %d, %d, ", t1, t2);
	NextTerm = t1 + t2;
	
	for (i = 3; i <= n; i++){
		printf("%d, ", NextTerm);
		t1 = t2;
		t2 = NextTerm;
		NextTerm = t1 + t2;
	}
	

return 0;
}

