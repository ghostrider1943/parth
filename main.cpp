#include <iostream>
using namespace std;
int main()
{    
    int t;
    cout<<"Put the total number of test cases to be done: "<<endl;
    cin>>t;
    
    for (int i=0;i<t;i++)
    {
    
    int a[3]={};
    cout<<"Put A B C with single spaces: "<<endl;
    for ( int i=0;i<3;i++)
    {
           cin>>a[i];
    }
    int b[3]={};
    cout<<"Put P Q R with single spaces: "<<endl;
    for ( int i=0;i<3;i++)
    {
           cin>>b[i];
    }

    int delta[3]={};
      for(int i=0;i<3;i++)
      {   
          delta[i]=b[i]-a[i];
      }
      int maxd;
      maxd=delta[0];
      for(int i=1;i<3;i++)
      {  
          if ( maxd<delta[i])
          { maxd=delta[i];
          }
      }
      cout<<maxd<<endl;
    if ( (a[0]+ a[1]+a[2]+maxd) > (b[0] + b[1]+ b[2])/2 )
    { 
        cout<< "YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    
    
            
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}
