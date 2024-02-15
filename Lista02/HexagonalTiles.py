while True:
	num_tiles = int(input())
	tiles = [1,2]
	if num_tiles == 0:
		break
	if num_tiles < 3:
		print(num_tiles)
	else:
		for i in range(2, num_tiles):
			tiles.append(tiles[i - 1] + tiles[i - 2])
		print(tiles[num_tiles - 1])
