// https://codeforces.com/problemset/problem/996/A

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
	
	ll n, c=0;
	cin >> n;
		
	if (n>=100){
		c += n/100;
		n %= 100;
	}
	if (n>=20){
		c += n/20;
		n %= 20;
	}
	if (n>=10){
		c += n/10;
		n %= 10;
	}
	if (n>=5){
		c += n/5;
		n %= 5;
	}
	if (n>=1){
		c += n;
		n %= 1;
	}


cout << c;
}



	

