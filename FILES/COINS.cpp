  #include <iostream>
 #include<map>
 #include<math.h>
  #define MAX(a,b) ((a)>(b)? (a):(b))


using namespace std;
long long cal(long int);
map<long  long, long long> h;

int main() {

	// your code here
	int t=10;
	long long  n;
	long long result;
	while(t--){
		cin>>n;

	result= cal(n);

cout<<result<<endl;



	}

	return 0;
}

long long cal(long int n){
	if(n==0)
	return 0;
	long long  r=h[n];
	if(r==0)
	{
		r=MAX(n,cal(n/2)+cal(n/3)+cal(n/4));
		h[n]=r;

	}
	return r;


}





