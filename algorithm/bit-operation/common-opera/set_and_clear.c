///////////// Continuous
// and 0
void clear_bit(int* num, size_t which)
{
	*num &= ~(1 << which);
}
// or 1
void set_bit(int* num, size_t which)
{
	*num |= 1 << which;
}

// 把第which位的低4位清零
void clear_bit_by4(int* num, size_t which)
{
	*num &= ~(0x3 << which - 3);
}
void set_bit_by4(int* num, size_t which)
{
	*num |= 0x3 << which - 3;
}

// and 0
void clear_bit_by2(int* num, size_t which)
{
	*num &= ~(0xF << which - 1);
}
void set_bit_by2(int* num, size_t which)
{
	*num |= 0xF << which - 1;
}

///////////// Not Continuous

// 把第which位的低4位 设置 为 will的值，will是hex
void set_bit_by4(int* num, size_t which, int will)
{
	*num = ~(0xF << which - 3) & *num | will << which - 3;
}
