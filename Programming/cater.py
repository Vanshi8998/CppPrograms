dir_chars = {
    'N': '|',
    'S': '|',
    'E': '-',
    'W': '-',
    'SE': '\\',
    'NW': '\\',
    'SW': '/',
    'NE': '/',
    'x': 'x'
}
 
dirs = {
    'N': (0, -1),
    'S': (0, 1),
    'E': (1, 0),
    'W': (-1, 0),
    'SE': (1, 1),
    'NW': (-1, -1),
    'SW': (-1, 1),
    'NE': (1, -1),
    'x': (0, 0)
}
 
 
def make_move(x, y, prev_dir, direction):
    p = dirs[prev_dir]
    q = dirs[direction]
 
    if abs(p[0] - q[0]) == 2:
        y += p[1]
        x += p[0]
    elif abs(p[0] - q[0]) == 1 and abs(p[1] - q[1]) == 0 and prev_dir != 'x':
        x -= q[0]
 
    if abs(p[1] - q[1]) == 2:
        x += p[0]
        y += p[1]
    elif abs(p[0] - q[0]) == 0 and abs(p[1] - q[1]) == 1 and prev_dir != 'x':
        y -= q[1]
    
 
    if direction == 'S':
        y += 1
    elif direction == 'N':
        y -= 1
    elif direction == 'E':
        x += 1
    elif direction == 'W':
        x -= 1
    elif direction == 'SW':
        x -= 1
        y += 1
    elif direction == 'NW':
        x -= 1
        y -= 1
    elif direction == 'SE':
        x += 1
        y += 1
    elif direction == 'NE':
        x += 1
        y -= 1
    
    return x, y
 
 
def caterpillar(moves):
    pos = []
    x, y, max_x, max_y = 0, 0, 0, 0
    prev_move = 'x'
 
    for ptr, (times, direction) in enumerate(moves[:-1]):
        for i in range(times):
            if ptr == 0:
                pos.append((y, x, direction))
            if (ptr == 0 and i < times - 1) or ptr > 0:
                x, y = make_move(x, y, prev_move, direction)
            if ptr > 0:
                pos.append((y, x, direction))
            max_x = max(x, max_x)
            max_y = max(y, max_y)
            prev_move = direction
 
    x, y = make_move(x, y, prev_move, direction)
    max_x, max_y = max(x, max_x), max(y, max_y)
    pos.append((y, x, 'x'))
    pos.sort()
 
    ptr = 0
    for i in range(max_y + 1):
        print('| ', end='')
        for j in range(max_x * 2):
            if ptr < len(pos) and len(pos[ptr]) > 1 and i == pos[ptr][0] and j == pos[ptr][1]:
                print(dir_chars[pos[ptr][2]], end='')
                ptr += 1
            elif ptr < len(pos) and len(pos[ptr]) == 1 and pos[ptr] == 'x':
                print('x')
            else:
                print(' ', end='')
        print('|')
 
 
line = ''
moves = []
while line != 'x':
    line = input()
    line = line.split(' ')
    if len(line) > 1:
        line[0] = int(line[0])
    else:
        line = line[0]
    moves.append(line)
 
caterpillar(moves)
