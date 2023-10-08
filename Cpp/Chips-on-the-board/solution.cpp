//Including header files and creating namespace
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
//Defining long long variable as ll 
#define ll long long

//Creating main function for solution
int main() 
{
    int t;
    cin >> t; //inputting number of test cases

    while (t--) 
    {
        ll int n,sum1=0,sum2=0;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        sort(a.begin(),a.end()); //sorting both arrays to make comparison easier
        sort(b.begin(),b.end());
        
        ll a1,b1;
        a1=a[0];
        b1=b[0];
        for(int i=0;i<n;i++)
        {
            sum1+=a1+b[i];
            sum2+=b1+a[i];
        }
        if(sum1<sum2)
        {
            cout<<sum1<<endl;
        }
        else if(sum2<sum1)
        {
            cout<<sum2<<endl;
        }
        else if(sum1 == sum2)
        {
            cout<<sum1<<endl;
        }
      
    }
    return 0;
}
