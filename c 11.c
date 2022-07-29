#include<stdio.h>

int main()
{
     
	  float age;
	  char opt;
	  puts("\n-------------------------- Find Your Age With Your Birth Year --------------------------");
						   
	  
	  

    do
	{

	  
	  printf("\nEnter Your Birth Year ( 2000 - 2020 ) :");
	  scanf ("%g%c",&age,&opt);
	  
	  if(age==2000)
	  {
	  
	     puts("\n\n\tYour age = 20\n");
	  }
	  
	  if(age==2001)
	  {
	    puts("\n\n\tYour age = 19\n");
	  }
	  
	  if(age==2002)
	  {
	    puts("\n\n\tYour age  = 18\n");
	  }
	  
	  if(age==2003)
	  {
	    puts("\n\n\tYour age = 17\n"); 
	  }
	  
	  if(age==2004)
	  {
	    puts("\n\n\tYour age = 16\n");
	  }
	  
	  if(age==2005)
	  {
	    puts("\n\n\tYour age  = 15\n");
	  }
	  
	  if(age==2006)
	  {
	    puts("\n\n\tYour age = 14\n"); 
	  }
	  
	  if(age==2007)
	  {
	    puts("\n\n\t Your age = 13\n");
	  }
	  
	  if(age==2008)
	  {
	    puts("\n\n\tYour age = 12\n");
	  }
	  
	  if(age==2009)
	  {
	    puts("\n\n\tYour age = 11\n");
	
	  }
	  
	  if(age==2010)
	  {
	    puts("\n\n\tYour age = 10\n");
	  }
	  
	  if(age==2011)
	  {
	    puts("\n\n\tYour age = 9\n");
	  }
	  
	  if(age==2012)
	  {
	    puts("\n\n\tYour age  = 8\n");
	  }
	  
	  if(age==2013)
	  {
	    puts("\n\n\tYour age = 7\n"); 
	  }
	  
	  if(age==2014)
	  {
	    puts("\n\n\tYour age = 6\n");
	  }
	  
	  if(age==2015)
	  {
	    puts("\n\n\tYour age  = 5\n");
	  }
	  
	  if(age==2016)
	  {
	    puts("\n\n\tYour age = 4\n"); 
	  }
	  
	  if(age==2017)
	  {
	    puts("\n\n\t Your age = 3\n");
	  }
	  
	  if(age==2018)
	  {
	    puts("\n\n\tYour age = 2\n");
	  }
	  
	  if(age==2019)
	  {
	    puts("\n\n\tYour age = 1\n");
	
	  }
	  
	  if(age==2020)
	  {
	    puts("\n\n\tYour Birth Year  so   Your age = 0\n");
	  }
	  
	   
	    if(age>2020)
	  
	  {
	    puts("\n\n\t\t Your birth Year is Greater than 2020\n ");
	  }
	  
	  if(age<2000)
	  {
	    puts("\n\n\t\t Your birth Year is lesser than 2000\n");
	  }
	  
	  
	  printf("Do You Want to Continue ? :");
	  opt=getchar();
	  
	  
    }
	while(opt=='Y' || opt=='y');	 
	  
	  return 0;
	  
	  
	  
	  
	  
}

