link = 'https://boj.kr/'

raw = 'some_recommendation'
problems = list(raw.split(', '))

my = 'some_solved'
solved = list(my.split())

v = open('problems_to_solve.txt', 'w')
cnt = 0
total = len(problems)
for problem in problems:
    if problem not in solved:
        cnt += 1
        v.write(link + problem + '\n')

v.close()

print(str(cnt) + ' problem links out of ' + str(total) + ' recommendations generated!')
