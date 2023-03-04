/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {
public:
    struct LinkedNode
    {
        int val;
        LinkedNode* next;
        // 构造函数：输入val进行初始化
        LinkedNode(int val):val(val), next(nullptr){}
    };
    

    MyLinkedList() {//initiate head with nullptr
        _dummyHead = new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if((index >= 0) && (index <= (_size - 1))){
            LinkedNode* curr = _dummyHead->next; //need -> next
            while(index --){
                curr = curr->next;
            }
            return curr->val;
        } else {
            return -1;
        }
    }
    
    void addAtHead(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = _dummyHead->next;
        _dummyHead->next = newNode;
        _size ++;
    }
    
    void addAtTail(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* curr = _dummyHead;
        //是curr->next != NULL 而非curr != NULL
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = newNode;
        _size ++;
    }
    
    // void addAtIndex(int index, int val) {
    //     LinkedNode* newNode = new LinkedNode(val);
    //     LinkedNode* curr = _dummyHead;
    //     if((index > 0) && (index <= _size - 1)){
    //         while(index --){
    //             curr = curr->next;
    //         }
    //         newNode->next = curr->next;
    //         curr->next = newNode;
    //         _size ++;
    //     } else if(index <= 0){
    //         newNode->next = curr->next;
    //         curr->next = newNode;
    //         _size ++;
    //     }
    // }

     void addAtIndex(int index, int val) {

        if(index > _size) return;
        if(index < 0) index = 0;        
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = _dummyHead;
        while(index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        LinkedNode* curr = _dummyHead;
        if((index >= 0) && (index <= _size - 1)){
            while(index --){
                curr = curr->next;
            }
            curr->next = curr->next->next;
            _size --; //容易遗漏
        }
    }

private:
    int _size = 0;
    LinkedNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

