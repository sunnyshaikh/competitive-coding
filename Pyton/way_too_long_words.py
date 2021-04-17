size = int(input())

while size != 0:
    stri = str(input())
    str_len = len(stri)-2
    if len(stri) > 10:
        print(f"{stri[0]}{str_len}{stri[-1]}")
    else:
        print(stri)
    size -= 1