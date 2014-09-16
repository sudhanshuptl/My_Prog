while True: #infinite LOOP
    inp=raw_input() # Taking Input As String
    if inp=='-1': #Condition To break Out From LOOP
        break
    if inp[-1] in '02468': #cheking Last digit of input to check Even or ODD
        print 'EVEN'
    else:
        print 'ODD'
