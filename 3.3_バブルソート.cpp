#include <bits/stdc++.h>
using namespace std;

// 引数のint A[]はポインタ渡し
// アドレスを渡すので元の変数が書き換わる
int bubbleSort(int A[], int N) {
  int count = 0; // 交換した回数
  bool flag = 1;

  // iはソート済みの先頭インデックス
  // このループごとにソート済みが増えていく
  for (int i = 0; flag; i++) {
    flag = 0;

    // jは隣と比較するインデックス
    // N-1からi+1までデクリメントしつつループ
    for (int j = N - 1; j >= i + 1; j--) {
      if (A[j] < A[j - 1]) {
        swap(A[j], A[j - 1]); // 値を交換する
        flag = 1;
        count++;
      }
    }

    // 交換が発生しなければ(flagが0なので)ソート完了
  }

  return count;
}

int main() {
  int N, i;
  cin >> N;
  int A[N];

  for (i = 0; i < N; i++) {
    cin >> A[i];
  }

  int count = bubbleSort(A, N);

  for (i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << count << endl;

  return 0;
}
