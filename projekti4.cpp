#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Shkruaj nje numer: ";
    cin >> n;

    if (n >= 0)
        cout << "Numri eshte pozitiv";
    else
        cout << "Numri eshte negativ";
      
    cout << "Fundi i programit." << endl;

    return 0;
}
