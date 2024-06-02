#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);
    int len = strlen(a);
    int b;
    
    for (int i = 0;i<len/2.0;i++) {
        if (a[i] == a[len-i-1]) {
            b = 1;
            continue;
        } 
        else {
            b = 0;
            break;
        }
    }
    
    printf("%d",b);
}