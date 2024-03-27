from queue import PriorityQueue


class PuzzleNode:
    def __init__(self, puzzle_state, parent=None):
        self.puzzle_state = puzzle_state
        self.parent = parent
        self.move_cost = 0
        self.heuristic_cost = self.calculate_heuristic_cost()

    def calculate_heuristic_cost(self):
        total_distance = 0
        for i in range(3):
            for j in range(3):
                value = self.puzzle_state[i][j]
                if value != 0:
                    target_row = (value - 1) // 3
                    target_col = (value - 1) % 3
                    distance = abs(target_row - i) + abs(target_col - j)
                    total_distance += distance
        return total_distance

    def __lt__(self, other):
        return self.move_cost + self.heuristic_cost < other.move_cost + other.heuristic_cost

    def get_children(self):
        children = []
        zero_row, zero_col = self.get_zero_location()
        for row, col in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            new_row, new_col = zero_row + row, zero_col + col
            if 0 <= new_row < 3 and 0 <= new_col < 3:
                new_state = [list(row) for row in self.puzzle_state]
                new_state[zero_row][zero_col], new_state[new_row][new_col] = new_state[new_row][new_col], new_state[zero_row][zero_col]
                child = PuzzleNode(new_state, self)
                child.move_cost = self.move_cost + 1
                children.append(child)
        return children

    def get_zero_location(self):

        for i in range(3):
            for j in range(3):
                if self.puzzle_state[i][j] == 0:
                    return i, j

    def get_path(self):

        moves = []
        node = self
        while node.parent:
            moves.append(node)
            node = node.parent
        moves.reverse()
        return moves


def solve_puzzle(initial_state):
    start_node = PuzzleNode(initial_state)
    frontier = PriorityQueue()
    frontier.put(start_node)
    visited = set()

    while not frontier.empty():
        node = frontier.get()
        if node.puzzle_state == goal_state:
            return node.get_path()
        visited.add(tuple(map(tuple, node.puzzle_state)))
        for child in node.get_children():
            if tuple(map(tuple, child.puzzle_state)) not in visited:
                frontier.put(child)
    return None


# example usage:
initial_state = [[2, 0, 3], [1, 8, 4], [7, 6, 5]]
goal_state = [[1, 2, 3], [8, 0, 4], [7, 6, 5]]
solution = solve_puzzle(initial_state)
if solution is not None:
    for node in solution:
        print(node.puzzle_state)
        print()
else:
    print("No solution found.")
