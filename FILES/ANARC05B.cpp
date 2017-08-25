  	
#include<cstdio>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
 
using namespace std;
#define ll long long int
#define MX 10005
 
typedef struct Helix{
    int val;
    int sum;
}Helix;
 
int main(){
    int i,j,k,t;
    Helix helix1[MX];
    Helix helix2[MX];
    int n,m,sum;
    int maxsum;
    while(1){
        scanf("%d",&n);
        if( n==0) break;
 
        sum = 0;
        for(i=0;i<n;i++){
            scanf("%d",&helix1[i].val);
            sum += helix1[i].val;
            helix1[i].sum = sum;
        }
 
        scanf("%d",&m);
        sum = 0;
        for(i=0;i<m;i++){
            scanf("%d",&helix2[i].val);
            sum += helix2[i].val;
            helix2[i].sum = sum;
        }
        //common node at both ends.
        helix1[n].val = MX;
        helix1[n].sum = helix1[n-1].sum + MX;
 
        helix2[m].val = MX;
        helix2[m].sum = helix2[m-1].sum + MX;
        //-----------------
        i=0;
        j=0;
        maxsum = 0;
        int last_common_i_sum = 0;
        int last_common_j_sum = 0;
        int string_sum1;
        int string_sum2;
        while( i<=n && j<=m){
            if( helix1[i].val < helix2[j].val ) i++;
            else if( helix2[j].val < helix1[i].val ) j++;
            else {
                string_sum1 = helix1[i].sum - last_common_i_sum;
                string_sum2 = helix2[j].sum - last_common_j_sum;
                if( string_sum1 > string_sum2 ){
                    maxsum += string_sum1;
                }
                else{
                    maxsum += string_sum2;
                }
                last_common_i_sum = helix1[i].sum;
                last_common_j_sum = helix2[j].sum;
                i++;j++;
            }
        }
        cout << maxsum - MX << endl;
    }
    return 0;
}