import copy
import random

# define goal state
goal_state = [[1, 2, 3], [8, 0, 4], [7, 6, 5]]

# define initial state
initial_state = [[2, 8, 3], [1, 5, 4], [7, 6, 0]]

# define a function to find the location of the blank tile (0)


def find_blank(state):
    for i in range(3):
        for j in range(3):
            if state[i][j] == 0:
                return i, j

# define a function to calculate the heuristic value


def calculate_heuristic(state):
    heuristic = 0
    for i in range(3):
        for j in range(3):
            if state[i][j] != goal_state[i][j]:
                heuristic += 1
    return heuristic

# define a function to generate a new state


def generate_new_state(state):
    new_state = copy.deepcopy(state)
    i, j = find_blank(new_state)
    moves = []
    if i > 0:
        moves.append((i-1, j))
    if i < 2:
        moves.append((i+1, j))
    if j > 0:
        moves.append((i, j-1))
    if j < 2:
        moves.append((i, j+1))
    move = random.choice(moves)
    new_i, new_j = move
    new_state[i][j], new_state[new_i][new_j] = new_state[new_i][new_j], new_state[i][j]
    return new_state

# define the hill climbing algorithm


def hill_climbing(initial_state):
    current_state = initial_state
    current_heuristic = calculate_heuristic(current_state)
    while True:
        neighbors = []
        for i in range(100):
            new_state = generate_new_state(current_state)
            neighbors.append((new_state, calculate_heuristic(new_state)))
        best_neighbor = min(neighbors, key=lambda x: x[1])
        if best_neighbor[1] >= current_heuristic:
            return current_state
        current_state = best_neighbor[0]
        current_heuristic = best_neighbor[1]


# run the algorithm on the initial state
final_state = hill_climbing(initial_state)

# print the final state
for row in final_state:
    print(row)
