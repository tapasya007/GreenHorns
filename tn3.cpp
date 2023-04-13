#include<stdio.h>

main()
{
	   int gs,bs,hra,da,ta;
	   printf("enter your base salary:-");
	   scanf("%d",&bs);
	   printf("enter your hra:-");
	   scanf("%d",&hra);
	   printf("enter your da:-");
	   scanf("%d",&da);
	   printf("enter your ta:-");
	   scanf("%d",&ta);
	   
	   hra=hra*bs/100;
	   da=da*bs/100;
	   ta=ta*bs/100;
	   
	   gs=bs+hra+da+ta;
	   printf("gross salary =%d",gs);
	
	
	
	
	
	
	
}
