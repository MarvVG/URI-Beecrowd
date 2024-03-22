n = int(input())
cont = 0
for i in range(0,n):
    valores = input()
    for s in range(0,len(valores)):
        if valores[s] == '1':
             cont +=2
        if valores[s] == '2':
             cont +=5
        if valores[s] == '3':
             cont +=5   
        if valores[s] == '4':
             cont +=4
        if valores[s] == '5':
             cont +=5
        if valores[s] == '6':
             cont +=6
        if valores[s] == '7':
             cont +=3
        if valores[s] == '8':
             cont +=7
        if valores[s] == '9':
            cont +=6
        if valores[s] == '0':
            cont +=6  
    print(f'{cont} leds') 
    cont = 0
