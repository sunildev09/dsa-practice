// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Pair Sum
//  URL       : https://www.naukri.com/code360/problems/pair-sum_697295?interviewProblemRedirection=true&leftPanelTabValue=SUBMISSION
//  Platform  : CodingNinjas
//  Difficulty: N/A
//  Language  : cpp
//  Day       : Day-1
//  Date      : 2026-04-23
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> result;
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == s){
                int a = min(arr[i], arr[j]);
                int b = max(arr[i], arr[j]);
                result.push_back({a, b});
            }
        }
    }
    
    sort(result.begin(), result.end());
    return result;
}