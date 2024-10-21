# Trees
## Terminologies used in trees:

    Root: The topmost node of a tree is called the root. There is no edge pointing to it, but one or more than one edge originating from it. Here, A is the root node.
    
    Parent: Any node which connects to the child. Node which has an edge pointing to some other node. Here, C is the parent of H.
    
    Child: Any node which is connected to a parent node. Node which has an edge pointing to it from some other node. Here, H is the child of C.
    
    Siblings: Nodes belonging to the same parent are called siblings of each other. Nodes B, C and D are siblings of each other, since they have the same parent node A.
    
    Ancestors: Nodes accessible by following up the edges from a child node upwards are called the ancestors of that node. Ancestors are also the parents of the parents of …… that node. Here, nodes A, C and H are the ancestors of node I.

    Descendants: Nodes accessible by following up the edges from a parent node downwards are called the descendants of that node. Descendants are also the child of the child of …… that node. Here, nodes H and I are the descendants of node C.

    Leaf/ External Node: Nodes which have no edge originating from it, and have no child attached to it. These nodes cannot be a parent. Here, nodes E, F, G and I are leaf nodes.
    
    Internal node: Nodes with at least one child. Here, nodes B, D and C are internal nodes.
    
    Depth: Depth of a node is the number of edges from root to that node. Here, the depth of nodes A, C, H and I are 0, 1, 2 and 3 respectively.

    Height: Height of a node is the number of edges from that node to the deepest leaf. Here, the height of node A is 3, since the deepest leaf from this node is node I. And similarly, height of node C is 2.

## Binary Tree

    
    A tree is made up of nodes and edges.
    
    The topmost node is called the Any node which points to another node, is the parent of that node and the node which the parent is pointing at is the child of that parent node. And nodes having the same parents are called siblings of each other.
    
    Nodes having zero children are the leaf nodes or the external nodes, and nodes having at least one child are the internal nodes.
    
    Ancestors of a node are the nodes accessible by traversing upwards along the edges. They are either the parents or the parents of the parents.
    
    Descendants of a node are the nodes accessible by traversing downwards along the edges. They are either the children or the children of the children.
    
    Height of a node is the number of edges in between the deepest leaf and that node. And depth of a node is the number of edges between the root and that node.
