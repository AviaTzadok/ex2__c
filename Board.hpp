#include <string>
#include "Direction.hpp"
#include <unordered_map>
#include <limits.h>
using namespace std;
namespace ariel{
    class Board{
            unsigned int x_min=UINT_MAX;
            unsigned int y_min=UINT_MAX;
            unsigned int x_max=0;
            unsigned int y_max=0;

            unordered_map<unsigned int,unordered_map<unsigned int,char>> board;
            public:
            void post(unsigned int row,unsigned int col,Direction dir,string str_in);
            string read(unsigned int row,unsigned int col,Direction dir,unsigned int num_of_letters);
            void show();
        

    };
};
