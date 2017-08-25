 #include <iostream>
using namespace std;
void  fact(int);
void multiply(int[],int, int*);
int main() {
int t;
long int T;
cin>>t;
if(t>=1 && t<=100)
while(t--){

	cin>>T;
	if (T>=1 && T<=100){
 fact(T);

	}


}
	return 0;
}

void  fact(int t){
  int res[158];
  res[0]=1;
int  res_size=1;


for(int i=2;i<=t;i++){
    multiply(res,i,&res_size);
   //cout<<"called";

}
//for(int i=(t/2)+1;i<=t;i++){
  //  factorial1=factorial1*i;
//}

for(int i=res_size-1;i>=0;i--){

    cout<<res[i];
}

cout<<endl;

}

void multiply(int res[],int x, int *size){
    //cout<<endl<<"size is "<<(*size)<<endl;
int carry=0;
int temp;
int flag=0;

for(int k=0;k<(*size);k++){

    temp=(res[k]*x)+carry;

          //  cout<<"carry greater than 10";
        res[k]=temp%10;
        carry=temp/10;



}



while(carry){

    res[*size]=carry%10;
    carry=carry/10;
    (*size)++;

}






}






