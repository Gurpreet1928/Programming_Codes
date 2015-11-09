import re
def regexMatch():
   str = 'ppurple alice-b@google.com monkey dishwasher'
   match =re.search(r'[\w.-]+@[\w.]+',str)
   #match = re.search(r'\w+',str)
   if match:
      print (match.group())
   else :
      print ('no match found')

regexMatch()

