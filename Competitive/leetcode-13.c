#include <stdio.h>

int romanToInt(char *s)
{
    int sum = 0;
    int j = 0;
    int stack[20];
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'I')
        {
            stack[j++] = 1;
        }
        else
        {
            switch (s[i])
            {
            case 'V':
                stack[j++] = 5;
                break;
            case 'X':
                stack[j++] = 10;
                break;
            case 'L':
                stack[j++] = 50;
                break;
            case 'C':
                stack[j++] = 100;
                break;
            case 'D':
                stack[j++] = 500;
                break;
            case 'M':
                stack[j++] = 1000;
                break;
            default:
                break;
            }
        }
        stack[j]=0;
    }
    int pre = 0;

    for(int i=1;i<=j;i++){
        if(stack[pre] >= stack[i]){
            sum = sum+stack[pre++];
        }
        else{
            sum = sum+stack[i++]-stack[pre++];
            pre++;
        }

    }
    printf("%d",sum);
}

int main()
{
    char s[] ="MCMXCIV" ;
    romanToInt(s);
}