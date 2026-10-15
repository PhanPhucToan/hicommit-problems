#include <stdio.h>

int main() {
	int a;
	printf("nhap so: ");
	scanf("%d", &a);
	
	if ( a < 15){
		printf("LANH");
	} else if(a < 25 ){
		printf("MAT");
	} else if(a < 35 ){
		printf("NONG");
	} else {
		printf("RAT NONG");
	}
  return 0;
}
