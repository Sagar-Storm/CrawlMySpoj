 #include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{	
	long long int t;
		cin>>t;
	while(t--)
	{
		long long int NG, NM;	
		cin>>NG>>NM;
	long long	int noofG=NG;
		long long int noofM=NM;
		
		long long int Nga[NG], Nma[NM];
		
		for(long long int i=0;i<NG;i++)
		{
			cin>>Nga[i];
			}
		sort(Nga, Nga+NG)	;
			
		for(int i=0;i<NM;i++)
		{
			cin>>Nma[i];
			}
		sort(Nma,Nma+NM);
		
	 
		
		int flag=1;
		for(long long int n=0,i=0,j=0; ;n++){
		
			 
				if(Nga[i]<Nma[j]){
					noofG--;
				 
				//	cout<<"godzilla reduced"<<endl;
					i++;
					}
				else if(Nga[i]>Nma[j]){
					noofM--;
				 
				//	cout<<"mechazodgilla reduced"<<endl;
					j++;
					}
				else {if(Nga[i]==Nma[j])
					{
					noofM--;
					//cout<<"mechagodzilla reduced"<<endl;
				//	cout<<n<<endl;
					j++;
					}
					}
				
				if(!noofG){
					cout<<"MechaGodzilla"<<endl;
					flag=0;
					break;
					
					}
				if(!noofM){
					cout<<"Godzilla"<<endl;
					flag=0;
					break;
					
					}
				
					}
					if(flag)
						cout<<"uncertain"<<endl;
					
					
					
					
					
			
	 
		 
	}
	
}