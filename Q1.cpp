#include <iostream>
using namespace std;

class Hanoi {
public:
    void solve(int n, char source, char auxiliary, char destination) {
        if (n == 1) {
            cout << "Move disk 1 from " << source << " to " << destination << endl;
            return;
        }
        solve(n - 1, source, destination, auxiliary);
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        solve(n - 1, auxiliary, source, destination);
    }
};

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    Hanoi h;
    h.solve(n, 'A', 'B', 'C');
    return 0;
}
