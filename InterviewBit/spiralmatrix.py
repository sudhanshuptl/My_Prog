class Solution:
    # @param A : tuple of list of integers
    # @return a list of integers
    def spiralOrder(self, A):
        result = []
        T=0
        B=len(A)-1
        L=0
        R=len(A[0])-1
        dirc=0
        while(T<=B and L<=R):
            if(dirc ==0):
                for i in range(L,R+1):
                    result.append(A[T][i])
                T +=1
                dirc=1
            elif(dirc==1):
                for i in range(T,B+1):
                    result.append(A[i][R])
                R -=1
                dirc=2
            elif(dirc==2):
                for i in range(R,L-1,-1):
                    result.append(A[B][i])
                B -=1
                dirc=3
            elif(dirc==3):
                for i in range(B,T-1,-1):
                    result.append(A[i][L])
                L +=1
                dirc=0
        
        return result