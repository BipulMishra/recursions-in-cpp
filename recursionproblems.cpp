// Recursion

// Recursive code for printing numbers from 0 to 3 
// #include <iostream>
// using namespace std ;
// int cnt = 0  ;
// void print(){

//     // Base Condition 
//     if (cnt==3) return ;
//     cout << cnt << endl ;

//     // Count Incremented 
//     cnt++;
//     print();
// }
// int main(){
//     print();
//     return 0 ;
// }


// Printing Name N times using Recursion 

// #include <iostream>
// using namespace std ;
// void func(int i , int N){
//     //Base condition 
//     if(i>N) return ;
//     cout<<"Bipul" << endl;
//     func(i+1 ,N);
// }
// int main(){
//     int N=4;
//     func(1,N);

//     return 0;

// }

// TIME COMPLEXITY : O(N)
// SPACE COMPLEXITY : O(N)

// Print 1 to N using Recursion

// #include <iostream>
// using namespace std ;
// void func(int i ,int N){
//     // Base Condition
//     if(i>N) return ;
//     cout << i << endl;

//     // function call to print i till i increment to N 
//     func(i+1 , N) ;
// }
// int main(){
//     int N = 4 ;
//     func(1 , N );
//     return 0 ;
// }

// --------- Backtracking Approach-------------

// #include <iostream>
// using namespace std ;

// void func(int i , int n){
//     //Base condition
//     if(i<1) return ;

//     // function call to print n-1 integers 
//     func(i-1, n);
//     cout << i << endl ;

// }
// int main(){
//     int n = 4 ;
//     func(n,n);
//     return 0 ;
// }

// Time Complexity : O(n)
// Space Complexity : O(n)


// Print N to 1 using Recursion
// #include <iostream>
// using namespace std ;
// void func(int i , int N){
//     // Base Condition
//     if(i<1) return ;
//     cout << i << endl ;

//     // Function call to print i till i decrement to 1 
//     func(i-1 ,N);
// }
// int main(){
//     int N = 4 ;
//     func(N,N);
//     return 0 ;
// }

// Time Complexity : O(n)
// Space complexity : O(n)


// Using Backtracking Approach 
// #include <iostream>
// using namespace std ;
// void func(int i , int n){
//     // Base Condition
//     if(i>n) return ;

//     // function call to print (i+1) integer
//     func(i+1,n);
//     cout << i << endl ;

// }
// int main(){
//     int n= 4 ;
//     func(1 , n);
//     return 0 ;
// }

// Sum Of first N Natural Number 

// solution 1 : Using Loop 

// #include <iostream>
// using namespace std ;
// void solve (int n){
//     int sum = 0 ;
//     for (int i = 1 ; i<=n ; i++){
//         sum+=i;
//     }
//     cout << "The sum of first" << n << "numbers is :" << sum << endl ;
// }
// int main(){
//     solve(5);
//     solve(6);
// }
// Time Complexity : O(n)
// Space complexity :O(1)

// Using the formula 
// #include <iostream>
// using namespace std ;

// void func(int N ){
//     int sum = N*(N+1)/2;
//     cout << "The sum of the first" << N << "number is :" << sum << endl ;

// }
// int main(){
//     func(5) ;
//     func(6);

// }


// Recursive way of calculating the sum of first N natural Numbers :
// - Parameterised way 
// - Functional way 

// 1) Parameterized Way 
// #include <iostream>
// using namespace std ;
// void func(int i , int sum ){
//     // Base condition
//     if(i<1){

//         cout << sum << endl ;
//         return ;
//     }
//     func(i-1,sum+i);
// }
// int main(){
//     int n=3 ;
//     func(n,0);
//     return 0 ;
// }

// Time complexity : O(n)
// space complexity : O(n)

// 2) Functional way 

// sumofNaturalNumbers(N) = N+ sumofNaturalNumbers(N-1);

// #include <iostream>
// using namespace std ;
// int func(int n){
//     // Base condition
//     if(n==0)
//     {
//         return 0 ;
//     }
//     return n+ func(n-1);
// }
// int main(){
//     int n=3 ;
//     cout << func(n) << endl ;
//     return 0 ;
// }

