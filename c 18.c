#include<stdio.h>

int main()

{
   
   char opt; 
   
   puts("\n\t\t\t\tAge Colculation  Program\n");
   puts("\t\t\t\t-------------------------");
   
   
   
   
  
	do
	{  
	 
	   int i;
	   int j=0;
	   int choice;
	 
	   printf("\n  Enter Your Birth Year : ");
       scanf("%d%c",&i,&opt);
	 
	   puts("\n\t1. List Out Year to Your Age ");
	   puts("\n\t2. Your Age is Now ? ");
	 
	   printf("\n  Choose Your Choice 1(or)2 : ");
	   scanf("%d%c",&choice,&opt);
	 
	   if(choice==1)
	   {
	     
		  
		    while (i<=2020)
	   
            {
	     
		      printf("\n\t%d -- Year to Your Age is  %d\n",i,j);
		      i++;
	 	      j++;
		    }
		   
	       
	   }
	 
	   
	   if(choice==2)
	   
	   {
	               while (i<=2020)
	              {
	     
		 
		  
	      
		
	 	                 i++;
	 	                 j++;
		  
		               if(i>=2020)
		               {
	       
		                   printf("\n\t Your Age is  %d\n",j);
		                   break;
		               }   	    
       
		 
	              }
	    
	    
		   	     
	    
	    }
	
	     printf("\n  Do You Want to Continue Y/N : ");
	     opt= getchar();	
    
	}
    while(opt=='y' || 'Y'); 
	
	  
	 
    	
	
	return 0;

   
   	   
	
	

}

