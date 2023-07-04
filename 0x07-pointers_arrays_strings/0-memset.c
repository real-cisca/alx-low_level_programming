using System;

public static class MemoryHelper
{
public static unsafe byte* _memset(byte* s, byte b, uint n)
{
    for (uint i = 0; i < n; i++)
    {
        *(s + i) = b;
    }

    return s;
} 
}

static unsafe void Main()
{
    byte[] array = new byte[10];

    fixed (byte* ptr = array)
    {
        byte* result = MemoryHelper._memset(ptr, 65, 10);
        Console.WriteLine(BitConverter.ToString(array));
    }
}
