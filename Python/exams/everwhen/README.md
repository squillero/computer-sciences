# EVERWHEN

Today is October 23! A very special day. Write a Python program to sort a set of events occurring **today** in different time zones.

The program reads the file timezones.lst, which contains the definition of the timezones, one per line, not in any order, in the format `TZ_NAME: OFFSET DESCRIPTION`. The `TZ_NAME` does not contain spaces; the `OFFSET` is in the form `UTC±H[:M]`, it can be positive `+` or negative `-`, and the offset can also contain minutes; the `DESCRIPTION` is enclosed in double quotes and can consist of several words.

For instance:

```text
AEST: UTC+10 "Australian Eastern Standard Time"
CET: UTC+1 "Central European Time"
CHAST: UTC+12:45 "Chatham Island Standard Time"
NST: UTC-3:30 "Newfoundland Standard Time" 
SST: UTC-11 "Samoa Standard Time"
```

The program reads the file `today.lst` containing today's event, one each line, not in any order, in the format `TIME TZ_NAME DESCRIPTION`. The `TIME` does not contains spaces and specify the time of the event in the format `HH:MM`; the `TZ_NAME` is the name of a timezone as it appears in the other file; the `DESCRIPTION` is enclosed in double quotes and may consists of multiple words.

For instance:

```text
07:30 CET "Good Morning Ljubljana!"
23:00 AEST "Good Night Hobart!"
07:30 SST "Good Morning Savai'i Island!"
23:00 CHAST "Good Night Waitangi!"
```

The program must convert the time of the event to the corresponding *Coordinated Universal Time* (UTC), sort the events based on it, print the resulting event list: `day UTC_time description`.

The `day` field is necessary, because some of the events of October 23 may actually happen on October 22 (**yesterday**) or on October 24 (**tomorrow**) in UTC.

For instance:

```text
yesterday 20:30 "Good Morning Savai'i Island!"
today 08:30 "Good Morning Ljubljana!"
tomorrow 09:00 "Good Night Hobart!"
tomorrow 11:45 "Good Night Waitangi!"
```
