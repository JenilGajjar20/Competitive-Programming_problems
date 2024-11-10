## Day of the Programmer

Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of the Programmer (the 256th day of the year) during a year in the inclusive range from **1700** to **2700**.

From **1700** to **1917**, Russia's official calendar was the Julian calendar; since **1919** they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in **1918**, when the next day after **January 31st** was **February 14th**. This means that in **1918**, **February 14th** was the 32nd day of the year in Russia.

In both calendar systems, February is the only month with a variable amount of days; it has **29 days** during a leap year, and **28 days** during all other years. In the Julian calendar, leap years are divisible by **4**; in the Gregorian calendar, leap years are either of the following:

- Divisible by `400`.
- Divisible by `4` and not divisible by `100`.

Given a year, `y`, find the date of the 256th day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is `y`.

For example, the given `year` = 1984. 1984 is divisible by **4**, so it is a leap year. The 256th day of a leap year after **1918** is **September 12**, so the answer is `12.09.1984`.

#### Function Description

The function has the following parameter(s):

- `year`: an integer

#### Input Format

- A single integer denoting year `y`.

#### Constraints

- `1700 <= y <= 2700`

#### Output Format

- Print the full date of Day of the Programmer during year `y` in the format **dd.mm.yyyy**, where dd is the two-digit day, mm is the two-digit month, and yyyy is `y`.
