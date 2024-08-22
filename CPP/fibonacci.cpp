#include <iostream>
#include <vector>
/**
 * @brief sample fibonacci program
 * @return int
*/
int main() {
    int n = 15, t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <=n; ++i) {
        // Prints the first two terms.
        if(i==1) {
            std::cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            std::cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        std::cout << nextTerm << ", ";
    }
    return 0;
}