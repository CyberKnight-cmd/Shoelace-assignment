def main():
    X = int(input("Enter a number: "))
    Y = 0

    match X:
        case 6:
            Y = X + 10
        case 7:
            Y = X * X
        case 12:
            Y = 2 * X + 4
        case _:
            Y = X * 6 - 1

    print("Y =", Y)

if __name__ == "__main__":
    main()
