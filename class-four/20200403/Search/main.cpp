#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b) {
    return a > b;
}
bool Search(int Data[], int target, int size)
{
    int left = 0, right = size - 1;
    int mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (Data[mid] == target)
            return true;
        if (Data[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}
int main()
{
    int m, n;//m多少个球，n几轮
    cin >> m >> n;
    int balls[m + 10];//球
    int target[n + 10]; //目标
    sort(balls, balls + m, compare); //排序
    for (int i = 0; i < m; i++) {
        cin >> balls[i];
    }
    for (int i = 0; i < m; i++) {
        cout << balls[i] << " ";
    }cout << "\n";//测试
    for (int i = 0; i < n; i++) {
        cin >> target[i];
        //输入目标
    }
    for (int i = 0; i < n; i++)
    {
        //n轮游戏
        bool isGe = Search(balls, target[i], m);
        if (isGe)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
