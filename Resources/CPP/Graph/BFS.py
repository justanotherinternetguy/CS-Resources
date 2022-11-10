def BFS(graph, starting_node):
    queue = [starting_node]
    
    while len(queue) > 0:
        curr_node = queue.pop(0)
        print(curr_node)
        
        for neighbor in graph[curr_node]:
            queue.append(neighbor)

graph = {
    1: [2, 3],
    2: [4],
    3: [5, 6],
    4: [],
    5: [],
    6: [],
}

BFS(graph, 1)
