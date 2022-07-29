#include<stdio.h>


int  main()



{

   char str1[50];
   char str2[50];
   
   printf("\n1.\tType Your Name :");
   scanf("%s",str1);
   
   printf("\n2.\tRetype Your Name :");
   scanf("%s",str2);
   
   
   if (strcmp(str1,str2)==0)
   {
     printf("\n\n\t---Your name is Matched---\n ");
   }
   
   if(strcmp(str1,str2)!=0)
   {
     printf("\n\n\t---Your name is Unmatched---\n");
   }
  
   
   
   
   
   
      
   
   
   
   
   return 0;
}  

