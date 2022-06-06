extern void aconstructor() __attribute__((constructor));
int aaa=0;
void aconstructor()
{
    aaa=12345;
}

int main()
{
    printf("%d", aaa);
    return 0;
}