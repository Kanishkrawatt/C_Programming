#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int preced(char ch) {
   if(ch == '+' || ch == '-') {
      return 1;              //Precedence of + or - is 1
   }else if(ch == '*' || ch == '/') {
      return 2;            //Precedence of * or / is 2
   }else if(ch == '^') {
      return 3;            //Precedence of ^ is 3
   }else {
      return 0;
   }
}

int main(){
    char name[20],i;
    int stack[20];
    char postfixp[20];
    int top= -1;
    int temp=-1;
    int counter=0;
    int ref= 48;
    printf("Enter Infix Expression : ");
    fgets(name,20,stdin);
    // printf("Expression : %s",name);
    for(int i = 0;i<strlen(name);i++){
        int otp = name[i] -ref;
        // printf("%c :stack\n",stack[top]);
        // printf("%d ",otp);
        if(name[i]=='+' || name[i]=='-' || name[i] == '*' || name[i] == '/' || name[i] == '^' ){
            counter++;
            if(top == -1){
                // printf("1:");
            stack[++top] = name[i];
            // postfixp[++temp] =otp;
            }

            else{
                // printf("%d<",preced(stack[top]));
                // printf("%d\n",preced(name[i]));
                // printf("2:");
                if(preced(stack[top])<preced(name[i])){
                    stack[++top] = name[i];
                }
                else if(preced(stack[top])>preced(name[i])){
                    while(top!=-1 && stack[top]!='('){
                        postfixp[++temp] = stack[top]-ref;
                        top--;
                    }
                    stack[++top]=name[i];
                }
                else{
                        postfixp[++temp] = stack[top]-ref;
                        stack[top] = name[i];
                    }
            }
        }
        else if(name[i]==')'){
            // counter++;
            while(stack[top]!='('){
                postfixp[++temp]= stack[top] - ref;
                top--;
            }
            top--;

        }
        
        else if(name[i] == '('){
            stack[++top] = name[i];
        }
        else if(otp<=9 && otp>=0){
            counter++;
            postfixp[++temp] = otp;
        }
        else if(otp<=75 && otp>=49){
            counter++;
            postfixp[++temp] = otp;
        }
    }
    if(top!=-1){
        while(top!=-1){
            postfixp[++temp] = stack[top--]-ref;
        }

    }
    
    printf("To Postfix : ");
    for(int i=0; i<counter ;i++){
        int p = postfixp[i];
        if(p ==-1){
            printf("/ ");
            
        }
        else if(p == -3){
            printf("- ");
            
        }
        else if(p== -5 ){
            printf("+ ");
            
        }
        else if(p== -6){
            printf("* ");
            
        }
        else if(p == 46){
            printf("^ ");
        }
        else if(p<=75 && p>=49){
            int Alpha_offset = p+ref;
            printf("%c ",Alpha_offset); 

        }
        else if(p==-8 || p==-7){

        }
        else{
            printf("%d ",postfixp[i]); 
        }
        
    }

}
