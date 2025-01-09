void dequeue(   ){
        if(head == NULL){
            return;
        }
        else{
        Node* temp =  head;
        head = head->next;
        delete temp;
        if(head == NULL) tail = NULL;
        }
        size--;
    }

    
    // qu.enqueue(30);
    // qu.display();
    // qu.getSize();
    // qu.dequeue();
    // qu.display();
    // qu.getSize();
    // qu.enqueue(40);
    // qu.display();
    // qu.getSize();


