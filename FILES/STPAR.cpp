  #include <iostream>
using namespace std;

int main() {
	// your code goes here
 
	
	int n;
	cin>>n;
	
	while(1)
	{
	      int stack[n], top=-1;
	   int Number[n];
	    int no=n;
	    
	     for(int i=n-1;i>=0;i--)
			  cin>>Number[i];
	    
	   int prev=0;
	   int flag=0;
	   
	   for(int i=n-1;i>=0; )
	   {
	   
	   	if(top==-1)
	   		{
	   		stack[++top]=Number[i];
	   	//	cout<<"pushed to stack"<<Number[i]<<endl;
	   		i--;
	   		continue;
	   	 
	   		}
	   
		 if(stack[top]<Number[i])
	   	{
	   	 if(prev<stack[top])
	   	 {
	   	 	prev=stack[top];
	  // 	 	cout<<"moved from stack to clear \n"<<stack[top]<<endl;
	   	 	--top;
	   	   	 
	   }
	   else
	   {
	   flag=1;
	   break;
	   }
	   
	   }
	    else{
	    stack[++top]=Number[i];
	//    cout<<"pushed to stack because of second condition \n"<<endl;
	    i--;
	     
	    }
	   
	   }
	   
	   //cout<<stack[top]<<endl;
	   //cout<<prev<<endl;
	   
	   
	 while(top>=0){
	   if(stack[top]>prev)
	   	{
	   	prev=stack[top];
	   	--top;
	    
	   	
	   }
	   else{
	   flag=1;
	   break;
	   
	   }
	   }
	   
	   
	   
	   if(flag)
	   	cout<<"no"<<endl;
	   	else
	   	cout<<"yes"<<endl;
	   	
	   	cin>>n;
	   	if(n==0)
	   		break;
	   	
	   
	   
	   
	   
	   }
	   
	   
	   }
	   
	   