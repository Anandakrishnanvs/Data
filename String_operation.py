current=""
stack =[]
str = input("enter the string: ")
commands =  str.split(",")
for cmd in commands:
    cmd = cmd.strip()
    if cmd.startswith("Add"):
        text=cmd[4:]
        stack.append(current)
        current += text
    elif cmd.startswith("Delete"):
        k=int(cmd[7:])
        stack.append(current)
        if k<=len(current):
            current = current[:-k]
        else:
            current=""
    elif cmd.startswith("Undo"):
        current=stack.pop()

print(current)
