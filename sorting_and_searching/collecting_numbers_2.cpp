#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

void swap(ll *x, ll a, ll b){
		ll temp = x[a - 1]; 
		x[a - 1] = x[b - 1]; 
		x[b - 1] = temp;
}

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n, m; cin >> n >> m; 
		ll x[n]; 
		for(int i = 0; i < n; i++){
				ll a; cin >> a; 
				x[a - 1] = i; 
		}

		ll cnt = 1; 

		for(ll i = 1; i < n; i++){
				if(x[i] > x[i - 1]){
						continue;
				}
				else{
						cnt++;
				}
		}

		while(m--){
				ll a[2]; cin >> a[0] >> a[1]; 

				if(abs(a[0] - a[1]) == 1){
						ll Min = min(a[0], a[1]), Max = max(a[0], a[1]);
						if(Min > 1 and x[Min - 1] < x[Min - 2]){
								cnt--; 
						}	
						if(Max < n and x[Max - 1] > x[Max]){
								cnt--; 
						}
						if(a[Min - 1] > a[Max - 1]){
								cnt--; 
						}

						swap(x, Min, Max); 

						if(Min > 1 and x[Min - 1] < x[Min - 2]){
								cnt++; 
						}	
						if(Max < n and x[Max - 1] > x[Max]){
								cnt++; 
						}
						if(a[Min - 1] > a[Max - 1]){
								cnt++; 
						}
				}				
				
				else{
						for(int j = 0; j < 2; j++){
								if(a[j] > 1 and x[a[j] - 1] < x[a[j] - 2]){
										cnt--;
								}
								if(a[j] - 1 < n - 1 and x[a[j] - 1] > x[a[j]]){
										cnt--; 
								}//reverting. 
						}
				
						swap(x, a[0], a[1]); 

						for(int j = 0; j < 2; j++){
								if(a[j] > 1 and x[a[j] - 1] < x[a[j] - 2]){
										cnt++; 
								}
								if(a[j] < n and x[a[j] - 1] > x[a[j]]){
										cnt++; 
								}//adding
						}
				}
				
				cout << cnt << "\n"; 
		}

		return 0; 
}
