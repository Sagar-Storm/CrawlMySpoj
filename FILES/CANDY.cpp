  #include <iostream>
using namespace std;
void sortandfind(int a[], int , int);

int main() {

	// your code here

	int t=1;
	 int sum;

	 int *a;
	int n;
	cin>>n;
	while(1){

sum=0;
	  a=new int[n];

	for(int i=0;i<n;i++){
	cin>>a[i];
	sum=sum+a[i];
	}


	sortandfind(a,n,sum);
		cin>>n;
		if(n==-1){
            break;
		}


	}

	return 0;
}


void sortandfind(int a[], int size, int sum){

int temp;

int moves=0;
if(sum%size==0)
{
temp=sum/size;
for(int i=0;i<size;i++)
{
 if(a[i]==temp)
 continue;

if(a[i]>temp){
while(a[i]!=temp)
{

(a[i])--;
moves++;




}


}
	}

cout<<moves<<endl;}
	else{
	cout<<"-1"<<endl;

	}

}
