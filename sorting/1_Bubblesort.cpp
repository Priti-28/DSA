#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <iomanip>
#define ll long long int

using namespace std;

void bubbleSort(int A[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(A[j] > A[j+1]) swap(A[j], A[j+1]);
        }
    }
}
int main ()
{
  int n;
  cin >> n;
  int A[n];
  for(int i = 0; i < n; i++)
  {
      cin >> A[i];
  }

   bubbleSort(A, n);

for(int i = 0; i < n; i++)
  {
      cout <<  A[i] << " ";
  }


    return 0;
}



/*
------------------GFG---------------

void bubbleSort(int arr[], int n)
    {
        // Your code here 
        int temp;
       for(int i = 0; i < n-1; i++)
       {
          for(int j = 0; j < n-1; j++)
          {
              if(arr[j] > arr[j+1])
              {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //swap(arr[j], arr[j+1]); its not working
              }
          }
       }
    }

*/