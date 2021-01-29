def pan(n1,n2,n3):
    tmp=str(n1)+str(n2)+str(n3)
    if len(list(tmp)) != len(set(tmp)) or '0' in list(tmp):
        return False
    else:
        return True
from time import time
start=time()
for i in range(123,333):
    if pan(int(i),2*int(i),3*int(i)):
        print(str(int(i))+" "+str(2*int(i))+" "+str(3*int(i)))
print(time()-start)
