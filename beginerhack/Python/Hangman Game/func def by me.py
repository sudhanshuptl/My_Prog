def isWordGuessed(secretWord, lettersGuessed):
    '''
    secretWord: string, the word the user is guessing
    lettersGuessed: list, what letters have been guessed so far
    returns: boolean, True if all the letters of secretWord are in lettersGuessed;
      False otherwise
    '''
    for ch in secretWord:
        if ch not in lettersGuessed:
            return False
                
    return True

def getGuessedWord(secretWord, lettersGuessed):
    '''
    secretWord: string, the word the user is guessing
    lettersGuessed: list, what letters have been guessed so far
    returns: string, comprised of letters and underscores that represents
      what letters in secretWord have been guessed so far.
    '''
    guess=''
    for ch in secretWord:
        if ch not in lettersGuessed:
            guess=guess+'_'
        else:
            guess=guess+ch
            
    return guess

def getAvailableLetters(lettersGuessed):
    '''
    lettersGuessed: list, what letters have been guessed so far
    returns: string, comprised of letters that represents what letters have not
      yet been guessed.
    '''
    temp=string.ascii_lowercase # all lowercase letters
    res='' #letters not in lettersGuessed i.e available
    for ch in temp:
        if ch not in lettersGuessed:
            res=res+ch
            
    return res
