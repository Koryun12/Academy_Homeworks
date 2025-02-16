#include <iostream>
#include <vector>

class BitSet {
    private:
    std::vector<bool> bits;
    size_t size;
    public:
    BitSet(size_t size) : size(size), bits(size) {

        std::cout << "BitSet constructor" << std::endl;
    }
    BitSet(const BitSet& other) : size(other.size), bits(other.bits) {
        std::cout << "BitSet copy constructor" << std::endl;
    }
    BitSet(size_t size, const std::vector<bool>& initialbits) : size(size), bits(initialbits) {
        std::cout << "BitSet Parameterized constructor" << std::endl;
    }
    ~BitSet() {
        std::cout << "BitSet destructor" << std::endl;
    }

    size_t getindex(size_t pos) const {
        return pos / 8;
    }
    size_t getPosition(size_t pos) const {
        return pos % 8;
    }
    void set(size_t pos,bool bit) {
        bits[pos] = bit;

    }
    void reset(size_t pos) {
        getPosition(pos);
        bits[pos] = false;
    }
    void flip(size_t pos) {
        getPosition(pos);
        bits[pos] = !bits[pos];
    }
    bool test(size_t pos) const {
        return bits[pos];
    }
    size_t count () const {
        size_t count = 0;
        for (size_t i = 0; i < size; i++) {
            if (bits[i]) {
                count++;
            }
        }
        return count;
    }
    size_t getSize() const {
        return size;
    }
    void print() const {
        for (size_t i = 0; i < size; i++) {
            std::cout << bits[i] << " ";
        }
        std::cout << std::endl;
    }
};

    