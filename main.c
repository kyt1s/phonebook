#include<stdio.h>
#include<stdlib.h>
int main()
{
   int ch;
   char str1[50],str2[50],str3[50],str4[50],t;
   FILE *fa,*fv;
   system("cls");    //clear black screen
   printf("\n============================\n");
     printf("   My Phone book Application\n");
   printf("============================\n");
   printf("       1 Add Phone No\n");
   printf("       2 View Phone No\n");
   printf("       3 Exit\n");
   printf("=============================\n");
   printf("Enter Your choice:");
   scanf("%d",&ch);
   if(ch==1)
   {
    fa=fopen("addno.txt","a");
   printf("Enter the first name:");
   fgets(str1,50,stdin);
   printf("Enter the last name:");
   fgets(str2,50,stdin);
   printf("Enter mobile no:");
   fgets(str3,50,stdin);
   printf("Enter city:");
   fgets(str4,50,stdin);
   fputs(str1,fa);
   fputs(str2,fa);
   fputs(str3,fa);
   fputs(str4,fa);
   }
    else if(ch==2)
    {
    fv=fopen("addon.txt","r");
    t=fgetc(fv);
    while(t!=EOF)
    {
        printf("%c",t);
        t=fgetc(fv);
    }
    }
   else (ch==3);
     exit(0);
   main();
    fclose(fa);
    fclose(fv);
   return 0;
}
