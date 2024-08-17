// Left rotate by one place
#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}
// left rotate by k places
vector<int> rotateArray(vector<int> arr, int k)
{

    int kMod = k % arr.size();
    int temp[kMod];
    for (int i = 0; i < kMod; i++)
    {
        temp[i] = arr[i];
    }
    for (int j = kMod; j < arr.size(); j++)
    {
        arr[j - kMod] = arr[j];
    }
    for (int i = arr.size() - kMod; i < arr.size(); i++)
    {
        arr[i] = temp[i - (arr.size() - kMod)];
    }
    return arr;
}
