#include <iostream>
using namespace std;

const int VAULT_GOAL = 42500;

int daysTofund(int startBalance, int dailyDeposit)
{
    int days = 0;

    while (startBalance < VAULT_GOAL)
    {
        startBalance += dailyDeposit;
        days++;

        cout << "Day " << days << ": deposited "
             << dailyDeposit
             << ", balance now "
             << startBalance << endl;
    
    }
    return days;

}

int main()
{
    int startBalance;
    int dailyDeposit;

    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    cout <<"--- Vault Savings Plan ---" << endl;

    int days = daysTofund(startBalance, dailyDeposit);

    cout << "The Vault was funded in "
         << days
         << " days!" << endl;

    return 0;
}