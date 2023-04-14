// 数字 c[1], c[2], ..., c[K] のみを使うことで作れる N 桁の正の整数のうち B の倍数であるものは何個か。
// 1000000007 で割った余りを求めよ。

// 【制約】
// ・1 ≦ N ≦ 10^18
// ・2 ≦ B ≦ 1000
// ・1 ≦ K ≦ 9
// ・1 ≦ c[1] < c[2] < c[3] < ... < c[K] ≦ 9
// ・入力はすべて整数

// これはBの倍数の個数だけ求めれば良いのか、それとも1000000007のあまりを求めるのか、もしくはそのどちらもなのか

// なんか三つあるらしい、めんどくさめ

#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int N, B, K;
    cin >> N >> B >> K;

    vector<int> S(K);

    for(int i = 0; i < K; i++){
        cin >> S[i];
        // cout << S[i] << endl;
    }

    for(int i = 0;)
    return 0;
}