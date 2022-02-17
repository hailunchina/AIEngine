#include "MinimaxTester.h"

#define RUN_MINIMAX_TESTS 0

int main(int argc, char *argv[])
{
    printf("main start\n");
    if (argc > 1)
    {
        int boardState = atoi(argv[1]);
        TicTacToeMinimax::benchmarkMinimax(boardState, true);
    }
    else
    {
        if (RUN_MINIMAX_TESTS)
        {
            TicTacToeMinimax::RunMinimaxTests();
        }
        else
        {
            TicTacToeMinimax::benchmarkMinimaxVsMinimax(0, true);
        }
    }
    printf("main end\n");
    return 0;
}
