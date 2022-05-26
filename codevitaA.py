#code by Aayush
_=int(input())
l=list(map(int,input().split(" ")))
er=0
rr=0
if er==0 and rr==0:
    er+=l[0]
    rr+=l[len(l)-1]
    l.remove(er)
    l.remove(rr)
while (len(l)!=0):
    a=l[0]
    b=l[len(l)-1]
    if len(l)==0: break
    if er+a>0:
        er+=a
        l.remove(a)
    else:
        l.remove(a)
        l.append(a)
    if len(l)==0: break
    if rr+b>0:
        rr+=b
        l.remove(b)
    else:
        l.remove(b)
        l.append(b)
print((max(er,rr)-min(er,rr)))