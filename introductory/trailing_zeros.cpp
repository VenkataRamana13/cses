#include <bits/stdc++.h>
using namespace std; 

int main(){
 	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int n; cin >> n; 
	int five_power = int(log(n)/log(5)); 
	int count = 0; 
	for(int i = 1; i <= five_power; i++){
		int power = int(pow(5, i)); 
		count += (n / power); 
	}
	cout << count << "\n"; 
}
