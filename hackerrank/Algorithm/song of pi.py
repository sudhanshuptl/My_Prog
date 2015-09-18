if __name__=='__main__':
    a='31415926535897932384626433833'
    t=int(raw_input())
    while(t):
        st=raw_input().split(' ')
        flag=True
        for i in range(len(st)):
            if(len(st[i]) !=int(a[i])):
                #print len(st[i]) +"  ",a[i]
                flag=False
                break
        if(flag):
            print '''It's a pi song.'''
        else:
            print '''It's not a pi song.'''
        t=t-1
