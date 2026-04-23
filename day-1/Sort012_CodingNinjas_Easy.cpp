// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Sort 0 1 2
//  URL       : https://www.naukri.com/code360/problems/sort-0-1-2_631055?interviewProblemRedirection=true
//  Platform  : CodingNinjas
//  Difficulty: Easy
//  Language  : cpp
//  Day       : Day-1
//  Date      : 2026-04-23
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++; mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{ 
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}