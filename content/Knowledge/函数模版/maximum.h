template <class T>//or template <typename T>
T maximum(T value1,T value2,T value3)
{
    T maximumvlaue=value1;
    if(value2>maximumvlaue){
        maximumvlaue=value2;
    }
    if(value3>maximumvlaue){
        maximumvlaue=value3;
    }
    return maximumvlaue;
}