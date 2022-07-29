#include<stdio.h>

int main()

{
   int i;
   
   char opt;
   
   
   puts("\n\t\t\t\tAge Colculation  Program\n");
   puts("\t\t\t\t-------------------------");
   
   
   
   
  
	do
	{  
	 
	 int j=0;
	 
	 printf("\n1. Enter Your Birth Year : ");
     scanf("%d%c",&i,&opt);
	 
	   while (i<=2021)
	   
       {
	     
		 
		  
	      
		
	 	  i++;
	 	  j++;
		  
		  if(i>=2021)
		  {
	       
		   printf("\n\t%d -- Year to Your Age is  %d\n",i,j);
		   break;
		  }	    
		 
	   }
	    
	    printf("\nDo You Want to Continue Y/N : ");
	    opt= getchar();	
		   	     
	    
	
	
    }
    while(opt=='y'); 
	
	  
	 
    	
	
	return 0;

   
   	   
	
	

}

