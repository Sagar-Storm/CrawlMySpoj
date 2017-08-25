 #include <iostream>
#include<string>
using namespace std;



int main() {

	// your code here

	int t;
	cin>>t;
	cin.ignore();




	while(t--)
	{
		cin.ignore();
    	string str;
    	getline(cin,str);

    int length=str.length();
	char s;
	char stack[str.length()];
	int top=0,j=0;

	stack[top++]='#';


//cout<<"string entetrfd "<<str<<endl;
	int i=0;

	while(i<length){
       //     cout<<"for loop entered"<<endl;

		if(str.at(i)=='m'){
		   s=stack[--top];
		 //  cout<<"found m; exiting;"<<endl;
		   //cout<<"operator before manchula is "<<s;
		   break;
		 }

		if(str.at(i)=='+' || str.at(i)=='=')

			stack[top++]=str.at(i);

			 i++;
			}


			int operator1=0,operator2=0, result=0;
			int noflag=1;
			int plusflag=0,resultflag=0;
			j=0;

			while(j<length)
			{
			    if(str.at(j)=='+'){
				plusflag=1;
				noflag=0;j++;
				continue;
				}

				if(str.at(j)=='='){
				resultflag=1;
				plusflag=0;
				j++;
				continue;
				}

			if(noflag)
				if(isdigit(str.at(j)))
       {
             //           cout<<"reading into operator 1"<<endl;

		 operator1=(operator1*10)+str.at(j)-48;
				}

			if(plusflag)
				if(isdigit(str.at(j))){
               //        cout<<"reading into operator 2"<<endl;


			operator2=(operator2*10)+str.at(j)-48;
				}

			if(resultflag)
              if(isdigit(str.at(j))){
                result=(result*10)+str.at(j)-48;
             //   cout<<"reading result";
			}


				j++;

				}



			//	cout<<operator1<< " " << operator2 <<" " << result;



			if(s=='+'){



			cout<<operator1<<" + "<<result-operator1<<" = "<<result<<endl;
			continue;
			}
			else if(s=='='){
//                    cout<<"yes = if";

		  cout<<operator1<<" + "<<operator2<<" = "<<operator1+operator2<<endl;
		  continue;}
		  else  {
		  cout<<result-operator2<<" + "<< operator2<<" = "<<result<<endl;
		  continue;

		  }

	}









	return 0;
}
