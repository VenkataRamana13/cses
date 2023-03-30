// 9 of 1 digit numbers - 9 numbers - starting from 0
// 90 of 2 digit numbers - 180 numbers - starting from 09 + 1
// 900 of 3 digit numbers - 2700 numbers -- 9 * k * (10 power k - 1) - starting from 189 + 1
// 9000 of 4 digit numbers - 36000 numbers - starting from 2789 number
// greater than 10 digits?
// 10  --- starts from 8123456789 -> 90(9zeros)numbers 
// 11 -> 9(10zeros)  ->  99(10zeros) numbers -> starts from 8123456789 + 9(10zeros)98123..
// 12 -> 9(11 zeros) -> 108(11zeros) numbers -> starts from 981234...+ 99(10 zeros) - 
// too complicated what to do	
// and so on

#include <bits/stdc++.h>
using namespace std; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		int q; cin >> q; 
		while(q--){
				long long k; cin >> k; 
				int digits = int(log10(k)); 
				int start = 0; 
				if(digits == 1) start = 1; 
				else{
						start += (digit - 2) * pow(10, digit - 1); 
						for(int i = 0; i < digit - 1; i++){
								start += (9 - i) * power(10, i); 
						}
						start += 1; 
						if(k < start){			//it is a number of (digits - 1) digits
								
						}		
						else {			//it is a number of (digits) digits

						}
				}
		}

		return 0; 
}
