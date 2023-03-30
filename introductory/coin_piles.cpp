#include <bits/stdc++.h>
using namespace std; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		int t; cin >> t; 
		while(t--){
				int a, b; 
				cin >> a >> b; 
				
				if(a > b){
						int sub = a - b; 
						a = a - 2 * sub; 
						b = b - sub; 
				}
				
				else if(b > a){
						int sub = b - a; 
						b = b - 2 * sub; 
						a = a - sub; 
				}
				
				if(a < 0 or b < 0){
						cout << "NO\n"; 
				}
				
				else if(a % 3 == 0 and b % 3 == 0){
						cout << "YES\n"; 
				}
				
				else {
						cout << "NO\n"; 
				}	
		}

		return 0; 
}
