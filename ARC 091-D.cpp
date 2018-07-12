//https://arc091.contest.atcoder.jp/tasks/arc091_b
#include <iostream>

typedef long long ll;

using namespace std;
int main() {
	ll N,K;
	cin >> N >> K;
	ll ans=0;
	//a=qb+K
	for (int b=1; b<=N; b++) {
		ans += (N-K*b);
		cout << b << endl;
	}
	cout << ans << endl;
	return 0;
}