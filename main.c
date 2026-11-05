#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%f",&dtb);
  scanf("%f",&drl);
  if(dtb >= 9.0 && drl >= 90){
    printf("HOC BONG XUAT SAC");
  }
  else if(( dtb >= 8.0 && drl < 9.0 && drl >= 80)||
        (dtb >= 9.0 && drl <= 8.0 && drl < 90)){
    printf("HOC BONG GIOI");
  }
  else if(( dtb >=7.0  && dtb < 8 && drl >=70)||
        (dtb >=8.0 && dtb < 9.0 && drl >= 70 && drl < 80)||
          (dtb >= 9.0 && drl >= 70 && drl <80)){
    printf("HOC BONG KHA");
  }
  else {
    printf("KHONG DAT");}

  return 0;
}