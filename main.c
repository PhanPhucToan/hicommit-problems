#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%f",&dtb);
  scanf("%f",&drl);
  if(dtb >= 9.0&&drl >= 90){
    printf("HOC BONG XUAT SAC");}
  else if(8.0 <= dtb < 9.0&&80 <= drl < 90){
    printf("HOC BONG GIOI");}
  else if(7.0 <= dtb < 8.0&&70 <= drl < 80){
    printf("HOC BONG KHA");}
  else {
    printf("KHONG DAT");}


  
  
  return 0;
}