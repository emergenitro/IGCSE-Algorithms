arr = ["hello", "zebra", "cat", "cow", "donkey"]
searchFor = "cat"

for i in range(len(arr)):
    if arr[i] == searchFor:
        print("Found at index", i)
        break