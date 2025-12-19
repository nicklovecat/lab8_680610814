#include <iostream>
using namespace std;

int main() {
    char rank;
    cout << "Input your rank: ";
    cin >> rank;
    int lv = 0;
    if (rank == 'S') lv = 5;
    else if (rank == 'A') lv = 4;
    else if (rank == 'B') lv = 3;
    else if (rank == 'C') lv = 2;
    else if (rank == 'D') lv = 1;
    if (lv >= 5) cout << "You have received Super Ultra Rare Unit!!!\n";
    if (lv >= 4) cout << "You have received 5 gems.\n";
    if (lv >= 3) cout << "You have received 1 gems.\n";
    if (lv >= 2) cout << "You have received 2000 coins.\n";
    if (lv >= 1) cout << "You have received very KAK items.\n";
    return 0;
}