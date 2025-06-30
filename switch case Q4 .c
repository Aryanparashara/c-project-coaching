/*#include<stdio.h>
   int main ()
{
  int choice,amount,balance=5000;
  printf("\n Your balance is \u20B95000 ");
  printf("\n  1. Deposit ");
  printf("\n  2. Withdraw ");
  printf("\n  3. Exit ");
  printf("\n Enter your choice ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    printf("\n Enter amount to deposit ");
    scanf("%d",&amount);
    if (amount>=0)
    {
      balance=5000+amount;
      printf("\n balance is %d",balance);
    }
    else 
    {
      printf("\n Invalid amount deposited ");
    }
    break;
    case 2:
    printf("\n Enter amount to withdraw ");
    scanf("%d",&amount);
    if ((amount>=0)&&(amount<=5000))
    {
      balance=5000-amount;
      printf("\n balance is %d",balance);
    }
    else if (amount>=5000)
    {
      printf("\n Insufficient balance ");
    }
    else 
    {
      printf("\n Invalid amount withdrawn ");
    }
    break;
    case 3:
    exit(0);
    break;
    default:
    printf("\n INVALID CHOICE ");
    printf("\n Enter 1,2,3 ");
    break;
  }
}*/
