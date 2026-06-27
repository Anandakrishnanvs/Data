def Roman_to_integer(s):
    Roman = {
        'I' : 1 ,
        'M'  : 1000,
        'X'  : 10,
         'V' : 5 ,
         'C' : 100,
         'L' : 50,
         'D' : 500,
    }
    total=0
    for i in range(len(s)-1):
        if Roman[s[i]] < Roman[s[i+1]]:
            total -= Roman[s[i]]
        else:
            total += Roman[s[i]]
    total += Roman[s[-1]]
    print(f"Integer : {total}")
Roman_to_integer("MCMXIV")
