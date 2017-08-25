  #include <iostream>
 using namespace std;

int main(void) {
	// your code here

	float number,array[300];
	float sum=0;


		for(int i=0;i<300;i++){
	array[i]=1.0/(2.0+i);



	}

	cin>>number;
	if(number!=0.0)

	while(number){

    sum=0;


	for(int i=0;i<300;i++)
	{

	sum+=array[i];
	if(sum>=number)
	{
	cout<<i+1<<" "<<"card(s)"<<endl;
	break;
	}

	}
	cin>>number;
	if(number==0.0) break;




}
return 0;
}
