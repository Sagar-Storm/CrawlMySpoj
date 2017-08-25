  #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printPrime(int,int);
void soe(int);
bool prime[32000];
int primeNo[15000];
int k=0;
int c=0;


void soe(int);
int main()
{

    int t, temp,j=0;

    std::cin>>temp;
    if(temp<=10)
    {
        t=temp;
    }
    int **pk=new int*[t];
    for(int k=0; k<t; k++)
    {
        pk[k]=new int[2];
    }


    for(int i=0; i<t; i++)
    {
        for(j=0; j<2; j++)
            std::cin>>pk[i][j];

    }
    memset(prime,true,sizeof(prime));
    soe(32000);
for(int x=0;x<t;x++)
    printPrime(pk[x][0],pk[x][1]);




















    return 0;
}


void soe(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.




        for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    for(int p=2;p<=n;p++){

        if(prime[p]==true)
        {

            primeNo[k]=p;
            k+=1;
        }
    }



}

void printPrime(int start, int end)
{

int temp;
int flag;
if(start==1)
    start=2;



 for(;start<=end;start++){
    temp=sqrt(start);
    flag=1;
    for(int i=0;primeNo[i]<=temp;i++)
    {
        if(start%primeNo[i]==0)
            {

                flag=0;
                break;
            }

    }

    if(flag)
        cout<<start<<endl;
 }
 cout<<endl;







     }

