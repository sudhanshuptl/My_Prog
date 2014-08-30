# https://www.hackerrank.com/challenges/halloween-party
#sudhanshu Patel
if __name__=='__main__':
    tc=int(raw_input())
    while(tc):
        k=int(raw_input())
        k_half=k/2
        if k%2 !=0:
            print k_half*(k-k_half) #max piece
        else:
            print k_half*k_half

        tc -=1
