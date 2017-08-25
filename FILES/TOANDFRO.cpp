 #include<iostream>
#include<string>

using namespace std;
void decodemessage(string&,int);

int main(){
 int no, column;
string message;
cin>>column>>message;

while(1){


decodemessage(message, column);

cin>>column;

if(column==0)
break;
else
    cin>>message;



}



}


void decodemessage(string& message, int column){
int length=message.size();
//cout<<" column received is "<< column;
//cout<<"string is "<< message<<" "<<"length is "<<" " << length;
int row=length/column;
//cout<<"row is "<< row;
 int r;
 int i=0;
 int itemp;
 int increment=1;
 for(int j=column;j>0;j--){


    //    cout<<"loop enterd"<<"\n";
 r=1;
 itemp=i;
 while(r<=row){


 cout<<message.at(i);
 if(r%2==1){
 i=i+(2*j)-1;
r+=1;
 }
 else{
 i=i+increment;
 r+=1;
 }
 }
 i=itemp+1;
 increment+=2;
 }





cout<<endl;
}
