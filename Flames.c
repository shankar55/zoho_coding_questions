#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main()
{    
     char a[100],b[100],c[6]="FLAMES",g;
     int p,q,r,i,j,k,l,e,d=6,f;
     printf("Enter the first name: ");
     gets(a);
     printf("Enter the second name: ");
     gets(b);
     p=strlen(a);
     q=strlen(b);
     r=p+q;                      //add the length of two names
     f=d;
     printf("The Flames between two is: ");
     for(i=0;i<p;i++)
     {
     for(j=0;j<q;j++)
     {
         if(a[i]==b[j])      //checks the elements in two words if equal subtract two from r
         {
         r=r-2;
         break;
         }
     }
     }
     for(k=0;k<f-1;k++)
     {
     e=r%d;
     if(e==0)
     {
          e=d-1;
     }
     else
     {
          e=e-1;
     }
     for(l=e;l<d;l++)        //delete the letters in FLAMES
     {
          c[l]=c[l+1];
     }
         d--;
     }
     g=c[0];                    //gets the last letter remains
     switch(g)                  //prints the relationship between two
     {
     case 'F':
           printf(" Best Friends Forever");
           break;
     case 'L':
           printf("True Love");
           break;
     case 'A':
           printf("Thoughtful Affection");
           break;
     case 'M':
           printf("Happy Marriage");
           break;
     case 'E':
           printf("Enemy");
           break;
     case 'S':
           printf("Sister");
           break;
     default:
           printf("Nothing");
     }
     getch();
}
