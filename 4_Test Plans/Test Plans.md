**Test Plans**	

|**Test ID**|**Description**|**Input**|**Output**|**Status**|
| :-: | :-: | :-: | :-: | :-: |
|TID\_01|Is person seated|push button=1|push button=1|PASS|
|TID\_02|Is person not seated|push button=0|push button=0|PASS|
|TID\_03|Temperature Request|Temp=0|heater=Off|PASS|
|TID\_04|Temperature Request|Temp=20|heater=20 degree generation|PASS|
|TID\_05|Temperature Request|Temp=23|heater=23 degree generation|PASS|
|TID\_06|Temperature Request|Temp=30|heater=30 degree generation|PASS|
|TID\_07|Temperature Request|Temp=35|heater=35 degree generation|PASS|
|TID\_08|LED ON|Button=1 && Heater=1|LED=1|PASS|
|TID\_09|LED OFF|Button=0 && Heater=0|LED=0|PASS|
|TID\_10|Display|Temperature :)<br>20 deg Cel|Temperature :)<br>20 deg Cel|PASS|

