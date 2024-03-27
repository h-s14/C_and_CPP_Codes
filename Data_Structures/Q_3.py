import heapq
import numpy as np


class PuzzleState:
    def __init__(self, state, g=0, parent=None):
        self.state = state
        self.g = g
        self.h = self.calculate_heuristic()
        self.parent = parent

    def calculate_heuristic(self):
        """Calculate the heuristic value of the current state."""
        distance = 0
        for i in range(3):
            for j in range(3):
                tile = self.state[i][j]
                if tile != 0:
                    goal_i, goal_j = divmod(tile - 1, 3)
                    distance += abs(i - goal_i) + abs(j - goal_j)
        return distance

    def __lt__(self, other):
        """Overload the < operator to compare PuzzleState objects based on their f values."""
        return self.g + self.h < other.g + other.h

    def __eq__(self, other):
        """Overload the == operator to compare PuzzleState objects based on their state."""
        return np.array_equal(self.state, other.state)

    def get_children(self):
        """Generate all possible child states by moving the blank tile."""
        children = []
        i, j = np.argwhere(self.state == 0)[0]
        for move_i, move_j, move_name in [(0, 1, 'DOWN'), (1, 0, 'RIGHT'), (0, -1, 'UP'), (-1, 0, 'LEFT')]:
            next_i, next_j = i + move_i, j + move_j
            if 0 <= next_i < 3 and 0 <= next_j < 3:
                child_state = self.state.copy()
                child_state[i][j], child_state[next_i][next_j] = child_state[next_i][next_j], child_state[i][j]
                child = PuzzleState(child_state, g=self.g+1, parent=self)
                children.append((child, move_name))
        return children

    def get_path(self):
        """Return the path from the initial state to the current state."""
        path = []
        current = self
        while current is not None:
            path.append((current.state, current.g))
            current = current.parent
        path.reverse()
        return path

    def __repr__(self):
        """Overload the __repr__ function to print the current state."""
        return str(self.state)


def astar(initial_state):
    """Find a path from the initial state to the goal state using A* search."""
    initial_node = PuzzleState(initial_state)
    frontier = [initial_node]
    explored = set()
    num_expansions = 0

    while frontier:
        current = heapq.heappop(frontier)
        num_expansions += 1

        if np.array_equal(current.state, goal_state):
            return current.get_path(), num_expansions

        explored.add(current)

        for child, move_name in current.get_children():
            if child in explored:
                continue
            if child not in frontier:
                heapq.heappush(frontier, child)
            else:
                index = frontier.index(child)
                if frontier[index].g > child.g:
                    frontier[index] = child
                    heapq.heapify(frontier)

    return None, num_expansions


initial_state = np.array([[1, 2, 0], [4, 5, 3], [7, 8, 6]])
goal_state = np.array
