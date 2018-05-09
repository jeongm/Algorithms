# https://www.acmicpc.net/problem/1759
# Huh Python3 code

import string

ans = set()
vowels = 'aoeiu'
consonants = string.ascii_lowercase
for vowel in vowels:
    consonants = consonants.replace(vowel, '')

k, n = map(int, input().split())
cand = ''.join(sorted(input().split()))


def dfs(v, str, cnt):
    if (cnt == k):
        enough_vowels = any(vowel in vowels for vowel in str)

        enough_consonants = False
        number_of_consonants = 0
        for consonant in consonants:
            if consonant in str:
                number_of_consonants += 1
                if (number_of_consonants >= 2):
                    enough_consonants = True
                    break

        if enough_consonants and enough_vowels:
            ans.add(str)
    else:
        for i in range(v + 1, n):
            dfs(i, str + cand[i], cnt + 1)

    cnt -= 1


for i in range(n):
    cnt = 1
    dfs(i, cand[i], cnt)

for i in sorted(ans):
    print(i)
