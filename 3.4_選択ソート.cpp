#include <bits/stdc++.h>
using namespace std;

void trace(int A[], int N) {
  for (int i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << endl;
}

int selectionSort(int A[], int N) {
  int count = 0;
  int min; // 最小値のインデックス(ソート済みを除く)

  // iは交換予定の要素のインデックス
  // このループごとにソート済みが増えていく
  for (int i = 0; i < N - 1; i++) {
    min = i; // 交換予定のインデックスで初期化

    // jは未ソート部分のインデックス
    for (int j = i + 1; j < N; j++) {
      // 一番小さい値のインデックスをminとして保存する
      if (A[j] < A[min]) min = j;
    }

    if (i != min) {
      swap(A[i], A[min]);
      count++;
    }

    trace(A, N);
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

  int count = selectionSort(A, N);

  for (i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << endl << count << endl;

  return 0;
}
