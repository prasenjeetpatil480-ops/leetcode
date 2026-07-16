class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> st;

        for (int a : asteroids) {

            // Destroy all smaller positive asteroids
            while (!st.empty() && a < 0 && st.back() > 0 && st.back() < -a) {
                st.pop_back();
            }

            // Collision still possible
            if (!st.empty() && a < 0 && st.back() > 0) {

                // Both asteroids are equal, so both explode
                if (st.back() == -a) {
                    st.pop_back();
                }

                // If st.back() > -a, current asteroid explodes.
                // Do nothing.
            }
            else {
                // No collision, push current asteroid
                st.push_back(a);
            }
        }

        return st;
    }
};