#include <stdio.h>

  #include<string.h>
int top=-1,i=0,j=0,length;

int preceed(char );
char infix[100][401],postfix[100][401],stack[401];
void push(char symbol);
void main()
{
 int t;
 int i=0;

scanf("%d",&t);


while(t--){


scanf("%s",infix[i]);

infix_to_postfix(infix[i],postfix[i]);
printf("%s \n",postfix[i]);
i++;
}

}
void push(char symbol)
{
stack[++top]=symbol;
return;
}
char pop()
{
char temp;
temp=stack[top--];
return(temp);
}

infix_to_postfix(char infix[401],char postfix[401])
{

    top=-1;
    i=0;
    j=0;
    char symbol;
    length=0;
char temp;
length=strlen(infix);
push('#');
while(i<length)
{
symbol=infix[i];
switch(symbol)
{
case '(':push(symbol);break;
case ')':temp=pop();
while(temp!='(')
{
postfix[j++]=temp;
temp=pop();
}
break;
case '/':
case '*':
case '^':
case '+':
case '-':while(preceed(stack[top])>=preceed(symbol))
{
temp=pop();
postfix[j++]=temp;
}
push(symbol);
break;
default: postfix[j++]=symbol;
}
i++;
}
while(top>0)
{
postfix[j++]=pop();
return;
}
}
int preceed(char symbol)
{
int p;
switch(symbol)
{
case '^':p=3;break;
case '/':
case '*':p=2;break;
case '+':
case '-':p=1;break;
case '(':
case ')':p=0;break;
case '#':p=-1;break;
}
return(p);
}
