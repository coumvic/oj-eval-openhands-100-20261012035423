#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Precomputed list of perfect numbers ≤ 10^12
    const vector<unsigned long long> perfect_numbers = {
        6ULL,                    // 2^2 * (2^3 - 1)
        28ULL,                   // 2^3 * (2^4 - 1)
        496ULL,                  // 2^4 * (2^5 - 1)
        8128ULL,                 // 2^5 * (2^6 - 1)
        33550336ULL,             // 2^6 * (2^7 - 1)
        8589869056ULL,           // 2^7 * (2^8 - 1)
        137438691328ULL          // 2^8 * (2^9 - 1)
    };
    
    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        unsigned long long n;
        cin >> n;
        
        // Check if n is in the perfect numbers list
        bool is_perfect = binary_search(perfect_numbers.begin(), perfect_numbers.end(), n);
        
        cout << (is_perfect ? 1 : 0) << endl;
    }
    
    return 0;
}