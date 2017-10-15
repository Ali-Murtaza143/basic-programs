//  Created by Riya Pannu on 15/10/17.

#include<iostream>
using namespace std;

long long int factorial(long long int n) {
    if (n<0)
        return -1;
    else if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
    
}

int main() {
    long long int n;
    cout<<"Enter a positive number \n";
    cin >> n;
    long long int result = factorial(n);
    if (result==-1)
        cout<<"Invalid input";
    cout << "The factorial of "<<n<<" is "<<result << endl;
    return 0;
}
