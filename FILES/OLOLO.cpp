  #include<iostream>
 #include<bits/stdc++.h>
 #include<math.h>
 typedef long long int LL;
 
 using namespace std;
 
 
 int main()
 {
  
  
  
 	
 	LL pyanis[500001];
 	LL temp=0,max=0;
 	 
 //	cout<<(p[5])<<endl;
 	 
 
 	
 	int noOfp;
 	 scanf("%d",&noOfp);
 	
  
 	for(int i=0;i<noOfp;i++)
 	{
 		
 scanf("%lld",&pyanis[i]);
 	 
 	temp=pyanis[i]^temp;
 	
 
 	
 	}
 	
 	printf("%lld\n",temp);
 	
 //	cout<<"pyanis of 12 "<< " " <<p[12]<<endl<<" pyanis of 213"<< p[213]<<endl;
 	
  
  
 }
 
 			
 		
 		
 		
 	