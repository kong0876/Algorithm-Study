#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[21];
int cnt;

void func(int num, int sum) { 
    // num: 현재 확인하고 있는 원소의 인덱스
    // sum: 현재까지 선택된 원소들의 합
    
    if (num == n) { // 모든 원소를 확인한 경우
        if (sum == s) cnt++;
        return;
    }
    
    func(num + 1, sum); // 현재 원소를 선택하지 않은 경우
    func(num + 1, sum + arr[num]); // 현재 원소를 선택한 경우
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    func(0, 0);
    
    if (s == 0) cnt--; // s가 0인 경우, 공집합을 카운트에서 제외하기 위함

    cout << cnt;

    return 0;
}
