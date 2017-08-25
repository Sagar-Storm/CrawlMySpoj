 #include <iostream>
using namespace std;
void printthesquares(int );
int main(void) {
	// your code here

 	int number;
int 	temp=1;


	while(temp){
		cin>>number;
		if(number)
		printthesquares(number);
		temp=number;

	}
}


void printthesquares(int number){
	int sum=0;
	while(number){

		sum=sum+(number*number);
	number-=1;
	}

cout<<sum<<endl;



}
