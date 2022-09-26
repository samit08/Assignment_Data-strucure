# [Question.1] While traversing a single-circular linked list, which condition establishes that the traversing element/variable has reached the first element? */


#Ans 1
#Lets take an example and create a basic circular linked list
# circular linked list traversal

# Structure for a Node
class Node:
	
	# Constructor to create a new node
	def __init__(self, data):
		self.data = data
		self.next = None

class CircularLinkedList:
	
	# Constructor to create a empty circular linked list
	def __init__(self):
		self.head = None

	# Function to insert a node at the beginning of a
	# circular linked list
	def push(self, data):
		ptr1 = Node(data)
		temp = self.head
		
		ptr1.next = self.head

		# If linked list is not None then set the next of
		# last node
		if self.head is not None:
			while(temp.next != self.head): #This condition establishes that the traversing element(temp) has reached the first element
				temp = temp.next
			temp.next = ptr1

		else:
			ptr1.next = ptr1 # For the first node

		self.head = ptr1

	# Function to print nodes in a given circular linked list
	def printList(self):
		temp = self.head
		if self.head is not None:
			while(True):
				print (temp.data, end=" ")
				temp = temp.next
				if (temp == self.head):
					break


# Driver program to test above function

# Initialize list as empty
cllist = CircularLinkedList()

# Created linked list will be 11->2->56->12
cllist.push(3)
cllist.push(4)
cllist.push(5)
cllist.push(6)

print ("Contents of circular Linked List")
cllist.printList()

#Line 33 i.e. while(temp->next!=head) establishes that the traversing element/variable has reached the first element.
#We Know that in circular linked list last node of linked list points to head of that linked list, hence we can check if any node points to head of linked list then that node is the end of circular linked list.



#[Question.2]  What are the practical applications of a circular linked list? (Try to find applications in your respective fields).

#ans 2: Practical applications are:-
            #1.Circular Linked Lists can be used to manage the computing resources of the computer.
            #2.Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.
            #3.It is also used in computer networking for token scheduling.
            #4.Round Robin scheduling technique in games.
            #5.Audio/Video Streaming
            #6.Circular Escalators   
            #7.Ludo Game
       #PRACTICAL APPLICATIONS WITH RESPECT TO MY BRANCH(i.e. EE):
            #1. Circular linked list is used in arduino ide to code for arduino or any microcontroller and command a specific output from them
            #2. Making circuits of diwali and christamas lights that follow a specific pattern and repeat it in a loop...
            #3. Used to code for a seven segment display used as timer for traffic lights...that runs in loop
    #Thus circular linked list has many applicatoin in my respective field...because everytime a bit is changed(0->1 OR 1->0)...its past sequence has to be kept in memory..so circular linked list are used for that 
