'''
Write a procedure called oddTuples, which takes a tuple as input, and returns a new tuple as output,
where every other element of the input tuple is copied, starting
with the first one. So if test is the tuple ('I', 'am', 'a', 'test', 'tuple'),
then evaluating oddTuples on this input would return the tuple ('I', 'a', 'tuple').

'''
# Key : How To add new element in tuple as tuple are Immutable
# Basic Algo

def oddTuples(aTup):
    '''
    aTup: a tuple
    
    returns: tuple, every other element of aTup. 
    '''
    temp=()
    for i in range(0,len(aTup),2):
        temp=temp+(aTup[i],) #add desired value to temprary tupule
                             # i.e concatenate tuple

    return temp
        
if __name__=='__main__':
    x=('I', 'am', 'a', 'test', 'tuple')
    print oddTuples(x)
