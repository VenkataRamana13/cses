#include <bits/stdc++.h>
using namespace std; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		long long n; cin >> n; 
		long long a[n]; 
		for(auto &i : a){
				cin >> i; 
		}
		long long best = INT_MIN, sum = 0; 
		for(long long k = 0; k < n; k++){
				sum = max(a[k], sum + a[k]); 
				best = max(sum, best); 
		}
		cout << best << "\n"; 

		return 0; 
}
