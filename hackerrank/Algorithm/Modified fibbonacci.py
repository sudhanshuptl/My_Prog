inp=[int(x) for x in raw_input().split(' ')]
n=inp.pop()
i=2
while(i<n):
    temp=(inp[i-1]*inp[i-1])+inp[i-2]
    inp.append(temp)
    i +=1

print inp[-1]
        
