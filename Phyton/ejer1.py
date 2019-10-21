num1 = 0
num2 = 0;
conteoInpares = 0

print("ingresa un rango de numeros, se calculara la suma de los numeros inpares dentro de este rango")
num1 = int(input("ingresa el valor de inicio del rango"))
num2 = int(input("ingresa el valor final del rango"))

for i in range(num1, num2 + 1):
    if i % 2 != 0:
        conteoInpares = conteoInpares + i
    
print("la suma de los numeros inpares del rango [" + str(num1) + "," + str(num2) + " ] es: " + str(conteoInpares))