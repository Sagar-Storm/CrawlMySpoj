 #include <iostream>
using namespace std;
void reversesumfinder(int , int);
int reverse(int);

int main() {
 int n1,n2;
	int t;// your code here
cin>>t;
while(t--)
{
 cin>>n1>>n2;
 reversesumfinder(n1,n2);
}
	return 0;
}


void reversesumfinder(int n1, int n2){
n1=reverse(n1);
n2=reverse(n2);
int n3=n1+n2;


cout<<reverse(n3)<<endl;



}



int reverse(int n){

int temp,revers=0;
while(n){
temp=n%10;
revers=(revers*10)+temp;
n=n/10;
}
 return revers;


}





