Node* temp = q.front() ;
        cout << temp->value << " " ;
        if ( temp->left != NULL ) q.push(temp->left) ;
        else if ( temp->right != NULL ) q.push(temp->right) ;
        q.pop() ;