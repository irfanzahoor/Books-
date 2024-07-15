# -*- coding: utf-8 -*-

'''
List and tuple ops
'''

#Finding a Value in a List with the index() Method
spam = ['hello', 'hi', 'howdy', 'heyas']
spam.index('hello')

#Adding Values to Lists with the append() and insert() Methods
spam = ['cat', 'dog', 'bat']
spam.append('moose')
['cat', 'dog', 'bat', 'moose']

spam = ['cat', 'dog', 'bat']
spam.insert(1, 'chicken')
['cat', 'chicken', 'dog', 'bat']

#Removing Values from Lists with remove()
spam = ['cat', 'bat', 'rat', 'elephant']
spam.remove('bat')
['cat', 'rat', 'elephant']

#Sorting the Values in a List with the sort() Method
spam = [2, 5, 3.14, 1, -7]
spam.sort()
[-7, 1, 2, 3.14, 5]

spam = ['ants', 'cats', 'dogs', 'badgers', 'elephants']
spam.sort()
['ants', 'badgers', 'cats', 'dogs', 'elephants']

spam.sort(reverse=True)
['elephants', 'dogs', 'cats', 'badgers', 'ants']

spam = ['a', 'z', 'A', 'Z']
spam.sort(key=str.lower)
['a', 'A', 'z', 'Z']

#References
import copy
#copy.copy() and copy.deepcopy() helps in making copy of lists,
#direct assignment of lists assign the reference of the src list
