#include <iostream>
using namespace std;

int main() {
    string s = "abcyy";  // Original string
    int t = 2;           // Number of transformations
    long long mod = 1000000007;

    // Initialize size of the original string
    long long size = s.size();

    // Count initial 'z' characters
    long long z_count = 0;
    for (char c : s) {
        if (c == 'z') {
            z_count++;
        }
    }

    // Perform transformations
    for (int i = 0; i < t; i++) {
        // Each 'z' adds 1 to the size
        size = (size + z_count) % mod;

        // After the transformation, we can only add new 'z' if the size is increased
        // However, since we are only counting how many z's are there,
        // We can safely update z_count to the new size for the next iteration.
        // In the real transformation, the new z count would be based on the original string,
        // but for our purpose, we know how many new z's would be created each time
        // So we continue with our previous count.
    }

    cout << "Final size after transformations: " << size << endl;
    return 0;
}
