#include<stdio.h>
int main()
{ int a = 10 , b;
b= ++a;
++a;
printf("%d\n", b);
printf("%d", a);
return 0;
}
