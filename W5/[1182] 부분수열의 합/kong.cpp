// [1182] ��� : C++, �޸� (KB) :  , �ð�(ms) : 

#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[21];
int cnt;

void func(int num, int sum) { // num : ���� ������ ����, sum = ���Ҹ� �� ���� ��
    if (num == n) { // ������ ������ n���� ����
        if (sum == s) cnt++;
        return;
    }
    func(num + 1, sum); // ���� ���� ���Ѱ��
    func(num + 1, sum + arr[num]); // ���� ���� �� ���� ���
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    func(0, 0); 
    if (s == 0) cnt--; // s�� 0�ΰ�� �������� ��찡 ���ԵǴµ�, �̸� �����ؾ� �ϹǷ�
    cout << cnt;


    return 0;
}
