def reversedSentence():
  s = "this is sample sente"
  list1 = s.split(" ")
  print list1
  #['this', 'is', 'sample', 'sente']
  l = len(list1)
  reversedStr = " "
  newList = []
  for ele in list1:
    arr = list(ele)
    l2= len(arr)
    print l2
    for i in xrange(0,l2/2):
      temp=arr[i]
      arr[i] = arr[l2-1-i]
      arr[l2-1-i] = temp
    newEle = ''.join(arr)
    print newEle
    newList.append(newEle)

  reversedStr =newList.join(" ")
  print reversedStr

def main():
   reversedSentence()  
