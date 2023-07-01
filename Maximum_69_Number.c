#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//9966
    int c=0,r,s,num=0,rev=0; 
	while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    while(rev>0)//6699
    {
        s=rev%10;
        if(s==6 && c<1)
        {
            s=9;
            c++;
        }
        num=(num*10)+s;
        rev=rev/10;
    }
    
   
    printf("%d",num);
}