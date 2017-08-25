       #include<bits/stdc++.h>
  using namespace std;
 
 struct node
 {
    long best;
    long left;
    long right;
    long sum;
 };
int n;
 node tree[200009];
 long  a[50009];
  
 node makenode(long sum, long left, long right, long best)
 {
     node temp;
     temp.sum=sum;
     temp.left=left;
     temp.right=right;
     temp.best=best;
     return temp;
  }
  
 
 
 node combine( node l, node r )
 {
     long left=max(l.left,l.sum+r.left);
     long right=max(r.right,r.sum+l.right);
     long best=max(l.right+r.left,max(l.best,r.best));
          return makenode(l.sum+r.sum,left,right,best);
   }

 
node answerQuery(int start, int end, int index, int from, int to)
 {
     if(start==from && to==end)
        return tree[index];
        
    int mid=(start+end)/2;
    if(to<=mid)
        return answerQuery(start,mid,(index<<1),from, to);
    if(from>mid)
        return answerQuery(mid+1,end,(index<<1)+1,from,to);
        
        node l=answerQuery(start,mid,(index<<1),from,mid);
        node r=answerQuery(mid+1,end,(index<<1)+1,mid+1,to);
       
       return combine(l,r);
        
       
     
     
     
     
 }
 
 node buildtree(int start,int end, int index)
 {
     if(end==start)
     {
        tree[index]=makenode(a[start],a[start],a[start],a[start]);
            return tree[index];
     }
     
     int mid=(start+end)/2;
     node l=buildtree(start,mid,(index<<1));
     node r=buildtree(mid+1,end,(index<<1)+1);
     
     tree[index]=combine(l,r);
     
     return tree[index];
     
     
 }
 
 
 void update(int start, int end , int index, int newindex, int newvalue)
 {
 	if(start==end)
 		{
 			a[start]=newvalue;
  			tree[index].sum=a[start];
  			tree[index].left=a[start];
  			tree[index].right=a[start];
  			tree[index].best=a[start];
        
           }
           
      else
      {
      	int mid=(start+end)/2;
  
      	
      	if(newindex<=mid)
      	update(start,mid,(index<<1),newindex,newvalue);
      	else
      	update(mid+1,end,(index<<1)+1,newindex,newvalue);
      	
      	node l=tree[index*2];
      	node r=tree[(index*2)+1];
      	
      	tree[index].sum= l.sum+r.sum;
      	tree[index].left=max(l.left,l.sum+r.left);
      	tree[index].right=max(r.right,l.right+r.sum);
      	tree[index].best=max(l.right+r.left,max(l.best,r.best));
      	
      	 
      	
      }
      	
      }	
 


 
 
 
 
 int main()
 {
     
    long m ;
     scanf("%d",&n);
      for(int i=1;i<=n;++i)
       scanf("%ld",&a[i]);
        
    scanf("%d",&m);
    
    buildtree(1,n,1);
    int operat,start,end;
        while(m--)
        {
            scanf("%d%d%d",&operat,&start,&end);
            if(operat==0)
          		update(1,n,1,start,end);
            	else
            printf("%ld \n",answerQuery(1,n,1,start,end).best);
            
         
            
        }
    
     
 	return 0;
 }
 