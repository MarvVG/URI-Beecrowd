N = []
for i in range(100):
    N.append(float(input()))
for i in range(100):
        if N[i] <=10:
            print(f'A[{i}] = ''%.1f' % N[i])
