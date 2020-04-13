// https://codeforces.com/problemset/problem/1097/A

#include <bits/stdc++.h> 

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string input, str;
	int flag=0;
	cin >> input;
	
	for (int i=0; i<5; i++){
		cin >> str;
		if((input[0] == str[0])||(input[1] == str[1])){
			cout << "YES" << '\n';
			flag = 1;
		}
			
	}
	
	if(flag == 0)
		cout << "NO" << '\n';
		
	
	
}



