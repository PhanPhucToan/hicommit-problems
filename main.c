#include <stdio.h>

int main() {
  int dtb,drl;
  scanf("%d",&dtb);
  scanf("%d",&drl);
  if(dtb >= 9.0&&drl >= 90){
    printf("HOC BONG XUAT SAC:%d");}
  else if(8.0 <= dtb < 9.0&&80 <= drl < 90){
  printf("HOC BONG GIOI:%d");}
  else if(7.0 <= dtb < 8.0&&70 <= drl < 80){
    printf("HOC BONG KHA:%d");}
  else if(dtb < 7.0&&drl < 70){
    printf("KHONG DAT:%d");}
  

  
  return 0;
}