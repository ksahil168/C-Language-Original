#include <stdio.h>
 
int main(){
    char name[20] ;
    char gender;
    char marital_status ;
    printf("Enter name: ");
    gets(name) ;
    printf("Enter gender (M/F): ");
    scanf("%c",&gender);
    printf("Enter your marital_status (y/n) ");
    scanf(" %c",&marital_status);
     
    if(gender=='m'&& marital_status=='y')
        printf("Mr. %s. \n",name);
    else if(gender=='f' && marital_status=='n')
        printf("Miss %s. \n",name);
    else if(gender=='f' && marital_status=='y')
        printf(" Mrs %s. \n",name);
        else
        printf("Mr %s. \n",name);
     
    return 0;   
}
