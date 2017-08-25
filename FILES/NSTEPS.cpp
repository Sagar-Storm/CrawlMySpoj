 #include <iostream>
using namespace std;

int main() {

	// your code here
int t;
    cin>>t;





	int x,y;
	while(t--){

	cin>>x>>y;
	if(x==0 && y== 0)
    {
        cout<<0<<endl;
        continue;
    }
	if(x==y)
		if(y%2==0){
                int diff=(y-2)/2;
		    int value=4+(4*diff);
		    cout<<value<<endl;
		}
		else{

            int diff=(y-1)/2;
            int value=1+(diff*4);
            cout<<value<<endl;
		}
    else if(x>=2 && y==(x-2))
        if(y%2==0){
            int diff=(y-0)/2;
            int value=2+(diff*4);
            cout<<value<<endl;
        }
        else{
            int diff=(y-1)/2;
            int value=3+(diff*4);

            cout<<value<<endl;
        }
        else
            cout<<"No Number"<<endl;

	}

	return 0;
}
