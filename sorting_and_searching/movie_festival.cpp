#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n; cin >> n; 
		multiset<pair<ll, ll>> m; 
		ll End = INT_MAX; 
		for(int i = 0; i < n; i++){
				ll start, end; 
				cin >> start >> end; 
				if(end < End){
						End = end; 
				}
				m.insert({end, start}); 
		}
		ll cnt = 1; 
		for(auto i : m){
				if(i.second >= End){
						cnt++; 
						End = i.first;
				}
		}
		cout << cnt << "\n"; 
		
		return 0; 
}
