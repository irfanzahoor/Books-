# -*- coding: utf-8 -*-
'''
Ending a program early with sys.exit()
'''
	
import sys

while True:
	print('Type exit to exit')
	response = input()
	if response == 'exit':
		sys.exit()
	print('You typed' + 'response' + '.')