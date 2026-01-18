/*Basically the idea is around Priority Queue 
1.the operation to delete the top element in the PQ can be done in O(1)
but what about discarding the other element nested in the PQ ????
That is a problem also encountered while implementing the Dijkstra's Algorithm 
to avoid it we can use th concept of Lazy Update
in this basically we create another hashmap or set which contains the track of discarded element and we can match it in PQ when any element is at the top 
This operation is neither O(n) nor O(1) but a logarithm ones...it may optimize your code that is the key idea.*/
