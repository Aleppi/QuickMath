#ifndef COMBI_H
#define COMBI_H
class Combi {
    public:
        Combi() {};
        static int calculatePermutations(int n, int k);
        static int calculateRepetitivePermutations(int n, int k);
        static int calculateCombinations(int n, int k);
        static int calculateRepetitiveCombinations(int n, int k);
};
#endif
