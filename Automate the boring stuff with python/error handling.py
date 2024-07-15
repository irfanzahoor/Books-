# -*- coding: utf-8 -*-

'''
Error Handling
'''

#difference of placing try except block
def spam(divideBy):
	try:
		return 42 / divideBy
	except	ZeroDivisionError:
		print('Error: Invalid argument.')
		
print(spam(2))
print(spam(12))
print(spam(0))
print(spam(1))

21.0
3.5
Error: Invalid argument.
None
42.0
		
def spam(divideBy):
    return 42 / divideBy

try:
    print(spam(2))
    print(spam(12))
    print(spam(0))
    print(spam(1))
except ZeroDivisionError:
    print('Error: Invalid argument.')
	
21.0
3.5
Error: Invalid argument.