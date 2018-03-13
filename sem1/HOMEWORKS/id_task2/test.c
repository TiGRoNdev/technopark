#include <assert.h>
#include <string.h>
#include "test.h"

char* test () {
    assert(strcmp(rstrip("   45345sdfhsdf445     ", 23), "45345sdfhsdf445") == 0);
    assert(strcmp(rstrip("   45345sdf  hsdf4 45     ", 26), "45345sdf  hsdf4 45") == 0);

    BigNumber* BigNum = createBigNum();
    assert(BigNum != NULL);

    assert(fillBigNum(BigNum, "  123456353535345345   ") == 0);
    assert(strcmp(strBigNum(BigNum), "123456353535345345") == 0);

    assert(fillBigNum(BigNum, "  143245345345   ") == 0);
    assert(strcmp(strBigNum(BigNum), "143245345345") == 0);

    assert(fillBigNum(BigNum, "    89898998989 9867464  342435 5345345   ") == -1);
    assert(strcmp(strBigNum(BigNum), "143245345345") == 0);

    assert(fillBigNum(BigNum, "    12456789") == 0);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    assert(fillBigNum(BigNum, "    ewrewrwerwer999999999999999996546123456353535345345") == -1);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    assert(fillBigNum(BigNum, "    retertertert9999999999999996546123456ewrwerwr353535345345werewr") == -1);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    assert(fillBigNum(BigNum, "    999999999999999999999999999999965ewrwerwer") == -1);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    assert(fillBigNum(BigNum, "ewrrwerwerfdgdfghtrgfAASS") == -1);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    assert(fillBigNum(BigNum, "-8989899898998674643424355345345   ") == -1);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);


    assert(BigNum->cyphs != NULL);

    unsigned short int arr[6] = {5, 4, 3, 2, 1, 0};
    reverseArr(arr, 6);
    for (int i = 0; i < 6; ++i)
        assert(arr[i] == i);

    unsigned short int arr2[7] = {6, 5, 4, 3, 2, 1, 0};
    reverseArr(arr2, 7);
    for (int i = 0; i < 7; ++i)
        assert(arr2[i] == i);

    BigNumber* BigNum2 = createBigNum();
    fillBigNum(BigNum2, "2345678912");
    assert(addBigNum(BigNum, BigNum2) == 0);
    assert(strcmp(strBigNum(BigNum), "2358135701") == 0);
    assert(strcmp(strBigNum(BigNum2), "2345678912") == 0);

    fillBigNum(BigNum2, "678912");
    assert(addBigNum(BigNum, BigNum2) == 0);
    assert(strcmp(strBigNum(BigNum), "2358814613") == 0);
    assert(strcmp(strBigNum(BigNum2), "678912") == 0);

    /*fillBigNum(BigNum2, "2345678912");
    fillBigNum(BigNum, "2358135701")
    assert(excBigNum(BigNum, BigNum2) == 0);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);
    assert(strcmp(strBigNum(BigNum2), "2345678912") == 0);

    assert(excBigNum(BigNum, BigNum2) == 0);
    assert(strcmp(strBigNum(BigNum), "0") == 0);
    assert(strcmp(strBigNum(BigNum2), "2345678912") == 0);

    fillBigNum(BigNum, "12456789", 8);
    assert(divBigNum(BigNum2, BigNum) == 0);
    assert(strcmp(strBigNum(BigNum2), "188") == 0);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    assert(divBigNum(BigNum2, BigNum) == 0);
    assert(strcmp(strBigNum(BigNum2), "0") == 0);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);
    fillBigNum(BigNum2, "0", 1);

    assert(divBigNum(BigNum2, BigNum) == 0);
    assert(strcmp(strBigNum(BigNum2), "0") == 0);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    assert(divBigNum(BigNum, BigNum2) == -1);
    assert(strcmp(strBigNum(BigNum2), "0") == 0);
    assert(strcmp(strBigNum(BigNum), "12456789") == 0);

    fillBigNum(BigNum, "188097", 6);
    fillBigNum(BigNum2, "186790", 6);
    assert(mulBigNum(BigNum, BigNum2) == 0);
    assert(strcmp(strBigNum(BigNum), "35134638630") == 0);
    assert(strcmp(strBigNum(BigNum2), "186790") == 0);

    fillBigNum(BigNum, "0", 1);
    assert(mulBigNum(BigNum2, BigNum) == 0);
    assert(strcmp(strBigNum(BigNum), "0") == 0);
    assert(strcmp(strBigNum(BigNum2), "0") == 0);

    assert(delBigNum(BigNum) == 0);
    assert(delBigNum(BigNum2) == 0);
    assert(delBigNum(NULL) == -1);
    assert(BigNum == NULL);
    assert(BigNum2 == NULL);*/

    return "Everything is OK!";
}

