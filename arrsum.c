#include<stdio.h>
  int main()
{
  int arr[6]={1,2,3,4,5,6};
  int sum=0;
  
  for(int i=0;i<6;i++)
{ 
  sum=sum+arr[i];
}
  printf("sum all of elements array: %d",sum);
  
  return 0;
}  