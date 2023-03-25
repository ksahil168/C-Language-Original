//Program to display its own source code as output

FILE *fp;
char c;
fp = fopen(_FILE_, "r");
do {
	c = getc(fp);
	putchar(c);}
	while(c!= EOF);

}
	fclose(fp;)