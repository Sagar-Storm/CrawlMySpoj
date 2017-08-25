  #include<iostream>
 #include<algorithm>
 #include<string>

 #include<bits/stdc++.h>
 using namespace std;

 int main(){


long long 	int t;
	cin>>t;
long long	int count=1;

	while(t--)
	{

	long long	int i=0;
		long long int total,no;

		cin>>total;
		cin>>no;
        int	j=no;

	long long 	int frien[no];

		while(j--){
                //cout<<"enterd loop";
		cin>>frien[i];
		i++;
		}

       long long int siz=sizeof(frien)/sizeof(frien[0]);
        //cout<<siz<<endl;

        sort(frien,frien+siz,greater<int>());
		//cout<<"sorted";

		/*or(int m=0;m<no;m++){

            cout<<frien[m]<<endl;
		}*/

	long long 	int sum=0;
	long long	int k;
		for(k=0;k<no;k++){
			sum=sum+frien[k];
			//cout<<"inside adding";
			if(sum>=total)
				break;

		}

		cout<<"Scenario #"<<count<<":"<<endl;
		if(sum<total)
        cout<<"impossible"<<endl<<endl;
        else
            cout<<k+1<<endl<<endl;
		count++;


	}
 }