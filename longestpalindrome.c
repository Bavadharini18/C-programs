#include <stdio.h>
#include<string.h>

int main()
{
    char a[10];
    scanf("%s",a);
    int n=strlen(a);
    int len=(n*2)+1;
    char b[len];
    int c[len],d=0,y;
    int j=0;
    for(int i=0;i<len;i++)
    {
       b[j]='#';
       b[++j]=a[i];
       ++j;
    }
    for(int i=0;i<len;i++)
    {
       printf("%c",b[i]); 
    }
    for(int i=0;i<len;i++)
    {
        int count=0;
        int x=i;
    for(int k=i+1;k<len;k++)
    {
      --x;
     if(b[x]!=b[k])
     break;
     else
     count++;
    }
    c[d++]=count;
       
    }
  for(int i=0;i<len;i++)
  {
      printf("%d ",c[i]);
  }
  int max=c[0];
 for(int i=0;i<len;i++)
 {
     if(max<c[i])
     {
         max=c[i];
          y=i;
     }
 }
 printf("%d ",max);
 printf("%d ",y);
for(int i=y-max;i<=max+y;i++)
{
    if(b[i]!='#')
    {
        printf("%c",b[i]);
    }
}
}