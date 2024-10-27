// answer a: o(n*log(n))
// answer b: o(sqrt(n))
// answer c: o(sqrt(n)*log(n))
// answer d: o(sqrt(n))



(b)

for(int i =1; i*i<n; i++)
{
     cout << “hello”;
}

(c)

for(int i =1; i<n; i=i*2)
{
   for(int j=1; j*j<n; j+=2)
  {
      cout << “hello”;
   }
}

(d)
int m = 1;
for(int i=0; m<=n; i++)
{
    m+=i;
}
