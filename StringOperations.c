#include<stdio.h>
void main()
{
    //k is count of numbers
    //l is count of Operators
    //j act as a marker check collision ocuurs or not
    //d act as a marker for occurance of abnormal state
    //b, c contains first and second element for operations 
    char a[30];
    int i,j=0,n,k=0,l=0,c,b,d=1;
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=48&&a[i]<=58)
        {
            if(l==0)
            {
                k++;            //length of number
            }
            else
            {
                j=1;           //wrong input ie 123*1/+
                break;
            }
        }
        else
        {
           l++;
        }
    }
    if(k!=l+1||j==1)           //wrong input ie 1234*/
    {
        printf("Input wrong");
    }
    else
    {
        l=0;
        b=a[0]-48;            //first element for arithmetic operation
        for(i=1;i<k;i++)
        {
            c=a[i]-48;        //second element for arithmetic operation
            switch(a[k+l])    //select the operator
            {                 //b is assigned as first element for every time
                case '+':
                    b=b+c;
                    break;
                case '-':
                    b=b-c;
                    break;
                case '*':
                    b=b*c;
                    break;
                case '/':
                    if(c==0)  //abnormal state of 1/0 error
                    {
                        printf("Abnormal state");
                        d=0;
                    }
                    b=b/c;
                    break;
            }
            if(d==0)
            {
                break;
            }
            l++;             //switch to next operator
        }
        if(d!=0)             //print the result
        {
            printf("%d",b);
        }
    }
}
