#include<stdio.h>
#include<conio.h>
void main()
{
   int mm=0,s=50,m=59,h=11,t=23;
   char time[10];
   while(1)
   {
    clrscr();
    mm++;
    if(mm==20000)
    {
     s++;
     mm=0;
    }
    else if(s==60)
    {
       m++;
       s=0;
    }
    else if(m==60)
    {
      h++;
      t++;
      m=0;
    }
    else if(h==13)
    {
     h=1;
    }
    else if(t==24)
    {
    t=1;
    }
    printf("%d:%d:%d ",h,m,s);
    if(t<=11)
    {
     printf("AM\n");
    }
    else if(t>=12 && t<=23)
    {
     printf("PM\n");
    }
   }
}