

s1="abnv"
s2="vabn"
c={}
d={}

for i in s1:
    try:
        c[i]=c[i]+1
    except:
        c[i]=1
for i in s2:
    try:
        d[i]=d[i]+1
    except:
        d[i]=1
if c==d:
    print("anagram")
else:
    print("no")
