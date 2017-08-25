 #include <iostream>
#include<string>
#include<math.h>
#define loop(x,n) for(int x = 0; x < n; ++x)
typedef long long int ll;

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
		cin.ignore();
	while(t--)
	{
		string s1;
		ll stack[5],top=-1,number2,number1,i;
		char stack1[5];
		int top1=-1;
	
		getline(cin,s1);
		while(s1.length()==0)
		getline(cin,s1);
		
		
		
			
	for(int i=0;i<s1.length();++i)
	{
	if(	isdigit(s1[i]))
		{
			//cout<<"yes digit encounted";
			int j=i;
			ll temp=0;
			while(isdigit(s1[j]))
			{
				 
				 temp=temp*10+(s1[j]-48);
				 ++j;
			}
			//cout<<"read "<<temp<<endl;
			i=j-1;
			
			stack[++top]=temp;
		 
			
		}
		
		if(s1[i]=='+' || s1[i]=='-'|| s1[i]=='*' || s1[i]=='/')
		{
			stack1[++top1]=s1[i];
			//cout<<"pushed"<<stack1[top1]<<endl;
			continue;
		}
		
		if(top==1)
		{
			char operat=stack1[top1--];
			number2=stack[top--];
			number1=stack[top--];
		//	cout<<number1<< " "<< number2<< endl;
			if(operat=='+')
				stack[++top]=number1+number2;
				else if(operat=='-')
				stack[++top]=number1-number2;
				else if(operat=='*')
				stack[++top]=number1*number2;
				else {
					if(operat=='/')
					stack[++top]=number1/number2;
				}
		}
		
		
			
		
	}
	cout<<stack[top]<<endl;
	cin.ignore();
	

		
	}
	return 0;
}





/*	top--;
	top1--;
	int walker=-1;
	ll result=0;
	while(walker<=top)
	{
		number1=s1[++walker];
		number2=s1[++walker];
		if(stack1[--top1]=='+')
			result+=number1+number2;
			else if(stack1[--top]=='-')
			result+=number1-number2;
					else if(stack1[--top]=='-')
			result+=number1-number2;
					else {if(stack1[--top]=='-')
					result+=number1-number2;
			}
		
		
		
		
	}*/