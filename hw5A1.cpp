#include <iostream>
using namespace std;

int totalGold(int donations[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += donations[i];
    }

    return total;
}

int main() {
    const int VAULT_GOAL = 42500;

    int count;
    int donations[100];

    cout << "Enter the number of gold donations: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donations[i];
    }

    int total = totalGold(donations, count);

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << VAULT_GOAL << endl;

    if (total >= VAULT_GOAL) {
        cout << "The Vault is fully funded! Surplus: " << total - VAULT_GOAL << " gold" << endl;
    } else {
        cout << "The Vault still needs " << VAULT_GOAL - total << " more gold." << endl;
    }

    return 0;
}