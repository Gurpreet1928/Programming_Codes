#Tabulation method

def fib(n):
   f = [0]*(n+1)
   f[1] = 1
   for i in range(2,n+1):
      f[i] = f[i-1] +f[i-2]
      #print f[i]
   return f[n]



def main():
   print "Input an number"
   n = input()
   print " fibonaci num\n" , fib(n)

if __name__ == "__main__":
   main() 
