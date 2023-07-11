#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n; cin >> n; 
		ll a[n];
		for(auto &i : a){
				cin >> i; 
		}
		sort(a, a + n); 
		ll avg = a[n/2]; 
		ll diff = 0; 
		for(auto i : a){
				diff += abs(avg - i);
		}
		cout << diff << "\n"; 

		return 0; 
}
