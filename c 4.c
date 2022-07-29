#include <stdio.h>
typedef struct storeitem{
   int itemcode;
   char itemname[31];
}STOREITEM;

char filename[]=" /storeitem.dat";
  
void Menu()

int main()
{
   void Menu()
}
 void Menu()
{ 
   int opt;
   
   while(1)
   {
     system("cls");
	 printf("\n1, Chrome");
	 printf("\n2,Vlc");
	 printf("\n3, Exit");
	;
	 printf("\nEnter your choice (1-3): ");
	 scanf("%d",&opt);
	 fflush(stdin);
	 
	 switch(opt)
	 {
	   case 1;
	       printf("\nwww.chrome.com");
		   break;
	   case 2;
	        printf("\nwww.vlc.com");
			break;
	   case 3;
	        printf("\nExit");
			return;
			break;
	   
	   default;
		    printf("\ninvalid option selected");
		   
      }
	  printf("\nPress a key to continue....	");    
	  getchar(); 
	 
	 
	  
	 
    }
}
 void Readrecord()
{
 
   FILE *f;
   STOREITEM item;
   
   item.itemcode=1;
   strcpy(item.itemname,"Pencil");
  
   f = fopen(filename,"rb");
   
   fread(&item,sizeof(STOREITEM),1,f);
    printf("\nitemcode : %d",item.itemcode);
   printf("\nitemname : %-30s",item.itemname);
   
   
  
   fclose(f);
}
 void writeRecord()
{

   FILE *f;
   STOREITEM item;
   
   item.itemcode=1;
   strcpy(item.itemname,"Pencil");
   
   f = fopen(filename,"wb");
   
   fwrite(&item,sizeof(STOREITEM ),1,f);
   
   fclose(f);
} 

