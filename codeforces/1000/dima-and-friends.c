#include <iostream>
#include <bits/stdc++.h>
     
using namespace std;
     
typedef long long ll;
     
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
     
int main() {
	int n, s=0, ans=0;
	cin >> n;
	
	for (int i=0; i<n; i++) {
		int k;
		cin >> k;
		s += k;
	}
	
	for (int i=1; i<6; i++) {
		if ((s+i)%(n+1)!=1) {
			ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
