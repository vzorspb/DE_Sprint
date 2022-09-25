#! /usr/local/bin/python3.8

# Задание к модулю 1.3
# Преобразование римский цифр в арабские

def Roman(number):
    num = [1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000]
    sym = ["I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"]
    i = len(num)-1
    roman_str=str()  
    while number:
        div = number // num[i]
        number %= num[i]
        while div:
            roman_str +=sym[i]
            div -= 1
        i -= 1
    return roman_str

for i in range(1,16):
   print(i,":",Roman(i))
