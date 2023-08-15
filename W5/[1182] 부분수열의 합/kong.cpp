// [1182] 언어 : C++, 메모리 (KB) :  , 시간(ms) : 

#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[21];
int cnt;

void func(int num, int sum) { // num : 현재 원소의 갯수, sum = 원소를 다 더한 값
    if (num == n) { // 원소의 개수가 n개인 상태
        if (sum == s) cnt++;
        return;
    }
    func(num + 1, sum); // 현재 원소 더한경우
    func(num + 1, sum + arr[num]); // 현재 원소 안 더한 경우
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    func(0, 0); 
    if (s == 0) cnt--; // s가 0인경우 공집한인 경우가 포함되는데, 이를 제거해야 하므로
    cout << cnt;


    return 0;
}
