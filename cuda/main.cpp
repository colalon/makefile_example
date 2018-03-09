#include <cstdlib>
#include <iostream>
#include "test.cu"

using namespace std;

int main(int argc,char **argv)
{
    const int numThreads = 100;

    int *dIDs;

    cudaMalloc(&dIDs,sizeof(int) * numThreads);

    saveIDs<<< 1, numThreads >>>(dIDs);

    int *hIDs = new int[numThreads];

    cudaMemcpy(hIDs,dIDs,sizeof(int) * numThreads,cudaMemcpyDeviceToHost);

    for (int i=0; i<numThreads; i++)
        cout << i << ": " << hIDs[i] << endl;

    delete[] hIDs;
    cudaFree(dIDs);

    return 0;
}