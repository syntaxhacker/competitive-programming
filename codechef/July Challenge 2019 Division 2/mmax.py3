for i in range(int(input())):
  n = int(input())
  k = int(input())
  if (k % n == 0):
    print(0)
    continue
  ans = int((k // n) * n);
  # print(ans)
  k -= ans;
  if (n > 3):
    if (k == int(n//2)):
      print(n - 1)
      continue;
    elif k == int(n//2 + 1):
      print(n - 2)
      continue;

  if (k <= int(n//2)):
    print(k * 2)
  else:
    print((n - k) * 2)