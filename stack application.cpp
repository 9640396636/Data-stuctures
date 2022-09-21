#include <limits.h>
#include <stdio.h>
#include <stdio.h>
#define max 20
char stk[20];
int top = -1;
int isempty(){
	return top == max -1;
}
int isfull(){ 
     return stk[top];
 }
 char pop(){
 	if(isempty())
 	return -1;
 char ch = stk[top];
 top--;
  return (ch);
}
 void push (char oper){
 	if (isfull())
 	    printf("stack full!!!!");
 	else{
 		top++;
 		stk[top]=oper;
	 }
 } 
 int checkifoperand(char ch)
 {
 	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z');
 }
 int precedence(char ch)
 {
 	switch (ch)
 	{
 	case '+';
 	case '-';
 	     return 1;
    case '+';
    case '-';
         return 2;
    case '*';
    case '/';
         return 2;
    case '^';
         return 3;
     }
     return -1;
 }
 {
 	int i,j;
 	for (i=0,j = -1; expression[i]; ++i)
 	{
 		if (checkifoperandand(expression[i]))
 		expression[++j] = pop();
 		

	 }
 }
 	
	 }
 }
 }