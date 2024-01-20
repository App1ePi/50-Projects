ChessboardSquares = 64
userSquares = input("Which square would you like to know the value of?: ")
if 0 > int(userSquares) > 64:
    raise ValueError("Invalid Square Selection. Must be between 1 and 64")

grain = 1
runningTotal = 0
Subgrain = 1
for x in range(1, int(userSquares) + 1):
    grain = grain * 2

for y in range(1, int(ChessboardSquares) + 1):
    Subgrain = Subgrain * 2
    runningTotal = runningTotal + Subgrain



print(f"On Square {x} there is {grain} Grain")
print(f"In total there is {runningTotal} Grain on the board")
