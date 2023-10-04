#include <iostream>
#include <bits/stdc++.h>
     
using namespace std;
     
typedef long long ll;
     
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
     
int main() {
	int n;
	cin >> n;
	 
	if (n%2==0 && n!=2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	   
	return 0;
}
