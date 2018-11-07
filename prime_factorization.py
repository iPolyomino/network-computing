# coding: utf-8
import math


def main():
    n = int(input())
    factorization(n)


def factorization(n):
    factor = []
    for i in range(2, int(math.sqrt(n)+1)):
        while n % i == 0:
            factor.append(i)
            n = int(n / i)
    if n != 1:
        factor.append(n)
    print_numbers(factor)


def print_numbers(numbers):
    print(", ".join(str(i) for i in numbers))


if __name__ == "__main__":
    main()
