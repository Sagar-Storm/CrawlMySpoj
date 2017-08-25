 
   #include <iostream>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
void Findprime(char *);
int checkforpalindrome(char *s);
int checkfornines(char *s);
//void findeven(char *s)
//;
//void CheckandFindprime(char *s);
int main()
{

    // your code here
    int no;

    int i=0;
    cin>>no;
    char *s[no+1];



    for(int i=0; i<no+1; i++)
    {
        s[i]=new char[1000001];
        cin.getline(s[i],1000001);


    }

    // for(int i=1;i<no+1;i++){
    //cout<<i<<" "<<s[i];


    //}









    for(int i=1; i<no+1; i++)
    {
      //  cout<<"calling function";
        Findprime(s[i]);




    }


    return 0;
}


void Findprime(char *s)
{

    //cout<<"function called"<<endl;

    int oddflag=0;
    int evenflag=0;
    int mid, i, j;
    char temp3[strlen(s)+1];
    char *temp;
    strcpy(temp3,s);
    int crossover=0;
    int ii,jj;

    char sample[strlen(s)+1];
    strcpy(sample,s);

    int length=strlen(s);
    //cout<<"length of the string is "<< length;


        if(checkfornines(s)){
             cout<<"1";
             for(int i=1;i<strlen(s);i++){

                cout<<"0";


             }
             cout<<"1";
             cout<<endl;
             return;

        }












    if(length%2==1)
    {

      //  cout<<"odd number";
         mid=length/2;
         ii=i=mid-1;
        jj=j=mid+1;
        oddflag=1;

    }
    else{
        //cout<<endl<<"even number";
        mid=length/2;
        ii=i=mid-1;
        jj=j=mid;
        evenflag=1;


    }
        //cout<<" i is "<<i <<"j is j"<< j;


        while(s[i]==s[j] && (i>=0) && (j<length))
        {
          //  cout<<"Entered while loop";
            i--;
            j++;
            if(i==-1){
                crossover=1;
            }

        }
      //  if((i==-1) && (j==length)){
        //cout<<"already a palindrome";

if(crossover){
ii=i+1;;
jj=j-1;
}else
{
    ii=i;
    jj=j;
}


        if(!crossover)  //condition required for only copying the left side straightaway
        {
            //cout<<"i not equal to j";
             temp=new char[i+2];
            for(int k=0; k<=i; k++)
            {
              //  cout<<endl<<"creating temporary";
                temp[k]=s[k];

            }
            int k=strlen(temp)-1;

            for(int r=j; r<length; r++)
            {
                //cout<<endl<<"copying back";
                s[r]=temp[k];
                k--;

            }
           // cout<<endl<<"intermediatry palindrome"<<s;
            }

           od: if(oddflag){


            if((temp3[ii]<=temp3[jj]))     //after palindrome is generated, check if left side element is lower than right side
            {

                if(s[mid]!='9'){
                    s[mid]+=1;

                    cout<<s<<endl;
                }
                else
                {
                    s[mid]='0';
                    int left=mid-1;
                    int right=mid+1;
                    while(left >=0 && right <length)
                    {
                        if(s[left] =='9' && s[right]=='9')
                        {
                            s[left]=s[right]='0';
                            left--;
                            right++;}

                        else
                        {
                            s[left]=s[right]=((s[left]-'0')+1)+'0';
                            break;

                        }


                    }
                    cout<< s<<endl;

                }
            }
            else{
                cout<<s<<endl;
            }







            }
         else{
                   ev: if((temp3[ii]<=temp3[jj]))     //after palindrome is generated, check if left side element is lower than right side
            {
//cout<<"even entered ";
                if(s[mid]!='9'){
                    s[mid-1]=s[mid]+=1;
                    cout<< s<<endl;
                }
                else
                {
                    s[mid-1]=s[mid]='0';
                    int left=mid-2;
                    int right=mid+1;
                    while(left >=0 && right <length)
                    {
                        if(s[left] =='9' && s[right]=='9')
                        {
                            s[left]=s[right]='0';
                            left--;
                            right++;}

                        else
                        {
                            s[left]=s[right]=((s[left]-'0')+1)+'0';
                            break;

                        }


                    }
                    cout <<s<<endl;
                }


            }
            else{
                cout<< s<<endl;;


            }


      }









        }


        int checkfornines(char *s){
         int i;
    for( i = 0; i < strlen(s); ++i )
        if( s[i] != '9' )
            return 0;
    return 1;
        }

