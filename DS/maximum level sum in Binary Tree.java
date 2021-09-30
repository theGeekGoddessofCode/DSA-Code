// A queue based Java program to find maximum
// sum of a level in Binary Tree
import java.util.LinkedList;
import java.util.Queue;

class GFG{

// A binary tree node has data, pointer
// to left child and a pointer to right
// child
static class Node
{
	int data;
	Node left, right;

	public Node(int data)
	{
		this.data = data;
		this.left = this.right = null;
	}
};

// Function to find the maximum
// sum of a level in tree
// using level order traversal
static int maxLevelSum(Node root)
{
	
	// Base case
	if (root == null)
		return 0;

	// Initialize result
	int result = root.data;

	// Do Level order traversal keeping
	// track of number of nodes at every
	// level.
	Queue<Node> q = new LinkedList<>();
	q.add(root);
	while (!q.isEmpty())
	{
		
		// Get the size of queue when the
		// level order traversal for one
		// level finishes
		int count = q.size();

		// Iterate for all the nodes
		// in the queue currently
		int sum = 0;
		while (count-- > 0)
		{
			
			// Dequeue an node from queue
			Node temp = q.poll();

			// Add this node's value
			// to current sum.
			sum = sum + temp.data;

			// Enqueue left and right children
			// of dequeued node
			if (temp.left != null)
				q.add(temp.left);
			if (temp.right != null)
				q.add(temp.right);
		}

		// Update the maximum node
		// count value
		result = Math.max(sum, result);
	}
	return result;
}

// Driver code
public static void main(String[] args)
{
	Node root = new Node(1);
	root.left = new Node(2);
	root.right = new Node(3);
	root.left.left = new Node(4);
	root.left.right = new Node(5);
	root.right.right = new Node(8);
	root.right.right.left = new Node(6);
	root.right.right.right = new Node(7);
	
	/* Constructed Binary tree is:
				1
			/ \
			2	 3
		/ \	 \
		4 5	 8
					/ \
				6	 7 */
	System.out.println("Maximum level sum is " +
						maxLevelSum(root));
}
}

// This code is contributed by sanjeev2552
