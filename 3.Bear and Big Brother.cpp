// https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h> 

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, count=0;
	
	cin >> a >> b;
	
	do{
		a *= 3;
		b *= 2;	
		count += 1;	
	}while(a <= b);
	
	cout << count << '\n';
		
	
}
	

