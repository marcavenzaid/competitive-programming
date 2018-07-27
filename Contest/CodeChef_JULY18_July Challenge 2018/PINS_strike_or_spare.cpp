/**
 *    author: marcavenzaid
 *    created: 2018-07-07-00.43
 */

/* Problem:
 * Chef's company wants to make ATM PINs for its users, so that they could use
 * the PINs for withdrawing their hard-earned money. One of these users is
 * Reziba, who lives in an area where a lot of robberies take place when people
 * try to withdraw their money.
 *
 * Chef plans to include a safety feature in the PINs: if someone inputs the
 * reverse of their own PIN in an ATM machine, the Crime Investigation
 * Department (CID) are immediately informed and stop the robbery. However,
 * even though this was implemented by Chef, some people could still continue to
 * get robbed. The reason is that CID is only informed if the reverse of a PIN
 * is different from that PIN (so that there wouldn't be false reports of
 * robberies).
 *
 * You know that a PIN consists of N decimal digits. Find the probability that
 * Reziba could get robbed. Specifically, it can be proven that this probability
 * can be written as a fraction P/Q, where P >= 0 and Q >= 0 are coprime
 * integers; you should compute P and Q.
 *
 * Input:
 * � The first line of the input contains a single integer T denoting the number
 *   of test cases. The description of T test cases follows.
 * � The first and only line of each test case contains a single integer N
 *   denoting the length of each PIN.
 *
 * Output:
 * For each test case, print a single line containing two space-separated
 * integers - the numerator P and denominator Q of the probability.
 *
 * Constraints:
 * � 1 <= T <= 100
 * � 1 <= N <= 10^5
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n;
        cin >> n;
        cout << "1 1";
        for (int i = 0; i < n/2; ++i) {
            cout << "0";
        }
        cout << "\n";
    }
    return 0;
}
