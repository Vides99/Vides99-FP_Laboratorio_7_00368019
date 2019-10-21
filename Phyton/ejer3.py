print("introduce un numero para saber si es primo")
num = int(input("ingresa el numero"))
numAmultiplicar = 1
for i in range(1,num):
    numAmultiplicar = numAmultiplicar * i
numAmultiplicar = numAmultiplicar + 1;
if numAmultiplicar % num == 0:
    print("el numero que has ingresado es primo")
else:
    print("el numero que ingresaste no es primo")