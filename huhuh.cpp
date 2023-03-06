#include <stdio.h>
 
int main(){
    char name[20];
    char gender;
     
    printf("Enter name:");
    scanf("%c",&name);
    printf("Enter gender (M/F):");
    scanf("%c",&gender);
    if(gender=='m'||gender=='M')
        printf("Mr. %s.\n",name);
    else if(gender=='f'||gender=='F')
        printf("Miss %s.\n",name);
    else
        printf(" N/A %s.\n",name);
     return 0;   
}
