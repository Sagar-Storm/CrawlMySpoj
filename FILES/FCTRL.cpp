#include <iostream>
using namespace std;
void findthezeroes(long int );
int main() {
	
	// your code here
	int t;
	long int Number;
	cin>>t;
	while(t--){
		cin>>Number;
		findthezeroes(Number);
		
	}

	return 0;
}

void findthezeroes(long int Number){
	int total=0;
	int temp=5;
	while((Number/5)){
		
		total+=Number=(Number/5);
		
	}
	
	
	cout<<total<<endl;
	
	
	
}