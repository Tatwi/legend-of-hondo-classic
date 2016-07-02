del tells.txt
del spatial.txt
del temp_spatial.txt
del temp_tells.txt

.\bin\grep -a "Instant Messages" *_chatlog.txt >> temp_tells.txt
.\bin\grep -a "tell\|reply" temp_tells.txt >> tells.txt

.\bin\grep -a "Spatial" *_chatlog.txt >> temp_spatial.txt
.\bin\grep -a "says" temp_spatial.txt >> spatial.txt

del temp_spatial.txt
del temp_tells.txt



