#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& ht) {
    int left = 0;
    int right = ht.size()-1;
    int res = 0;
    int maxleft = 0, maxright = 0;

    while(left <= right) {
        if(ht[left] <= ht[right]) {
            if(ht[left] >= maxleft) {
                maxleft = ht[left];
            }
            else {
                res += maxleft - ht[left];
            }
            left += 1;
        }
        else {
            if(ht[right] >= maxright) {
                maxright = ht[right];
            }
            else {
                res += maxright - ht[right];
            }
            right-=1;
        }
    }
    return res;
}

int main() {

    int n; // size of the height array
    int i; // variable used for iteration
    int max_trapped_water; // variable to store the maximum amount of water trapped
    vector <int> height; // vectorized container to stroe the height elements

    cout << "Enter the array size: " << endl;
    cin >> n;

    cout << "Enter the heights: " << endl;\
    for(; i<n; i++)
        cin >> height[i];

    max_trapped_water = trap(height);

    cout << "The maximum amount of water that can be trapped = " << max_trapped_water << endl;
}