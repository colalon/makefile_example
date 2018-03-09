__global__ void saveIDs(int *idsOut)
{
    const int tid = threadIdx.x;

    idsOut[tid] = tid;
}
