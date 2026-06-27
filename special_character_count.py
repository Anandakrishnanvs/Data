lower =[0]*26
upper =[0]*26
count =0

strr = input("enter the string : ")
length = len(strr)
for ch in strr:
    if('a' <= ch and ch <= 'z'):
        lower[ord(ch) - ord('a')]=1
    elif('A'<= ch  and ch<='Z'):
        upper[ord(ch) -ord('A')]=1
for i in range(26):
    if lower[i] and upper[i]:
        count += 1

print(count)
