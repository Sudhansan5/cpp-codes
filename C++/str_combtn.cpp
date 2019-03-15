#include <iostream>
#include <algorithm>
using namespace std;
void comb(string str, int n, string res)
{
    if (n == 1)
    {
        cout << res + str << ends;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        comb(str.substr(1), n - 1, res + str[0]);
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}
int main()
{
    string str = "History";
    string res;   
    comb(str, str.size(), res);
    return 0;
}
