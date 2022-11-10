"""
- has_path: takes a dictionary representing the adj. list of a graph
    - param: (starting_node, destination)
return True/False
"""


# -- BFS ITERATIVE -- #
def has_path_BFS_iterative(graph, starting_node, destination):
    if starting_node == destination: return True # edge

    queue = [starting_node]

    while len(queue) > 0:
        curr_node = queue.pop(0)

        if curr_node == destination:
            return True

        for neighbor in graph[curr_node]:
            queue.append(neighbor)

    return False


graph = {
    1: [2, 3],
    2: [4],
    3: [5, 6],
    4: [],
    5: [],
    6: [],
    7: [8, 9, 10],
    8: [],
    9: [6],
    10: [],
}

print(has_path_BFS_iterative(graph, 7, 6))

print("------------------------------------")

# -- DFS ITERATIVE -- #
def has_path_DFS_iterative(graph, starting_node, destination):
    if starting_node == destination: return True

    stack = [starting_node]

    while len(stack) > 0:
        curr_node = stack.pop()

        if curr_node == destination: return True

        for neighbor in graph[curr_node]:
            stack.append(neighbor)
    return False


print(has_path_DFS_iterative(graph, 7, 6))
