link = 'https://boj.kr/'
raw = ''
my = ''
problems = list(raw.split(', '))

solved = list(my.split())

v = open('problems_to_solve.txt', 'w')

for problem in problems:
    if problem not in solved:
        v.write(link + problem + '\n')

v.close()
