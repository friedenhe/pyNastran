$
$ part5.dat
$
CQUAD4	6	1	9	10	20	19
CQUAD4	7	1	10	11	21	20
CQUAD4	8	1	11	12	22	21
CQUAD4	9	1	12	13	23	22
$
$		cp	a	b	c	cd	ps	seid
GRDSET							6
$
$ boundary grids
$
GRID	19		-3.6	4.4	0.
GRID	20		-2.8	4.4	0.
GRID	13		-.4	3.6	0.
GRID	23		-.4	4.4	0.
$
GRID	9		-3.6	3.6	0.
GRID	10		-2.8	3.6	0.
GRID	11		-2.	3.6	0.
GRID	12		-1.2	3.6	0.
GRID	21		-2.	4.4	0.
GRID	22		-1.2	4.4	0.
$
MAT1,1,30.+6,,.3,.283
PARAM,WTMASS,.00259
PARAM,AUTOSPC,YES
PSHELL,1,1,.05,1,,1