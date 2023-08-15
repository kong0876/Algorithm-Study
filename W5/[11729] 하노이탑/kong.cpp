// [11729] ��� : C++, �޸� (KB) :  , �ð�(ms) : 

#include <bits/stdc++.h>
using namespace std;

int n; // ������ ����, n-1���� ������ ���ϴ� ������ �ű� �� �ִٸ� n���� ���� ó�� ����

// func(n)���� �ܼ��� func(n-1)�� ȣ���ϴ� ��ͷδ� ���� �Ұ� (��Ȳ���� ����� �ٸ�)

void func(int a, int b, int n) { // ���۱�հ� ��������� ���ڷ� ���� �� �־���� (n���� ���� a��� -> b���)
    if (n == 1) {
        cout << a << ' ' << b << '\n';
        return;
    }
    func(a, 6 - a - b, n - 1); // n-1���� ������ a -> c
    cout << a << ' ' << b << '\n'; 
    func(6 - a - b, b, n - 1); // n-1���� ������ c -> a
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    func(1, 3, n);

    return 0;
}
