#include <stdio.h>

int main()
{

       int unit;
	   float PaymentAmount,a,b,c,d,e;
	   
	    
	   printf("\nEnter Your Unit  : ");  
	   scanf("%d",&unit);
	   
	   
	  
	  
if(unit<=200)
	   
	   {
	         
			  PaymentAmount=unit-100;
			  PaymentAmount= PaymentAmount*1.5+20;
			  
			   
			  
	
	   }
	   
       else if(unit>=201 && unit<=500)
	   
	   {
	   
	          a=unit-100;
			  
			  b=a-100;
			  
			  c=a-b;
			  
			  c =c * 2;
			  b = b * 3;
			  
			  PaymentAmount=c+b+30;
	   }
	
	   else if(unit>=501)
	   
	   {
	      a=unit-100;
			  
			  b=a-400;
			  
			  c=a-b;
			  
			  d = c-b;
			  e = a-c;
			  
			  PaymentAmount= (b*3.5) + (*4.6) + (e*6.6) + 50;      
			  
	   }
	   
	   
	   printf("\nYour unit is %d ",unit);
	          
	   printf("\nYour Payment is %.2f RS ",PaymentAmount);
	   
	   
	   

}     

	   
	 


