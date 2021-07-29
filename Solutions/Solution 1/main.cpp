#include <iostream>

using namespace std;

int main()
{
    int n =1000;
    int a = n/3;
    int b =  n/5 -1;
    int c =  n/15;

    int sum=0;
    sum += 3* ((a*(a+1))/2);
    sum += 5* ((b*(b+1))/2);
    sum -= 15* ((c*(c+1))/2);
    cout << sum;
    return 0;
}
