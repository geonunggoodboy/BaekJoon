while True:
    n = int(input())
    if n == -1:
        break
    divisor = [1]
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            divisor.append(i)
            if i != n // i:
                divisor.append(n // i)
    divisor.sort()
    if sum(divisor) == n:
        print(f"{n} = ", end="")
        for i in range(len(divisor)):
            print(divisor[i], end="")
            if i != len(divisor)-1:
                print(" + ", end="")
        print()
    else:
        print(f"{n} is NOT perfect.")
