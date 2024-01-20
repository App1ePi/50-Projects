year = input("Enter Yeaar: ")
if int(year) % 4 == 0 or int(year) == 0:
    print(f"{year} is a leap year.")

else:
    print(f"{year} is not a leap year.")
