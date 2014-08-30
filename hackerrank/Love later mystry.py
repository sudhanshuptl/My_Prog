# https://www.hackerrank.com/challenges/the-love-letter-mystery
 # Sudhanshu Patel

def count_min_step(sl,sr):
    j=len(sl)-1
    count=0
    for i in range(len(sl)):
        if sl[j] < sr[i]:
            count=count+(ord(sr[i])-ord(sl[j]))
        elif sl[j] >sr[i]:
            count=count+(ord(sl[j])-ord(sr[i]))
        j -=1
    return count
                         

tsc=int(raw_input())
if __name__=='__main__':
    while(tsc):
        st=raw_input()
        if len(st)%2 !=0: #if leng is odd
            sl=st[:len(st)/2]
            sr=st[len(st)/2 +1:]
            print count_min_step(sl,sr)
        else:
            sl=st[:len(st)/2]
            sr=st[len(st)/2:]
            print count_min_step(sl,sr)

        tsc -=1
