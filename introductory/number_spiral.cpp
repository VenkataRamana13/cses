//solve by backtracking

#include <bits/stdc++.h>
using namespace std; 

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	long long t; cin >> t; 
	while(t--){
		long long row, col; cin >> row >> col; 
		if(row == col){
			cout << (row - 1)*(row - 1) + row << "\n"; 
		}
		else if(row > col){
			if(row % 2){		//row odd
				cout << (row - 1)*(row - 1) + col << "\n"; 
			}
			else{			//row even
				cout << row*row - (col - 1) << "\n"; 
			}
		}
		else{
			if(col % 2){		//col odd
				cout << col*col - (row - 1) << "\n"; 
			}
			else{			//col even
				cout << (col - 1)*(col - 1) + row << "\n"; 
			}
		}
	}
}
