#include <stdio.h>
int main()
{
    char str[100];
    int counter;
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
    if(str[counter]>='0' && str[counter]<='9')
    countDigits++;
    countAlphabet++;
    else if(str[counter]==' ')
    countSpaces++;
    else
    countSpecialChar++;
    }
    return(0);
    }
 
