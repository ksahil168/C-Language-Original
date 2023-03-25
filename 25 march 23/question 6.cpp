// check a number is even or odd without using %, control statement & conditional operator No, if, switch,for, while, do, goto,?:

char *str[2] = {"Even", "odd"};
int n;
printf("Enter a number");
scanf("%d", &n);
printf("%s", str[n&1]);