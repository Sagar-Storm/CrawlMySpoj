 #include<iostream>
#include<bits/stdc++.h>


using namespace std;


int main()
{
    string str;
int i;



    cin>>str;
    if(str[0]!='0')

    while(1)
    {
        long long int dp[5001]={0};
        dp[0]=1;
        int lengt=str.length();
        for( i=1;i<lengt;i++){
                //cout<<"character is "<<str[i]<<endl;
            int x=((str[i-1]-'0')*10)+(str[i]-'0');
                if(str[i]-'0'){

                    dp[i]=dp[i-1];


                    //cout<<dp[i]<<endl;
                }
                if(x>9 && x<27){
                    //if(i==4)
                    //cout<<dp[i-2]<<endl;

                    dp[i]=dp[i]+dp[(i-2)<0?0:(i-2)];

                }



        }


cout<<dp[lengt-1]<<endl;
        cin>>str;
                if(str=="0"){
                        break;


                }




    }



}






























 