#include<stdio.h>


int main()
{
  char response[10];
  int answer;
  int check;
    
	do
	{
  
       printf("yes or no :");
       scanf("%s",response);
	   if(response=="yes")
	      {
		  answer=1;
		   check=0;
		  }
		  
		else if(response=="no")
		   {
		   answer=0;
		   check=0;
		   }
		 else
		   {
		     check=1;
		   }
  
  
    }
     while(check==1);
	 return (answer);
}

