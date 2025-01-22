def main():
    X, Y, Z = map(int, input("Enter three numbers (X, Y, Z): ").split())

    match X:
        case 0:
            print(Y + Z)
        case 1:
            print(Y - Z)
        case 2:
            print(Y * Z)
        case 3:
            if Z != 0:
                print(Y // Z)  # Integer division like in C
            else:
                print("Division by zero is not allowed.")
        case _:
            pass  # Do nothing for default case

if __name__ == "__main__":
    main()