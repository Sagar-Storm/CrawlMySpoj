 #include<bits/stdc++.h>
using namespace std;


void checkifsos(unsigned long long int n)
{
    unsigned long long int x,i,j;
    i=sqrt(n);
    j=0;
    
    while(i>0)
    {
        if((j*j)>n)
        {
            cout<<"No"<<endl;
            break;
        }
        
        else if(((i*i)+(j*j))==n)
        {
            cout<<"Yes"<<endl;
            break;
        }
        else 
        if(((i*i)+(j*j))<n)
        j++;
        else
        {if(((i*i)+(j*j))>n)
        i--;
        }
        
        }
        
        return;
        
    
    
    
    
    
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    unsigned long long int n;
	    cin>>n;
	    if(!n)
	    {
	        cout<<"No"<<endl;continue;
	    }
	    checkifsos(n);
	 
	}
	return 0;
}
