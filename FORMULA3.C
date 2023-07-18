#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,ans;
clrscr();
printf("ENTER YOUR 2 VALUE==>");
scanf("%d%d",&x,&y);
ans=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
printf("ANS=%d",ans);
getch();
}