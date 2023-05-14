arr = [4, 532, 12, 3241, 2, 10]

# Method 1
for i in range(len(arr) - 1):
    for j in range(len(arr) - 1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]

print(arr)


arr = [4, 532, 12, 3241, 2, 10]

# Method 2
check = False
end = len(arr) - 1
while not check and end > 0:
    check = True
    end -= 1
    for i in range(len(arr) - 1):
        if arr[i] > arr[i+1]:
            check = False
            arr[i], arr[i+1] = arr[i+1], arr[i]

print(arr)