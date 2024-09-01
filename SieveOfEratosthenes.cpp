// #include <bits/stdc++.h>
// using namespace std;

// // void SieveOfEratosthenes(long n)
// // {
// //     vector<bool> prime(n + 1, true);
    
// //     for (long p = 2; p <= sqrt(n); p++) {
// //         if (prime[p] == true) {
// //             for (long i = p * p; i <= n; i += p)
// //                 prime[i] = false;
// //         }
// //     }

// //     for (long p = 2; p <= n; p++)
// //         if (prime[p])
// //             cout << p << " ";
// // }

// // int main()
// // {
// //     long n = 21474836;
// //     SieveOfEratosthenes(n);
// //     return 0;
// // }



// int main(){
//     int n;
//     cin>>n;

//     bool prime[n+1];
//     memset(prime,true,sizeof(prime));

//     for(int i=2;i<=sqrt(n);i++){
//         if(prime[i]){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=false;
//             }
//         }
//     }

//     for(int i=2;i<n;i++){
//         if(prime[i])
//             cout<<i<<" ";
//     }
// }



#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
