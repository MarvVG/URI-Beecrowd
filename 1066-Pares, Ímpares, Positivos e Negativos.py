value = []
cont = 0
cont_par = 0
cont_impar = 0
cont_pos = 0
cont_neg = 0
for i in range(5):
    value.append(int(input())) 
for i in range(5):
    value[cont]
    if value[cont] > 0:
        cont_pos +=1 
    elif value[cont] < 0:
        cont_neg +=1
    if value[cont] % 2 == 0:
        cont_par +=1
    else:
        cont_impar +=1
    cont += 1    
print(f'{cont_par} valor(es) par(es)')
print(f'{cont_impar} valor(es) impar(es)')    
print(f'{cont_pos} valor(es) positivo(s)')    
print(f'{cont_neg} valor(es) negativo(s)')    
