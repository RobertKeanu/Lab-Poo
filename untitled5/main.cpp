#include <bits/stdc++.h>

using namespace std;


const int N = 1000000;

int a[N], b[N], mask[N], aux[N];
long long sol = 0;

void mergesort(int i, int j)
{
    int mid = ((i + j) / 2) + 1, jj = j + 1;
    int start = i;
    j = mid;
    int k = 1;
    while(i < mid && j < jj) {
        if(b[i] <= b[j]) {
            aux[k] = b[i];
            i++;
        }
        else {
            aux[k] = b[j];
            sol += 1LL * (mid - i);
            j++;
        }
        k++;
    }
    while(i<=mid-1)
        aux[k++] = b[i++];
    while(j<jj)
        aux[k++] = b[j++];
   for(k=start; k<=jj;k++)
       b[start] = aux[k];
}

void merge_sort(int i, int j)
{
    if(i < j) {
        merge_sort(i, (i + j) / 2);
        merge_sort((i + j) / 2 + 1, j);
        mergesort(i, j);
    }
}

int main()
{
    int n;

    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> b[i];
    merge_sort(1, n);
    cout <<"numarul de inversiuni este:"<< sol;
    return 0;
}