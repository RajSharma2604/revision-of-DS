def reverse_string(s):
    # Convert string to a list to allow modifications
    str_list = list(s)
    # Initialize pointers
    left, right = 0, len(str_list) - 1
    
    # Swap characters while left is less than right
    while left < right:
        # Swap characters
        str_list[left], str_list[right] = str_list[right], str_list[left]
        # Move pointers
        left += 1
        right -= 1
    
    # Convert list back to string
    return ''.join(str_list)

# Example usage
input_string = "Hello, World!"
reversed_string = reverse_string(input_string)
print("Original string:", input_string)
print("Reversed string:", reversed_string)
