#include <stdio.h>  
int main()
{  
    char str1[50],str2[50],str3[100];     
    int i=0, j=0;          
    printf("Enter the first string:\n");     
    gets(str1);     
    printf("Enter the second string:\n");     
    gets(str2);          
    while (str1[i]!='\0')     
    {         
        str3[i]=str1[i];         
        i++;     
    }          
    while (str2[j]!='\0')     
    {         
        str3[i]=str2[j];         
        i++;         
        j++;     
    }     
    str3[i]='\0';          
    printf("Concatenated string of str1 and str2 is %s\n",str3);  
    return 0; 
}  