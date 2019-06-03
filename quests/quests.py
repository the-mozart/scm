#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May 31 14:38:10 2019

@author: anton
"""

import random

class Quests:
    def __init__(self):
        self.quests = [] 
        
    def add(self, q):
        self.quests.append(q)
        
    def load_from_file(self, filename, sep = '<br/>'):
       
        try:
            fn = open(filename, "r") 
        except IOError: 
            print("Ошибка: файл не найден!")

        self.quests = fn.read().split(sep + "\n")
        
    def create_tickets_for_template(self, tickets_per_sheet = 4):
        random_list = random.sample(self.quests, len(self.quests))
        
        tickets = []
        
        tnum = 1
        for q1, q2 in zip(random_list[0::2], random_list[1::2]):
            
            if (tnum % tickets_per_sheet == 0):
                last_on_page = True
            else:
                last_on_page = False
                
            tickets.append({"tnum":tnum, "q1":q1, "q2":q2,"lastonpage":last_on_page})
            tnum += 1
            
        
        return tickets
    
    def question_list_for_template(self):
        tnum = 1
        qlist = []

        for q in self.quests:
                
            qlist.append({"tnum":tnum, "q":q})
            tnum += 1
            
        
        return qlist
    