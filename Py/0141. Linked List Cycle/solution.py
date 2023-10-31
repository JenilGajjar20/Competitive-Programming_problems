from queue import LifoQueue
# using LifoQueue which is a stack in python

class Queue:
    def __init__(self):
        self.input = LifoQueue()
        self.output = LifoQueue()


    def push(self, data: int) -> None:
        # Pop out all elements from the stack input
        while not self.input.empty():
            self.output.put(self.input.get())
        # Insert the desired element in the stack input
        print("The element pushed is", data)
        self.input.put(data)
        # Pop out elements from the stack output and push them into the stack input
        while not self.output.empty():
            self.input.put(self.output.get())


    # Pop the element from the Queue
    def pop(self) -> int:
        if self.input.qsize() == 0:
            print("Stack is empty")
            exit(0)
        val = self.input.get()
        return val


    def Top(self) -> int:
        if self.input.qsize() == 0:
            print("Stack is empty")
            exit(0)
        return self.input.queue[-1]


    def size(self) -> int:
        return self.input.qsize()




if __name__ == "__main__":
    q = Queue()
    q.push(3)
    q.push(4)
    print("The element poped is", q.pop())
    q.push(5)
    print("The top of the queue is", q.Top())
    print("The size of the queue is", q.size())


'''   
Output:

The element pushed is 3
The element pushed is 4
The element poped is 3
The element pushed is 5
The top element is 4
The size of the queue is 2

Time Complexity: O(N )  

Space Complexity: O(2N)
'''
