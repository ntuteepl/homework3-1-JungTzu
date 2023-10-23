#include <stdio.h>

int main() {

int num1,num2;
scanf ("%d %d",&num1,&num2);

//判斷num1、num2位數
int digit1 = (int)log10(num1)+1;
int digit2 = (int)log10(num2)+1;

int total1,total2;
int count1 = num1 , count2 = num2;

//計算num1、num2各位數和
for(int i = 0; i < digit1; i++){
  total1 += (count1-count1/10*10);
  count1 /= 10;
}
for(int j = 0; j < digit2; j++){
  total2 += (count2-count2/10*10);
  count2 /= 10;
}

//判num1、num2各位數和大小
if(total1 > total2)
  printf("%d",num2);
else if(total1 < total2)
  printf("%d",num1);
else
  if(num1 > num2)
    printf("%d",num2);
  else
    printf("%d",num1);
}