// Time Complexity : O(n)
// Space complexity : O(n)

// Factorial of a Number : Iterative and Recursive 

// Iterative Approach 
// #include <iostream>
// using namespace std ;
// int factorial (int x){
//     int ans = 1 ;
//     for(int i=1 ; i<=x; i++){
//         ans = ans*i;

//     }
//     return ans ;
// }
// int main(){
//     int x=5 ;
//     int result = factorial(x);
//     cout << " The factorial of " << x << " is " << result ;
// }

// Recursive approach 

// #include <iostream>
// using namespace std ;
// int factorial(int n){
//     // Base condition
//     if(n==0){
//         return 1 ;
//     }

//     return n*factorial(n-1) ;
// }
// int main(){
//     int n=3;
//     cout << factorial(n) << endl ;
//     return 0 ;
// }

// Time complexity: O(n)
// SPACE COMPLEXITY : O(n)


// Reverse a given Array 

// solution1 : using an extra array

#include <iostream>
using namespace std ;

// Function to print array 
void printArray(int ans[] , int n){
    cout << " The reversed array is :- " << endl ;
    for(int i =0 ; i<n ; i++){
        cout << ans[i] << " " ;
    }
}

// Function to reverse array using an auxiliary array .

// #include <iostream>
// using namespace std;
// //Function to print array
// void printArray(int ans[], int n) {
//   cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << ans[i] << " ";
//    }
// }
// //Function to reverse array using an auxiliary array
// void reverseArray(int arr[], int n) {
//    int ans[n];
//    for (int i = n - 1; i >= 0; i--) {
//       ans[n - i - 1] = arr[i];
//    }
//    printArray(ans, n);
// }
// int main() {
//    int n = 5;
//    int arr[] = {5,4,3,2,1};
//    reverseArray(arr, n);
//    return 0;
// }

// TIME COMPLEXITY :O(n)
// SPACE COMPLEXITY :O(n)

// Check if the given string is palindrome or not 
// #include <iostream>
// using namespace std ;

// bool isPalindrome(string s){
//     int left = 0 , right = s.length()-1 ;
//     while(left<right)
//     {
//         if(! isalnum(s[left]))
//         left++;
//         else if(!isalnum(s[right]))
//         right -- ;
//         else if (tolower(s[left])!= tolower(s[right]))
//         return false ;
//         else{
//             left++ ;
//             right-- ;
//         }
//     }
//     return true ;
// }
// int main(){
//     string str = "ABCDCBA" ;
//     bool ans = isPalindrome(str) ;
//     if(ans == true ){
//         cout << "Palindrome" ;
//     } else {
//         cout << "Not Palindrome" ;
//     }
//     return 0 ;
// }

// TIME COMPLEXITY : O(n)
// SPACE COMPLEXITY : O(1)

// RECURSIVE APPROACH 

// #include <iostream>
// using namespace std ;

// bool palindrome(int i , string s){
//     // Base Condition
//     // If i exceeds half of the string all the elements 
//     // are compared , we return true .

//     if(i>=s.length()/2) return true ;

//     // If the start is not equal to the end , not the palindrome 

//     if(s[i]!=s[s.length()-i-1])   return false ;

//     // if both characters are the same , increment i and check starts+1 and end-1
//     return palindrome(i+1 , s) ;
// }
// int main(){
//     string s = "madam" ;
//     cout << palindrome(0,s) ;
//     cout << endl ;
//     return 0 ;
// }


// Print Fibonnacii series upto Nth term 

// #include <iostream>
// using namespace std ;

// int fibonacci (int N){
//     // Base condition 
//     if(N<=1)
//     {
//         return N ;
//     }
//     // Problem broken down into 2 functional calls and 
//     // their results combined & returned 
//     int last = fibonacci(N-1);
//     int slast = fibonacci(N-2) ;
//     return last + slast ;
// }
// int main(){
//     int N = 4 ;
//     cout << fibonacci(N) << endl ;
//     return 0 ;
// }

// Time Complexity : O(2^N)
// Space complexity : O(N)

 





