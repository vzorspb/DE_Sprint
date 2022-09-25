#! /usr/local/bin/python3.8

# проверка скобок


def check_str (string):
    count=1
    while count>0:
        count=len(string)
        string=string.replace("{}","")
        string=string.replace("[]","")
        string=string.replace("()","")
        count-=len(string)
    return string==""
   
print("[{}({})]",":",check_str("[{}({})]"))
print("{]",":",check_str("{]"))
print("{",":",check_str("{"))