#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int smallestSumNotPossible(vector<int>& coins) {
    int smallestSum = 1; // Initialize the smallest sum not possible

    // Traverse the coins
    for (int coin : coins) {
        // If the current coin value is greater than or equal to the smallest sum,
        // then we can form all sums in the range [1, smallestSum + coin - 1]
        if (coin <= smallestSum) {
            smallestSum += coin;
        } else {
            break; // If the current coin is greater than the smallest sum, we can't make the sum 'smallestSum'
        }
    }

    return smallestSum;
}

int main() {
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter the values of the coins: ";
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    // Sort the coins in ascending order
    sort(coins.begin(), coins.end());

    int smallestSum = smallestSumNotPossible(coins);
    cout << "The smallest sum you cannot create using a subset of the coins is: " << smallestSum << endl;

    return 0;
}
