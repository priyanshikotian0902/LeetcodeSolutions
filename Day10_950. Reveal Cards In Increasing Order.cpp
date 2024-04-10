class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> decknew;
        sort(deck.begin(), deck.end(), greater<int>());

        while (!deck.empty()) {

            decknew.push_back(deck[0]);
            deck.erase(deck.begin());
            if(decknew.size()<=2)
            {
               int temp1=decknew[decknew.size()-1];
             decknew[decknew.size()-1]=decknew[0];
             decknew[0]=temp1;
             continue;
            }
            int temp = decknew[decknew.size() - 1];
           int temp2 = decknew[decknew.size()-2];
          for (int i = decknew.size()-3; i>=0; i--) {

    decknew[i+2] = decknew[i ];
}
            decknew[0] = temp;
            decknew[1] = temp2;

      }
      return decknew;
   }
};
