#include <iostream>
#include <bits/stdc++.h>
     
using namespace std;
     
typedef long long ll;
     
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
     
int main() {
  	ll n, a, b, x, y, x2, y2;
  	cin >> n;
    
  	for (int i=0; i<n; i++) {
    		cin >> a >> b >> x >> y;
    		x2 = a-(x+1);
    		if (x2 > x) {
      			x = x2;
    		}
    		y2 = b-(y+1);
    		if (y2 > y) {
      			y = y2;
    		}
    
    		if (x*b > y*a) {
      			cout << x*b << endl;
    		} else {
      			cout << y*a << endl;
    		}
  	}
 
  	return 0;
}
