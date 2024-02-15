# Python3 program to find second
# largest element in an array

# Function to print the
# second largest elements


def print2largest(arr, arr_size):

	# Sort the array in descending order
	arr.sort(reverse=True)

	# Start from second last element as first
	# element is the largest
	for i in range(1, arr_size):

		# If the element is not
		# equal to largest element
		if (arr[i] != arr[0]):
			print("The second largest element is", arr[i])
			return

	print("There is no second largest element")


# Driver code
arr = [12, 35, 1, 10, 34, 1]
n = len(arr)
print2largest(arr, n)

# This code is contributed by divyeshrabadiya07
