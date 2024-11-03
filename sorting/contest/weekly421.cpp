#include <iostream>
using namespace std;

int main()
{
    string s = "abcyy";
    // string s = "azbk";
    int t = 2;
    long long mod = 1000000007;

    string temp = s;

    while (t > 0)
    {
        string str = "";
        int size = temp.size();
        
        for (int i = 0; i < size; i++)
        {
            if (temp[i] == 'z')
            {
                str += "ab";
                continue;
            }

            str += temp[i] + 1;
        }
        temp = str;
        t--;
    }

    cout << "temp: " << temp << endl;
    cout << "temp size: " << temp.size()% mod << endl;

    return 0;
}