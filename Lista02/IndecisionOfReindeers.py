reindeers = ['Dasher', 'Dancer', 'Prancer', 'Vixen', 'Comet', 'Cupid', 'Donner', 'Blitzen', 'Rudolph']
snowballs = list(map(int, input().split()))
winner = reindeers[(sum(snowballs) % 9) - 1] 
print(winner)
