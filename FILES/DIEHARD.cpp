  #include<bits/stdc++.h>
 
using namespace std;
typedef long long int ll;

struct node
{
    int armor;
    int health;
}air,water,fire;
  
int main()
{
     ll t;
    cin>>t;
   
    air.armor=2;
    air.health=3;
    
    water.armor=-10;
    water.health=-5;
    
    fire.armor=5;
    fire.health=-20;
    

    
    
     while(t--)
     {
         
         ll health,armor,count=0;
         cin>>health>>armor;
         //cout<<health<<endl<<armor<<endl;
             bool water_flag=true,air_flag=true,fire_flag=true;
         
         while(health>0 && armor>0)
         {
          if((health+air.health >0) && (armor+air.armor>0) && air_flag)
          {
              
              health+=air.health;
              armor+=air.armor;
              air_flag=0;
              water_flag=1;
              fire_flag=1;
              count++;
              //cout<<"in air:"<<endl;
              //cout<<health<<" "<<armor<<endl;
               
          }
           else  if((health+water.health)>0 && (armor+water.armor>0) && water_flag)
          {
              health+=water.health;
              armor+=water.armor;
              air_flag=1;
              water_flag=0;
              fire_flag=1;
              count++;
              //cout<<"in water:"<<endl;
              //cout<<health<<" "<<armor<<endl;
              
          }
          else if(health+fire.health>0 && armor+fire.armor>0 && fire_flag)
          {
              health+=fire.health;
              armor+=fire.armor;
              air_flag=1;
              fire_flag=0;
              water_flag=1;
              count++;
             // cout<<"fire"<<endl;
              //cout<<health<<" "<<armor<<endl;
              
          }
          else
          {
              break;
          }
          
          
         }
         cout<<count<<endl;
     
        
         
        
     
     
}
}