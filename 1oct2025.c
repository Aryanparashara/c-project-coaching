// Descending order 
/*#include<stdio.h>
int main()
{
  int arr[50],i,j,n,temp;
  printf("\n Enter total no. of elements to store : ");
  scanf("%d",&n);
  printf("\n Enter %d elements : ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-i-1);j++)
    {
      if(arr[j]<arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  printf("\n Array elements is descending order: ");
  for(i=0;i<n;i++)
  {
    printf("\n %d",arr[i]);
  }
}*/
