from pwn import *
eip_value = 0x6261616b
eip_bytes = p32(eip_value)
offset = cyclic_find(eip_bytes)
print(offset)
