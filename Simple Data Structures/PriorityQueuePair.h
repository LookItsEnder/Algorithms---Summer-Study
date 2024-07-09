#ifndef PRIORITYQUEUEPAIR_H_
#define PRIORITYQUEUEPAIR_H_
class PriorityQueuePair{
public:
    int item;
    int priority;

    PriorityQueuePair(int item, int priority){
        this->item = item;
        this->priority = priority;
    }
};
class PriorityQueuePairComparitor{
public:
    bool operator()(const PriorityQueuePair &arg1, const PriorityQueuePair &arg2) const{
        return arg1.priority > arg2.priority;
    }
};
#endif /* PRIORITYQUEUEPAIR_H_ */