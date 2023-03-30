#include <bits/stdc++.h>
using namespace std; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		long long n; cin >> n; 
		int a[n]; long long sum = 0; 
		for(long long i = 0; i < n; i++){
				cin >> a[i]; 
				sum += a[i]; 
		}
		
		sort(a, a + n, greater<long long>()); 
		
		long long sum_local = 0, sum_local_3 = 0; 
		for(long long i = 0; i < n; i++){
				if(sum_local + a[i] <= (sum / 2)){
						sum_local += a[i];
				}
				else{
						break;
				}
		}	
		for(long long i = n - 1; i >= 0; i--){
				if(sum_local + a[i] <= (sum / 2)){
						sum_local += a[i];
				}
				else{
						break; 
				}
		}
		
		long long sum_local_2 = sum - sum_local, diff1 = 0;
		diff1 = abs(sum_local_2 - sum_local); 

		
		cout << diff1 << "\n"; 

		return 0; 
}
