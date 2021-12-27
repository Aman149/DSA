//https://www.youtube.com/watch?v=jma9hFQSCDk&ab_channel=KeepOnCoding

Node *findInorderSuccessor(Node inputNode) {

    if(inputNode == NULL) 
        return NULL;
    
    // Left 
    if (inputNode.right != NULL)
        return getMostLeft(inputNode.right);

    Node child = inputNode;
    Node parent = inputNode.parent;

    //Right
    while(parent.right == child) {
        if(parent.parent == NULL)
            return null;
        child = parent;
        parent = parent.parent;
    }
    return parent;

}

Node *getMostLeft(Node x) { //12

    if(x.left != NULL) //left exists
        return x;          
    else
        return getMostLeft(x.left); // 11
}