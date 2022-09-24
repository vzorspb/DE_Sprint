#! /usr/local/bin/python3.8

# Задание к модулю 1.3
# Дана строка X, возвращайте True, если X является палиндромом. 

def check_papindrom (string):
    string=string.replace(" ","")
    if string==''.join(reversed(string)):
        return True
    else:
        return False
X="taco cat"
print (X, ":",  check_papindrom(X))

X="rotator"
print (X, ":",  check_papindrom(X))

X="black cat"
print (X, ":",  check_papindrom(X))