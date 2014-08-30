# https://www.hackerrank.com/challenges/service-lane
__auther__='Sudhanshu Patel (Sudhanshuptl13@gmail.com)'

n,t=raw_input().split(' ')
n,t=int(n),int(t)

if __name__=='__main__':
    ls=[int(x) for x in raw_input().split(' ')]
    while(t):
        i,j=raw_input().split(' ')
        i,j=int(i),int(j)
        x=min(ls[i:j+1])
        print x
        t -=1
        
