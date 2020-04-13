// https://codeforces.com/problemset/problem/705/A
#include <bits/stdc++.h> 

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	
	cin >> n;
	
	cout << "I hate ";
	
	for(int i=0; i<n-1; i++){
		
		if(i%2==0)
		cout << "that I love ";
		else
		cout << "that I hate ";
	}
	
	cout << "it";
	
	
}
	

