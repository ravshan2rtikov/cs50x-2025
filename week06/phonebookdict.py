people = {"yuliia": "617-495-1000", "david": "617-495-1000", "john": "949-468-2750"}

name = input("Name: ")

if name in people:
    print(f"Number: {people[name]}")
else:
    print("not found")

