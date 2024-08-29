#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    // Create a forward_list and initialize with values
    forward_list<int> flist = {1, 2, 3, 4, 5};

    // Insert after the first element
    auto it = flist.begin();
    flist.insert_after(it, 10);

    // Insert multiple elements after the second position
    advance(it, 2);
    flist.insert_after(it, {20, 30, 40});

    // Remove elements with value 10
    flist.remove(10);

    // Reverse the list
    flist.reverse();

    // Sort the list
    flist.sort();

    // Print the list
    cout << "Elements in forward_list: ";
    for (int x : flist) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

/*
Sample Output:
Elements in forward_list: 1 2 3 4 5 20 30 40 
*/
