  #include<iostream>
 #include<math.h>
 #include<iomanip>
 #include<bits/stdc++.h>
 #include<string.h>
 #include<string>

 
 using namespace std;
  void findA(long  int i,string &s);
 
 int a[8];
 
 int main()
 {
 	
 		long int t;
 		cin>>t;
 		long int i;
 		while(t--)
 		{	
 				string s;
 				cin>>i;
 				cin>>s;
 				findA(i,s);
 				
 				 
 				 
 		}
 		return 0;
 		
 }
 
 void findA(long  int i,string &s){
 	
  
 	for(int i=0;i<38;i++)
 	{
 			string temp=s.substr(i,3);
 			
 			if(temp=="TTT")
 				a[0]+=1;
 				else if(temp=="TTH")
 				 a[1]+=1;
 				 	else if(temp=="THT")
 				 a[2]+=1;
 				 	else if(temp=="THH")
 				 a[3]+=1;
 				 	else if(temp=="HTT")
 				 a[4]+=1;
 				 	else if(temp=="HTH")
 				 a[5]+=1;
 				 	else if(temp=="HHT")
 				 a[6]+=1;
 				 	else 
 				 a[7]+=1;
 				  
 				 
 	}
 	
 	cout<<i<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[6]<<" "<<a[7]<<endl;
 	
 	memset(a,0,sizeof(a));
 	
 	
 	
 }