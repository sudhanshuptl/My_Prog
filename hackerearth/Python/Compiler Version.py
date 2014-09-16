# http://www.hackerearth.com/problem/algorithm/compiler-version-2/
# Compiler Version

while True:
    try:
        s = raw_input()
    except:
        break
    a = "->"
    b = "."

    temp = s.find("//")
    if ( temp == -1 ):
        print s.replace(a,b)
    else:
        print s[:temp].replace(a,b) + s[temp:]
