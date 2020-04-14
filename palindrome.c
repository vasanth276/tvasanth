#include <stdio.h>
int main()
{
	char str[100];
    int i=0,j,length=0;
    printf("enter the string:\n");
    gets(str);
    for(;str[i]!='\0';)
    {
        length++;
        i++;
    }
    i=0;
    j=length-1;
    for(;i<=j;)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
        }
        else
          break;
    }
    if(i>=j)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}
