//#pragma comment(linker, "/STACK:256000000")
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <bitset>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <tuple>
#define fs first
#define sd second
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define fc(a,b) for (int a = 0; a < b; ++a) 
#define deb(x) {for(auto mew : (x))cout<<mew<<" ";cout<<endl;}
#define debs(x) {cout<<(x).size()<<": ";for(auto mew : (x))cout<<mew<<" ";cout<<endl;}
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef long double ldb;
typedef tuple<int, int, int> t3;
typedef vector<string> vstr;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<db> vdb;
ll INF = static_cast<ll>(2e18);
int inf = static_cast<int>(1e9 + 7);
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
template<class T> inline void amin(T &x, const T &y) { if (y<x) x=y; }
template<class T> inline void amax(T &x, const T &y) { if (x<y) x=y; }

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
	
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    return 0;
}