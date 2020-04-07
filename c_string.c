#include<stdio.h>
#include<string.h>
void main()
{
    char nameCopy[12];
    char name1[10]="Hi ";
    char name2[10]="Viewers"
    
    //1. strlen();
    
    int length = strlen(name2);
    printf("\nLength :%d\n",length)
    
    //2. strcpy(string1,string2)
    
    strcpy(nameCopy,name1);
    printf("\nCopied String : %s\n",nameCopy);
    
    
    //3. strcat(string1,string2)
    
    strcat(nameCopy,name2);
    printf("\nConcatenated String : %s\n",nameCopy);
    
    
    //4. strcmp(string1,string2);

    int res=strcmp(nameCopy,name2);
    printf("\n%d\n",res);

}
