#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

ll Count(vector<ll>& a){
    ll n = a.size(); 
    bool b[n + 1] = {0}; ll cnt = 0; 
    for(ll i = 0; i < n; i++){
        if(b[a[i] - 1] == 0){
            cnt++;
        }
        b[a[i]] = 1;
    }
    return cnt;  
}

int lesserfirst(vector<ll>& a, ll b1, ll b2, vector<ll>& mp){
    int cnt = 0;
    ll it1 = mp[a[b1 - 1] - 1], 
    it2 = mp[a[b1 - 1] + 1], it3 = mp[a[b2 - 1] - 1], 
    it4 = mp[a[b2 - 1] + 1];  
    if(it1 < b2 and it1 > b1) cnt--;
    if(it2 < b2 and it2 > b1) cnt++; 
    if(it3 < b2 and it3 > b1) cnt++;  
    if(it4 < b2 and it4 > b1) cnt--; 
    return cnt;
}

int greaterfirst(vector<ll>& a, ll b1, ll b2, vector<ll>& mp){
    int cnt = 0;  
    ll it1 = mp[a[b1 - 1] - 1], it2 = mp[a[b1 - 1] + 1], 
    it3 = mp[a[b2 - 1] - 1], it4 = mp[a[b2 - 1] + 1]; 
    if(it1 < b2 and it1 > b1) cnt--;
    if(it2 < b2 and it2 > b1) cnt++; 
    if(it3 < b2 and it3 > b1) cnt++; 
    if(it4 < b2 and it4 > b1) cnt--; 
    return cnt; 
}

int consecutive(vector<ll>& a, ll b1, ll b2, vector<ll>& mp){
    int cnt = 0; 
    if(a[b1 - 1] < a[b2 - 1]){
        cnt++; 
        ll it1 = mp[a[b1 - 1] - 1], it2 = mp[a[b2 - 1] + 1]; 
        if(it1 > b1 and it1 < b2) cnt--; 
        if(it2 > b1 and it2 < b2) cnt--; 
    }
    if(a[b1 - 1] > a[b2 - 1]){
        cnt--; 
        auto it1 = mp[a[b1 - 1] + 1], it2 = mp[a[b2 - 1] - 1];
        if(it1 > b1 and it1 < b2) cnt++;
        if(it2 > b1 and it2 < b2) cnt++; 
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); 
    ll n, m; cin >> n >> m; 
    vector<ll> a(n);  vector<ll> mp(n + 1); mp[0] = 0; 
    for(ll i = 0; i < n; i++){
        cin >> a[i]; 
        mp[a[i]] = i + 1; 
    }
    ll cnt = Count(a); 
    while(m--){
        ll b1, b2; cin >> b1 >> b2; 
        if(b1 > b2) swap(b1, b2); 
        if(abs(a[b1 - 1] - a[b2 - 1]) == 1){
            cnt += consecutive(a, b1, b2, mp);
            cout << cnt << "\n"; 
        }
        else if(a[b1 - 1] < a[b2 - 1]){
            cnt += lesserfirst(a, b1, b2, mp); 
            cout << cnt << "\n"; 
        }
        else{
            cnt += greaterfirst(a, b1, b2, mp); 
            cout << cnt << "\n";  
        }
        mp[a[b1 - 1]] = b2; mp[a[b2 - 1]] = b1; 
        swap(a[b1 - 1], a[b2 - 1]); 
    }
}