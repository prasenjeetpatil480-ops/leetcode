class CustomStack {
public:
    vector<int> st;
    int top;

    CustomStack(int maxSize) {
        st.resize(maxSize);
        top = -1;
    }

    void push(int x) {
        if (top < (int)st.size() - 1) {
            st[++top] = x;
        }
    }

    int pop() {
        if (top == -1)
            return -1;

        return st[top--];
    }

    void increment(int k, int val) {
        for (int i = 0; i < min(k, top + 1); i++) {
            st[i] += val;
        }
    }
};