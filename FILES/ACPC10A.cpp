#include <iostream>
using namespace std;

int main() {

	// your code here
	float t1,t2,t3;
	int t=1;


	while(t){
	cin>>t1>>t2>>t3;
	if(t1 || t2||t3){
 
	

if((t2-t1)==(t3-t2)){
cout<<"AP"<<" "<<t3+(t3-t2)<<endl;
continue;


	}
	
	if(t1 && t2)
	if((t2/t1)==(t3/t2))
	{
	cout<<"GP"<<" "<<t3*(t3/t2)<<endl;
continue;
	}
	}
	if(!(t1 ||t2||t3))
        t=0;

	}

	return 0;
}
