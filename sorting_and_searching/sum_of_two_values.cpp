#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n, x; cin >> n >> x; 
		vector<ll> m, p; 
		for(ll i = 0; i < n; i++){
				ll x; cin >> x; 
				p.push_back(x);
				m.push_back(x);
		}
		sort(m.begin(), m.end());
		for(ll i = 0; i < n - 1; i++){
				if(m[i] + m[i + 1] > x){
						cout << "IMPOSSIBLE\n"; 
						return 0; 
				}
				bool is_present = binary_search(m.begin() + i + 1, m.end(), x - m[i]);
				if(!is_present) continue; 	
				else{
						auto position = lower_bound(m.begin() + i + 1, m.end(), x - m[i]); 
						ll first = m[i], second = m[position - m.begin()];
						auto it1 = find(p.begin(), p.end(), first); 
						auto it2 = find(p.begin(), p.end(), second); 
						if(it2 == it1) it2 = find(it2 + 1, p.end(), second); 
						cout << it1 - p.begin() + 1 << " " << it2 - p.begin() + 1 << "\n"; 
						return 0; 
				}
		}
		cout << "IMPOSSIBLE\n"; 

		return 0; 
}

