

/**
 * 
 * @author ASHUTOSH
 *
 */

public class LinkedList {
	
	Node HEAD;

	public class Node {
		Node link;
		int info;
		
		Node(){}
		
		Node(int info){
			this.link = null;
			this.info = info;
		}
	}
	
	
	/*
	 * Create linkded list - static
	 */
	public Node createLinkedList(){

		
		Node node1 = new Node();		
		this.HEAD = node1;
		node1.info = 6;
		
		Node node2 = new Node();
		node1.link = node2;
		node2.info = 11;
		
		Node node3 = new Node();
		node2.link = node3;
		node3.info = 3;
		
		Node node4 = new Node();
		node3.link = node4;
		node4.info = 15;
		
		Node node5 = new Node();
		node4.link = node5;
		node5.info = 7;
		
		node5.link = null;
		
		return this.HEAD;
	}
	
	
	/*
	 * Create linked list - dynamic
	 */
	public void pushNode(int info){
		Node newNode = new Node(info);
		newNode.link = this.HEAD;
		this.HEAD = newNode;
	}
	
	
	/*
	 * Traverse linked list
	 */
	public void traverseNode(Node PTR){
		while(PTR != null){
			System.out.println(PTR.info);
			PTR = PTR.link;
		}
	}
	
	/*
	 * Write a function to get Nth node in a Linked List
	 */
	public Node getNthNode(Node HEAD, int n){
		
		Node PTR = null;
		
		if(HEAD != null){
			PTR = HEAD;
			while(PTR != null){
				if(n==1)
					return PTR;
				else{
					PTR = PTR.link;
					--n;
				}
			}
		}
		return null;
	}
	
	
	/*
	 * Given only a pointer/reference to a node to be deleted in a singly linked list, how do you delete it?
	 */
	/*
	public void deleteNode(Node PTR){
		if(PTR.link != null){
			PTR.info = PTR.link.info;
			PTR.link = PTR.link.link;
			System.out.println("Node delete successfully");
		}
	}
	*/
	
	public void deleteNode(Node PTR){
		if(PTR != null){
			if(PTR.link != null){
				PTR.info = PTR.link.info;
				PTR.link = PTR.link.link;
			}
			else{
				Node PTR2 = this.HEAD;
				if(PTR2 != null){
					if(PTR2.link == null){
						this.HEAD = null;
					}
					else{
						while(PTR2.link.link != null){
							PTR2 = PTR2.link;
						}
						if(PTR2.link == PTR){
							PTR2.link = null;
						}
					}
				}
			}
		}
	}
	
	/*
	 * Find the middle of a given linked list
	 */
	public Node getMiddleNode(){
		Node PTR1 = null;
		
		if(this.HEAD != null){
			PTR1 = this.HEAD;
			if(this.HEAD.link != null){
				
				Node PTR2 = this.HEAD.link;
			
				while(PTR2 != null){
					PTR1 = PTR1.link;
					if(PTR2.link != null){
						PTR2 = PTR2.link.link;
					}
					else{
						break;
					}
				}
			}
		}

		return PTR1;
	}
	
	//version 2
	public Node findMiddleNode(){
		
		if(this.HEAD != null){
			Node PTR1 = HEAD;
			Node PTR2 = PTR1;
			
			while(PTR2 != null && PTR2.link != null){
				PTR1 = PTR1.link;
				PTR2 = PTR2.link.link;
			}
			return PTR1;
		}
		
		return null;
	}
	
	
	/*
	 * Find n’th node from the end of a Linked List
	 */
	public Node getNthNodeFromEnd(int loc){
		
		Node PTR1 = this.HEAD;
		Node PTR2 = null;
		
		while(PTR1 != null){
			
			if(PTR2 != null)
				PTR2 = PTR2.link;
			if(loc == 1)
				PTR2 = this.HEAD;

			
			PTR1 = PTR1.link;
			loc = loc - 1;
		}
		
		return PTR2;
	}
	
	//version 2
	public Node findNthNodeFromEnd(int loc){
		
		Node PTR2 = null;
		
		if(this.HEAD != null){
			Node PTR1 = this.HEAD;
			
			while(PTR1 != null){
				PTR1 = PTR1.link;
				
				if(loc == 1){
					PTR2 = this.HEAD;
					--loc;
				}
				else if(loc > 1){
					--loc;
				}
				else{
					PTR2 = PTR2.link;
				}
			}
		}
		
		return PTR2;
	}
	
	
	/*
	 * Write a function to reverse a linked list
	 * (Origin list is modified)
	 */
	public Node reverseLinkedList(){
		
		Node PTR1 = this.HEAD;
		Node PTR2 = null;
		Node tempNode = null;
		
		while(PTR1 != null){
			tempNode = PTR1;
			PTR1 = PTR1.link;
			tempNode.link = PTR2;
			PTR2 = tempNode;
		}
		
		return PTR2;
	}
	
