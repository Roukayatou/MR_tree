#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc,string argv[])
{
   int i;
   int h;
   int k=2;
   if(argc==2)
   {
       printf("roukayatou:");
       return 1;

   }
   k=atoi(argv[1]);
   if(k<0)
   {
       printf("k is positif number");
       return 1;
   }
   string plaintext=get string("the text:")
   for(i=0;h=strlen(plaintext);i<h;i++)

   {
       if(islower plaintext[i] "h")
      {
         printf("%c",(plaintext [i]-'a'+k)%26+'a');
      }
      else if(isupper plaintext[i]"h")
      {
         printf("%c",(plaintext[i]-'A'+k)%26+'A');
      }
   }



}