#include <stdio.h>

int main() {
  int s1,d1,s2,d2,s3,d3;
  scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);
  int max = 0;

  for (int time = 1 ; time <= 24 ; time++){
    int need = 0;

    if (s1 <= time && time < d1)
       need++;
    if (s2 <= time && time < d2)
       need++;
    if (s3 <= time && time < d3)
       need++;

    if (need > max)
      max = need;
  }
  printf("%d",max);
  return 0;
}
