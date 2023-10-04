#include <iostream>
#include <bits/stdc++.h>
     
using namespace std;
     
typedef long long ll;
     
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
     
int main() {
	int n;
  	cin >> n;
 
  	for (int k=0; k<n; k++) {
    		string str, ans;
    		int p;
    		cin >> str;
    		ans = str;
    		if (str.size() > 10) {
      			ans = "";
      			p = str.size()-2;
      			ans += str[0];
      			ans += to_string(p);
      			ans += str[str.size()-1];
    		}
    		cout << ans << endl;
  	}
 
  	return 0;
}
