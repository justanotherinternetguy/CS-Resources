# -- ITERATIVE -- #
"""
- stack + starting node
- while stack is not empty, remove last node of stack
- insert all neighbors of node into queue
"""

def DFS_iterative(graph, starting_node):
    stack = [starting_node]
    while len(stack) > 0:
        curr_node = stack.pop()
        print(curr_node)

        for neighbor in graph[curr_node]:
            stack.append(neighbor)


graph = {
    1: [2, 3],
    2: [4],
    3: [5, 6],
    4: [],
    5: [],
    6: [],
}

DFS_iterative(graph, 1)

print("-----------------------------------------")


# -- RECURSIVE -- #
"""
- recursive function that takes in graph and starting_node
- craete base cases
- traverse all neighboring nodes and call the recursive function with the index of the neighboring node.
"""

def DFS_recursive(graph, starting_node):
    print(starting_node)

    for neighbor in graph[starting_node]:
        DFS_recursive(graph, neighbor)

DFS_recursive(graph, 1)
