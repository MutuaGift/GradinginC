#include <stdio.h>
int main(int argc,char argv)
{
int mark;
printf("enter the mark:");
scanf("%d",&mark);
if (mark< 40)
printf("Fail");
else if (mark< 50)
printf("Grade: D");
else if (mark< 60)
printf("Grade: C");
else if (mark< 70)
printf("Grade: B");
else if (mark< 100)
printf("Grade: A");
else {
printf("Invalid entry!!");
}
return 0;
}
