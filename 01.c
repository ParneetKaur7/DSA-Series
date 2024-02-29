#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    return (a>b)? a:b;
}
int knapsack(int val[], int weight[], int cap, int n) {
    if(n==0 || cap==0) {
        return 0;
    }
    if(weight[n-1]> cap) {
        return knapsack(val, weight, cap, n-1);
    }
    else{
        return max(val[n-1]+ knapsack(val, weight, cap-weight[n-1], n-1), knapsack(val, weight, cap, n-1));
    }
}
int main() 
{
    int n;
    printf("enter size:");
    scanf("%d", &n);
    int val[n];
    int weight[n];
    for(int i=0; i<n; i++) {
        printf("enter value:");
    scanf("%d", &val[i]);
    }
    for(int j=0; j<n; j++) {
        printf("enter weight:");
    scanf("%d", &weight[j]);
    }
    int cap;
    printf("enter capacity:");
    scanf("%d", &cap);
    printf("knapsack is:%d", knapsack(val, weight, cap, n));
    return 0;
}