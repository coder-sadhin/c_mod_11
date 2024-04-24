#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int value=strcmp(a,b);
    if(value==0){
        printf("same\n");
    }
    else if(value>0)
    {
        printf("A boro\n");
    }
    else
    {
        printf("B boro\n");
    }
    return 0;

}