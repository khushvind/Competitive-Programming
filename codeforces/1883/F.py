from sys import stdin,stdout
input = stdin.readline
from bisect import bisect,bisect_right
from math import inf,ceil
from heapq import heapify,heappop,heappush
from collections import Counter

                               
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    c = Counter(a)
    A = {}
    ans = 0
    cnt = 0
    for i in range(n):
        if (a[i] not in A):
            cnt += 1
            A[a[i]] = 1
        else:
            A[a[i]] += 1
        if (A[a[i]] == c[a[i]]):
            ans += cnt 
    print(ans)                 