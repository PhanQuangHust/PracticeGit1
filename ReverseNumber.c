#include<stdio.h>

int main()
{
  int x, y;
  
  printf("Nhap so x: ");
  scanf("%d", &x);
  
  while(y != 0)
  {
  
  y = 0;
  y *= 10;
  y += x % 10;
  x -= x % 10;
  x /= 10;
  }
  
  printf("%d", y);
  
  return 0;
  
  
}
