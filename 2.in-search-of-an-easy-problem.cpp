// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h> 

using namespace std;

int n,m;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int flag = 0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
	
		cin >> m;
		if (m == 1){

			cout << "HARD" << "\n";
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
		cout << "EASY" << "\n";
	
	
}
	

