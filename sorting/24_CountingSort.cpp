#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <iomanip>
#define ll long long int
using namespace std;

/*--------------- Genreal purpose implementation-----------------------*/

void countSort(int A[], int n, int k)
{
   int count[k];

   for(int i = 0; i < k; i++)
   {
      count[i] = 0;
   }

   for (int i = 0; i < n; i++)
   {
      count[A[i]]++;
   }

   for(int i = 1; i < k; i++)
   {
      count[i] = count[i-1] + count[i];
   }

   int output[n];
   for(int i = n-1; i >= 0; i--)
   {
      output[count[A[i]] - 1] = A[i];
      count[A[i]]--;
   }

 cout << "Our Sorted Array:- ";
   for(int i = 0; i < n; i++)
   {
      A[i] = output[i];
      cout << A[i] << " ";
   }

}
int main()
{
   int n;
   cin >> n;
   int A[n];
   for (int i = 0; i < n; i++)
   {
      cin >> A[i];
   }
   int k;
   cout << "enter an integer just greater than youre largest integer:- ";
   cin >> k;
 
   countSort(A, n, k);

return 0;
}