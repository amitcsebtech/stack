#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}





// stack using vector/array
#include<iostream>
#include<vector>
using namespace std;
class Stack{
vector<int> v;
public:
void push(int val){
    v.push_back(val);
}
void pop(){
    v.pop_back();
}
int  top(){
    return v[v.size()-1];
}
bool empty(){
    return v.size()==0;
}
};
int main(){
    Stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}





// stack using linked list
#include<iostream>
#include<list>
using namespace std;
class Stack{
list<int> ll;
public:
void push(int val){
    ll.push_front(val);
}
void pop(){
    ll.pop_front();
}
int  top(){
    return ll.front();
}
bool empty(){
    return ll.size()==0;
}
};
int main(){
    Stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}