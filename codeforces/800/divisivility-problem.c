#include <iostream>
#include <bits/stdc++.h>
     
using namespace std;
     
typedef long long ll;
     
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
     
int main() {
	ll n;
	cin >> n;
  
	for (ll i=0; i<n; i++) {
		ll a, b, k;
		cin >> a >> b;
	    
		if (a<b) {
			k = b-a;
		} else {
			k = a%b;
			if (k!=0) {
				k = b-k;
			}
		}
	    	cout << k << endl;
  	}
  	
	return 0;
}
