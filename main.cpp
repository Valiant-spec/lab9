#include <iostream>
using namespace std;
 //problem1

/*int multiply(int a, int b) {
    if (b == 0) return 0;
    if (b > 0) return a + multiply(a, b - 1);
    return -multiply(a, -b); // Handle negative numbers
    }

int main() {
    int a, b;
    cin >> a >> b;
    cout << multiply(a, b) << endl;
    return 0;*/
//problem2
/*int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;*/

//problem3
/*int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;*/


//problem4
/*int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumN(n) << endl;
    return 0; */

//problem5
/*void printDescending(int n) {
    if (n == 0) return;
    cout << n << " ";
    printDescending(n - 1);
}

int main() {
    int n;
    cin >> n;
    printDescending(n);
    cout << endl;
    return 0;*/


//problem6
/*int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;*/

//problem7
/*int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << sumDigits(n) << endl;
    return 0;*/

//problem8
/*int power(int x, int y) {
    if (y == 0) return 1;
    return x * power(x, y - 1);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
    return 0; */

//problem9

/*int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n) << endl;
    return 0; */

//problem10

/*bool isPalindromeHelper(int n, int rev) {
    if (n == 0) return n == rev;
    return isPalindromeHelper(n / 10, rev * 10 + (n % 10));
}

bool isPalindrome(int n) {
    return isPalindromeHelper(n, 0);
}

int main() {
    int n;
    cin >> n;
    cout << (isPalindrome(n) ? "true" : "false") << endl;
    return 0; */

//problem11

/*bool isPrimeHelper(int n, int i) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return false;
    if (i * i > n) return true;
    return isPrimeHelper(n, i + 1);
}

bool isPrime(int n) {
    if (n < 2) return false;
    return isPrimeHelper(n, 2);
}

int main() {
    int n;
    cin >> n;
    cout << (isPrime(n) ? "true" : "false") << endl;
    return 0; */


//peoblem12

/*void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}*/

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.