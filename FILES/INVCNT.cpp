 #include<iostream>
#include<string>


using namespace std;
long long int _mergesort(long long int a[],long long int temp[], long long int left, long long int right);
void mergesort(long long int a[], long long int n);
long long int mergeboth(long long int a[],long long int temp[],long long int left, long long int mid, long long int right);

int main()
{
  long int t;
	cin>>t;
	while(t--)
	{
	 
		long long int n;
		cin>>n;
		long long int a[n];
		
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		mergesort(a,n);
		
	 }
	
}




void mergesort(long long int a[], long long int n)
{
long long int *temp=new long long int[n];
long long int invcount=	_mergesort(a,temp,0,n-1);
cout<<invcount<<endl;
return;
	
	
}


long long int _mergesort(long long int a[], long long int temp[], long long int left,long long int right)

{
	long long int inv_count=0,mid;
	
	if(left<right){
	

 	mid=(left+right)/2;
 		inv_count	=_mergesort(a,temp,left, mid);
	 	inv_count+=_mergesort(a,temp,mid+1,right);
		  inv_count+=mergeboth(a,temp,left, mid+1, right);
	}
	return inv_count;
	
}


long long int mergeboth(long long int arr[],long long int temp[], long long int left,long long  int mid,long long int right)
{
	long long int inv_count=0,i,j,k;
	i=left;
	j=mid;
	k=left;
	
	 while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
 
     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }
  
  while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];
 
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  
	
 
	
 	return inv_count;
	
}
	
	
	
	
	

	
	
	
	
	
	