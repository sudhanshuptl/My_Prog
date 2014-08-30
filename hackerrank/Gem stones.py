# https://www.hackerrank.com/challenges/gem-stones
__auther__='Sudhanshu Patel(Sudhanshuptl13@gmail.com'
tstc=int(raw_input())
if __name__=='__main__':
    ls=[]

    while(tstc):
        ls.append(raw_input())
        tstc -=1

    res=[]
    for i in range(len(ls[0])):
        if ls[0][i] not in res:
            res.append(ls[0][i])
    #print res        
    l=len(res)
    for i in range(1,len(ls)):
        #print ls[i]
        j=0
        while(j<len(res)):
            if res[j] not in ls[i]:
                res.remove(res[j])
                #print res
            else:
                j +=1
            

    print len(res)#,res
                       
