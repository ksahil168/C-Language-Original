#include<stdio.h>
int main()
{ 
int a = 10 , b = 2 ,d,e,f,g,h,i,j;
d = a*=b;
e = a+=b;
f = a-=b;
g = a&=b;
h = a^=b;
i = a<<=b;
j = a>>=b;
printf(" d = %d\n", d);
printf("e = %d\n", e);
printf("f = %d\n", f);
printf("g = %d\n", g);
printf("h = %d\n", h);
printf("i = %d\n", i);
printf("j = %d\n", j);

return 0;
}
