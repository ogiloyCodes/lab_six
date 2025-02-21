#include <iostream>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    /*
        problem1-a
        int sum =0;
    for (int i =0; i<=100; i++) {
    sum +=i;
    }
        cout << sum << endl;

    */

    /*
// problem1-b
int i=0;
int sum2=0, n;
cout << "Enter n: ";
    cin >> n;
cout << n<< endl;

while(i<=n) {
    sum2+=i;
    i++;
}
cout << "Sum is "<<sum2 << endl;

*/

    /*

        //problem2-a
    int count = 0, num =2;
        cout << "First 10 prime numbers are: " << endl;
    for (; count < 10; num++) {
    bool isPrime = true;
        for (int i = 2; i*i <=num; i++) {

            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << endl;
            count++;
        }
    }



    */


    /*
    //problem2-b
    int count = 0, num =2, n;
    cout << "HOW MANY PRIME NUMBERS SHOULD I PRINT?:" << endl;
    cin >> n;
    cout << "First " << n<<" prime numbers are: " << endl;

    for (; count < n; num++) {
        bool isPrime = true;
        for (int i = 2; i*i <=num; i++) {

            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << endl;
            count++;
        }
    }

*/

    int count = 0, num =2, n;
    int i =2;
    bool isPrime = true;
    cout << "HOW MANY PRIME NUMBERS SHOULD I PRINT?:" << endl;
    cin >> n;
    cout << "First" << n<<" prime numbers are: " << endl;
    while (count < n) {
        while (i*i <= num) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
        if (isPrime) {
            cout << num << endl;
            count++;
        }
        num++;
    }

    /*
    //problem4
    int n;
    cout << "Enter n(starting point of Collatz Conjecture): ";
    cin >> n;
    cout << "This is your Collatz Conjecture: "<< endl;
    while (n  > 1 ) {
        cout << n << endl;
        if (n%2==0) {
            n=n/2;
        }
        else {
            n=n*3+1;
        }
    }
    cout << "1"<<endl;
*/




    return 0;
}
