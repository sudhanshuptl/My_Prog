#isPrime(n)



#*****************************************************

def isPrime(n):
    '''
      this Function Take integer n as input
      and return True is n is prime
      else return False
    '''
    import math
    if n<2:
        return False
    elif n==2:
        return True
    elif n%2==0:
        return False

    sqrt_n=math.sqrt(n)
    # Now check isPrime
    flag=True
    for i in range(3,int(sqrt_n),2):
        if(n%i==0):
            flag=False
            break
    return flag


#*****************************Testing Module *********
if __name__=='__main__':
    for i in range(2,301):
        if(isPrime(i)):
            print i

    print "Thank You"
