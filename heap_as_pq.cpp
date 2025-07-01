#include <vector>
#include <stdexcept>

template<typename T>
class PriorityQueue {
private:
    std::vector<T> heap;
    
    // Helper functions to get parent and child indices
    size_t parent(size_t index) { return (index - 1) / 2; }
    size_t leftChild(size_t index) { return 2 * index + 1; }
    size_t rightChild(size_t index) { return 2 * index + 2; }
    
    // Helper function to maintain heap property by moving element up
    void heapifyUp(size_t index) {
        while (index > 0 && heap[parent(index)] < heap[index]) {
            std::swap(heap[index], heap[parent(index)]);
            index = parent(index);
        }
    }
    
    // Helper function to maintain heap property by moving element down
    void heapifyDown(size_t index) {
        size_t maxIndex = index;
        size_t size = heap.size();
        
        while (true) {
            size_t left = leftChild(index);
            size_t right = rightChild(index);
            
            if (left < size && heap[left] > heap[maxIndex]) {
                maxIndex = left;
            }
            
            if (right < size && heap[right] > heap[maxIndex]) {
                maxIndex = right;
            }
            
            if (maxIndex == index) {
                break;
            }
            
            std::swap(heap[index], heap[maxIndex]);
            index = maxIndex;
        }
    }
    
public:
    // Constructor
    PriorityQueue() = default;
    
    // Check if queue is empty
    bool empty() const {
        return heap.empty();
    }
    
    // Get size of queue
    size_t size() const {
        return heap.size();
    }
    
    // Get the highest priority element (max element)
    const T& top() const {
        if (empty()) {
            throw std::runtime_error("Priority queue is empty");
        }
        return heap[0];
    }
    
    // Insert element into queue
    void push(const T& value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }
    
    // Remove the highest priority element
    void pop() {
        if (empty()) {
            throw std::runtime_error("Priority queue is empty");
        }
        
        heap[0] = heap.back();
        heap.pop_back();
        
        if (!empty()) {
            heapifyDown(0);
        }
    }
};

int main() {
    PriorityQueue<int> pq;
    
    // Insert elements
    pq.push(3);
    pq.push(1);
    pq.push(4);
    pq.push(1);
    pq.push(5);
    
    // Print and remove elements in priority order
    while (!pq.empty()) {
        std::cout << pq.top() << " ";  // Will print: 5 4 3 1 1
        pq.pop();
    }
}