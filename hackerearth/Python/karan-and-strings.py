# Sudhanshu Patel
# http://www.hackerearth.com/problem/algorithm/karan-and-strings/

tc=int(raw_input())
while tc:
    st=raw_input()
    ch=''
    ls=[]
    for c in st:
        if ch!=c:
            ch=c
            ls.append(ch)
    print ''.join(ls)
    tc -=1
