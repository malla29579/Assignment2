#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(5);  // Dynamically allocate memory
    cout << "Value: " << *ptr << endl;
    delete ptr;  // Manually free the allocated memory
    return 0;
}
