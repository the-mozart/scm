#!/usr/bin/python

from jinja2 import Template

import quests

questions = quests.Quests()

questions.load_from_file("quests_pool.txt")

try:
    fn = open('template/qlist_template.tex', 'r')

    tex = fn.read()
    template = Template(tex)
    print(template.render(qlist = questions.question_list_for_template()))

except IOError: 
    print("Ошибка: файл не найден!")

    
