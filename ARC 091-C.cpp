//https://arc091.contest.atcoder.jp/tasks/arc091_a

#include <iostream>
typedef long long ll;
using namespace std;
int main() {
	ll N,M;
	cin >> N >> M;
	if (N==1 & M==1){
		cout << 1 << endl;
	}
	else if(N==1){
		cout << M-2 << endl;
	}
	else if(M==1){
		cout << N-2 << endl;
	}
	else{
		cout << (N-2)*(M-2) << endl;
	}
	return 0;
}