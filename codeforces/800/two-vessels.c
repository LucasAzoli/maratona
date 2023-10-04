#include <iostream>
#include <bits/stdc++.h>
     
using namespace std;
     
typedef long long ll;
     
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
     
int main() {
	float t;
  	cin >> t;
  	for (int i = 0; i < t; i++) {
    		int a, b, c;
    		cin >> a >> b >> c;
    		float z = (a + b)/2;
 
    		if (a > b) {
      			float w = a-z;
      			cout << ceil(w/c) << endl;
    		} else {
      			float w = b-z;
      			cout << ceil(w/c) << endl;
    		}
  	}
}
