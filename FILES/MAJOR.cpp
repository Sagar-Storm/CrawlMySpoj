   #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	int t;
	cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            if(n==0)
            {
                printf("NO\n");
                continue;
            }
            map<int ,int> m;
            int half=n/2;
            int flag=0;
            for(int i=0;i<n;i++)
                {
                    int temp;
                    scanf("%d",&temp);
                        m[temp]++;
                        if(m[temp] >   half && flag==0 )
                        {
                        flag=1;
                            printf("YES %d\n",temp);
                              
                        }
                }
                if(flag==0)
                    printf("NO\n");
            
        }
	
}
