time=raw_input().split(':')
m=time[2][-2:]
time[2]=time[2][:-2]
if m=="AM":
    print time[0]+":"+time[1]+':'+time[2]
else:
    print str(int(time[0])+12)+":"+time[1]+':'+time[2]
