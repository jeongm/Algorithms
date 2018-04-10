import webbrowser

html_header = """<!DOCTYPE html>
            <html>
            <body>
            <div align="center">"""
html_closure = """</div>
             </body>
             </html>"""

link = 'https://boj.kr/'
raw = 'recommended_problems_to_solve' # 상대방의 푼 문제

my = 'my_solved_problems_list' # 나의 푼 문제

problems = list(raw.split())

solved = list(my.split())

v = open('problems_to_solve.html', 'w')

v.write(html_header)

cnt = 0
total = len(problems)
for problem in problems:
    if problem not in solved:
        cnt += 1
        new_url = link + problem
        v.write('<a href="' + new_url + '" target="_blank">' + new_url + '</a><br><br>')

v.write(html_closure)

v.close()

print(str(cnt) + ' problem links out of ' + str(total) + ' recommendations generated!')

webbrowser.open_new_tab('problems_to_solve.html')
