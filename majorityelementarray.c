#include<stdio.h>
int main(void)
{int x,p,i,j;
scanf("%d",&x);
p=x/2;
int a[x];
for(i=0;i<x;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
{
int counter=0;
for(j=0;j<x;j++)
{
if(a[i]==a[j])
{counter=counter+1;
}
}
if(counter>p)
{
printf("%d",a[i]);
break;}
}return 0;
}