	//Version 2 (Original list is retained)
	public Node reverseList(){
		
		Node PTR = this.HEAD;
		Node NEW_HEAD = null;
		
		while(PTR != null){
			Node newNode = new Node(PTR.info);
			newNode.link = NEW_HEAD;
			NEW_HEAD = newNode;
			PTR = PTR.link;
		}
		
		return NEW_HEAD;
	}
	
	//Version 3 (Passing reference as parameter. Makes it possible to reverse a list from any point in linked list)
	public Node reverseList(Node START){
		
		Node newHead = null;
		Node tempNode;
		Node PTR = START;
		
		while(PTR != null){
			tempNode = PTR;
			PTR = PTR.link;
			tempNode.link = newHead;
			newHead = tempNode;
			
		}
		
		return newHead;
	}
	
	/*
	 * Write a program function to detect loop in a linked list
	 */
	public boolean detectLoop(){
		
		boolean flag = false;
		
		Node PTR1 = this.HEAD;
		Node PTR2 = this.HEAD;
		
		if(PTR1 != null){
			while(PTR1 != null && PTR1.link != null){
				PTR1 = PTR1.link.link;
				PTR2 = PTR2.link;
				
				if(PTR1 == PTR2){
					flag = true;
					break;
				}					
			}
		}
		
		
		return flag;
	}
	
	
	/**
	 * Check if list contains even number of nodes
	 * @return 
	 */
	public boolean isListEven(){
		
		Node PTR = this.HEAD;
		boolean flag = false;
		int count = 0;
		
		while(PTR != null){
			++count;
			PTR = PTR.link;
		}
		
		if (count % 2 == 0)
			flag = true;
		else
			flag = false;
		
		return flag;
	}
	
	
	
	/**
	 * Function to check if a singly linked list is palindrome
	 * @return
	 */
	public boolean checkPalindrome(){
		
		boolean flag = false;
		Node originalHead = this.HEAD;
		Node midNode = null;
		Node midHead = null;
		
		midHead = this.findMiddleNode();
		
		if(!this.isListEven()){
			midNode = midHead;
			midHead = midHead.link;
		}
		
		Node newMidHead;
		
		newMidHead = this.reverseList(midHead);
		
		this.traverseNode(this.HEAD);
		this.traverseNode(newMidHead);
		
		Node PTR1 = newMidHead;
		Node PTR2 = originalHead;
		
		if(newMidHead != null){
			
			while(PTR1 != null){
				if(PTR1.info != PTR2.info){
					flag = false;
					break;
				}
				PTR1 = PTR1.link;
				PTR2 = PTR2.link;		
			}
			
			if(PTR1 == null)
				flag = true;
			
			
		}
		
		this.reverseList(newMidHead);
		
		return flag;
	}
	
	/**
	 * Method to insert a node in a sorted linkedlist
	 * 
	 */
	public void insertInSortedList(Node item) {
		Node PTR1 = HEAD;
		
		if (PTR1 != null) {
			if (PTR1.link == null) {
				//when list has only one node
				if (PTR1.info < item.info) {
					item.link = PTR1.link;
					PTR1.link = item;
				} else {
					//when item is the smaller than the first element
					item.link = HEAD;
					HEAD = item;
				}
			} else {
				//when list has more than 1 node
				do {
					if (PTR1.info < item.info) {
						//when current node is smaller and next node is larger than or equal to item
						if (PTR1.link.info >= item.info) {
							item.link = PTR1.link;
							PTR1.link = item;
							break;
						} else {
							//when current node and nest node are smaller than item
							PTR1 = PTR1.link;
						}
					} else {
						item.link = HEAD;
						HEAD = item;
						break;
					}
					
				} while (PTR1.link != null);
				
				if (PTR1.link == null) {
					//when item is greater than all the elements in list
					item.link = PTR1.link;
					PTR1.link = item;
				}
			}
				
		} else {
			//when list is empty
			item.link = HEAD;
			HEAD = item;
		}
		
		Object o = new Object();
		
	}
}
