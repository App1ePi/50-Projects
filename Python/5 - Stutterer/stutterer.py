word = input("Enter the word: ")

firstLetters = word[:2]

def repeater(firstLetters, word):
    print(f"{firstLetters}..{firstLetters}..{word}")

repeater(firstLetters, word)