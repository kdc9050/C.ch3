//1. 3���� ���� �߿��� �ִ밪�� ã�� �Լ�maximum(x,y,z)�� �����ϰ� �׽�Ʈ�϶�.

#include<iostream>
using namespace std;

int maximum(int x, int y, int z) {
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}

int main() {
    int x, y, z;

    cout << "3���� ������ �Է��Ͻÿ�:";
    cin >> x >> y >> z;

    int max_value = maximum(x, y, z);

    cout << "���� ū ������ " << max_value << endl;

    return 0;
}
