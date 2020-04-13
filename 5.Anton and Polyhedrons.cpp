// https://codeforces.com/problemset/problem/785/A
#include <bits/stdc++.h> 

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	char c;
	
	long long n, count =0;
	
	cin >> n;
	string str;

	for(int i =0; i < n; i++){
		cin >> str;
		c = str[0];
		if (c == 'T')
			count += 4 ;
		else if  (c == 'C')
			count += 6 ;
		else if  (c ==  'O')
			count += 8 ;
		else if  (c == 'D')
			count += 12 ;
		else if  (c == 'I')
			count += 20 ;
	}	
		
	cout << count;
}
	

