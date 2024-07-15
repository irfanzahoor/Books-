# -*- coding: utf-8 -*-

'''
dicts
'''

#The keys(), values(), and items() Methods
spam = {'color': 'red', 'age': 42}
for v in spam.values():
    print(v)
red
42

for k in spam.keys():
    print(k)
color
age

for i in spam.items():
    print(i)
('color', 'red')
('age', 42)

 list(spam.keys())
['color', 'age']

for k, v in spam.items():
        print('Key: ' + k + ' Value: ' + str(v))
Key: age Value: 42
Key: color Value: red

#The get() Method
#There is no 'eggs' key in the picnicItems dictionary, the default value 0 is returned by the get() method.
picnicItems = {'apples': 5, 'cups': 2}
'I am bringing ' + str(picnicItems.get('cups', 0)) + ' cups.'
'I am bringing 2 cups.'
'I am bringing ' + str(picnicItems.get('eggs', 0)) + ' eggs.'
'I am bringing 0 eggs.'

#The setdefault() Method
#The first argument passed to the method is the key to check for, 
#and the second argument is the value to set at that key if the key does not exist. 
#If the key does exist, the setdefault() method returns the key’s value. 
spam = {'name': 'Pooka', 'age': 5}
spam.setdefault('color', 'black')
{'color': 'black', 'age': 5, 'name': 'Pooka'}
spam.setdefault('color', 'white')
{'color': 'black', 'age': 5, 'name': 'Pooka'}

#Pretty Printing
#Automatic dicts contents formating
import pprint
message = 'It was a bright cold day in April, and the clocks were striking
thirteen.'
count = {}

for character in message:
    count.setdefault(character, 0)
    count[character] = count[character] + 1

pprint.pprint(count)

#Nested Dictionaries and Lists