#include "time.cpp"


int main()
{
    Time t1(200);
    cout << t1 << endl; // displays 03m:20s
    Time t2;
    cin >> t2; // user enters 10h:12m:01s
    cout << t2 << endl;

    Time t3 = t2 - t1; // 10h:8m:41s
    cout << t3 << endl;
    int t3s = t3; // 36521
    cout << t3s << endl;
}
