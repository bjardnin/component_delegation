This repo was created as PoC for creating a program that has main functionality in shared lib `a`, delegatated functionality in shared lib `b1` or `b2`. Final executable `ci` puts `a` and `bi` together.

Feel free to explore directories `a`, `b1`, `b2` and `c` to see what it does.

To build correctly, use the following sequence

```
(cd a && make)
(cd b1 && make)
(cd b2 && make)
(cd c && make c1 && make c2)
```
