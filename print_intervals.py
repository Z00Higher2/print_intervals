#this program pirnts out the range from the first number before the last number

interval_1 = int(input("Enter the First interval: "))
interval_2 = int(input("Enter the Last interval: "))

for i in range(interval_1, interval_2):
    print(i, end=" ")