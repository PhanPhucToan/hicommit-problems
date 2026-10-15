#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",	&a);
	scanf("%d",	&b);
	scanf("%d",	&c);
	if (a>b&&a>c){
		printf("so lon hon la :%d", a);
		}
		else if (b>a&&b>c){
			printf("so lon hon la: %d",b);
			}
			else if (c>a&&c>b){
				printf("so lon hon la: %d",c);
				}
				else printf("co hai hoac ba so bang nhau");		
				
				return 0;
				}