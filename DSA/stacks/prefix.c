#include <stdio.h>
#include <math.h>
#include <string.h>


// use lm flag with the comipler {-lm}
int main(){
    char name[20],i;
    int stack[20];
    int top= -1;
    int ref= 48;
    printf("Format: Ex( 123+- ) \n");
    printf("Enter The Expression : ");
    fgets(name,20,stdin);
    strrev(name);

    // * = -6, - = -3 ,+ = -5,/ = -1 ,^ = 46
    for(int i = 1 ; i <strlen(name);i++){
        int otp = name[i]-ref;
        // printf("%d",otp);
        if(otp==-1){// printf("/");
            int num2 = stack[top--];
            int num1 = stack[top];
            stack[top] = num1 / num2;
        }
        else if(otp == -3){// printf("-");
            int num2 = stack[top--];
            int num1 = stack[top];
            stack[top] = num1 - num2;
        }
        else if(otp== -5 ){// printf("+");
            int num2 = stack[top--];
            int num1 = stack[top];
            stack[top] = num1 + num2;
        }
        else if(otp== -6){// printf("*");
            int num2 = stack[top--];
            int num1 = stack[top];
            stack[top] = num1 * num2;
        }
        else if (otp == 46){// printf("^");
            int num2 = stack[top--];
            int num1 = stack[top];
            stack[top] = pow(num1,num2);
             
        }
        else{
            stack[++top] = otp;
        }
        
    }
    printf("Ans = %d",stack[0]);


}