if exist res del res
if exist resglob del resglob
for %%f in  ( *.c ) do call testre %%f res resglob

