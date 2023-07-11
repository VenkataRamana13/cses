#include <bits/stdc++.h>
using namespace std; 
 
int last_num = INT_MAX; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		int n; cin >> n; 
		int a[n], cnt = 0, curr_num = 0;
		for(auto &i : a){
			cin >> i; 
		}
		sort(a, a + n); 
		for(int i = 0; i < n; i++){
				int curr_num = a[i];
				if(curr_num != last_num){
						last_num = curr_num; 
						cnt++; 
				}
		}
		cout << cnt << "\n"; 

		return 0; 
}
