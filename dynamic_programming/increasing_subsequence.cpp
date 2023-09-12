#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); 
    ll n; cin >> n; 
    ll nums[n]; 
    for(auto &i : nums){
        cin >> i; 
    }
    vector<ll> bags; 
    bags.push_back(nums[0]); 
    for(ll i = 1; i < n; i++){
        auto it = lower_bound(bags.begin(), bags.end(), nums[i]); 
        if(it == bags.end()) bags.push_back(nums[i]); 
        else *it = nums[i]; 
    }
    cout << bags.size() << "\n"; 
}