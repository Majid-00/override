
/* WARNING: Removing unreachable block (ram,0x08048868) */

undefined4 main(void)

{
  uint __seed;
  int iStack_14;
  
  __seed = time((time_t *)0x0);
  srand(__seed);
  puts("***********************************");
  puts("*\t\tlevel03\t\t**");
  puts("***********************************");
  printf("Password:");
  __isoc99_scanf();
  test(iStack_14,0x1337d00d);
  return 0;
}

