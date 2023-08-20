#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int n,i,count=0;
    printf("Enter a string:");
    scanf("%[^\n]%*c", str);
    n=strlen(str);
    char currentchar=str[0];
    for(i=0;i<=n;i++)
    {
        if(str[i]==currentchar)
        {
            count++;
        }
        else
        {
            printf("%c%d",currentchar,count);
            currentchar=str[i];
            count=1;
        }
        
    }
    
    return 0;
    
}
