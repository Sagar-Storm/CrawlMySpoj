 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 

 
int main() {
	// your code goes here
	ll n;
    cin>>n;
    
    while(n--)
    {
        ll number;
        cin>>number;
        if(number%2)
            cout<<(number+1)/2<<endl;
            else
            cout<<number/2<<endl;
        
    }
        
    
      
    
    
	
	return 0;
}
