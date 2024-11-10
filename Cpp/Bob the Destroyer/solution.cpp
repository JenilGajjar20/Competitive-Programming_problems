//LOGIC : Perform Binary Search on the height and find the max height which satisfies our condition.

#include <iostream>
using namespace std;
#define ll long long


bool canAchieveHeight(int a[], ll k,int mid, int n)
{
    ll cost =0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mid) cost += 1LL*a[i]*(a[i]+1)/2 - 1LL*mid*(mid+1)/2;
        if(cost>k)return false;
    }
    return true;
    
}
 
int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,ans=0;
        ll k, low = 0, high=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(high<a[i])high = a[i]; 
        }
        
        
        while(high>=low)
        {
            int mid = (low+high)/2;
            // cout<<"mid="<<mid<<endl;
            if(canAchieveHeight(a,k,mid,n))
            {
                ans = mid;
                high = mid-1;
                // cout<<mid<<" "<< ans<<" "<<endl;
            }
            else
            {
                low=mid+1;
            }
            
        }
        // cout<<endl;
        cout<<ans<<endl;
    }
    
}
