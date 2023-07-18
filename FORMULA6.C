#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,ans;
 clrscr();
 printf("ENTER YOUR 3 VALUE==>");
 scanf("%d%d%d",&x,&y,&z);
 ans=(x*x*x)-(3*x*x*y)-(3*y*y*x)-(y*y*y)-(3*y*y*z)-(6*x*y*z)-(3*y*y*z)-(3*x*z*z)-(3*y*z*z)-(z*z*z);
 printf("ANS=%d",ans);
 getch();
}