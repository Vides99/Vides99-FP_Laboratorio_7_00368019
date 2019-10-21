numA = 0
numB = 0
numeroDeCasos = 0
numeroDeCasos = int(input("ingresa cuantos casos quieres comparar"))
for i in range(1, numeroDeCasos + 1):
    print("caso " + str(i))
    numA = int(input("ingresa el primer valor"))
    numB = int(input("ingresa el segundo valor"))
    if numA > numB:
        print(str(numA) + " > " + str(numB))
    elif numA < numB:
        print(str(numA) + " < " + str(numB))
    else:
        print(str(numA) + " = " + str(numB))