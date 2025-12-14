#include<stdio.h>
int main()
{
  int units;
  float amount,charge, totalamount;
  printf("enter total units");
  scanf("%d",&units);
  if(units<=50)
  {
  	amount=units*2.5;
  	charge=30;
  }
else if(units<=100)
  {
  	amount=units*3.00;
  	charge=40;
  }
else if(units<=200)
{
	amount=units*3.5;
	charge=45;
}
else if(units<=300)
{
	amount=units*4.00;
	charge=50;
}
else
{
	amount=units*5.00;
	charge=75;
}
totalamount=amount+charge;
printf("total amount =%2f",totalamount);
return 0;
}
