# Vistara-Airbus-Queue-Management
VISTARA AIRBUS QUEUE MANAGEMENT \
ALGORITHM AND SOURCE CODE

Author: Sagnik Mitra \
Department of Computer Science & Business Systems\
Sister Nivedita University [2018 - Present]

About this Project: \
This was basically a challenge in the TCS Hackathon but due to some unavoidable circumstances, it could not be finished within the due time. So, the part of the problem that I solved is kept here as a self-explanatory tool.

As we see in the Airports, there is a lot of rush in each and every Checking-in & Boarding scenario. So, through this project from Hackathon, we are trying to make an optimized way to maintain the rush.\
So, I built a very affordable and relatively simple Queue Management System for the same. At first, it is clear that there must be different processes to maintain different queues like Boarding Queue, Checking Queue & On-Board Queue. I was able to innovate the solution for the Boarding Queue, so I reflected it here.

Boarding Queue Management:\
As we know, there are three types of Vistara Airbus. Airbus A320, Airbus Economy A320 & Boeing 737-800NG. Here, I primarily took A320 for our case. \
Point to Notice → The Business Class (1A-2F: 6 Passengers) followed by the Premium Economy Class (3A-6F:24 Passengers) will be Boarded the First Row by Row to make the Pathway clear for a large number of Economy Class Passengers.\

Picture of the seating arrangement from the Vistara Website
https://www.airvistara.com/ae/contents/ae/s3fs-public/Airbus-320.png


Now the next whole thing is for the Economy Class. This Seat Arrangement is taken from the VISTARA AIRBUS A320. If you are dealing with Airbus All Economy, simply replace n>=7 by n>=1.

In this part, considering there are 22 rows for the economy class, I set the entrance for separated sections of seats, like Gate 1 is for 7A-14F & Gate 2 is for 15A - 29F passengers. So, here I created a Q-Card / Q-Code to make boarding an optimized process by managing the queue to the flight from the gate.

Here is the pseudocode for generating the last part of the Q-Code and the full format is explained in the source code.


whether n >= 7 \
	If yes\
	    whether n <=14\
		If yes\
		  whether n<14 \
If yes  \
                                        //Being treated as Unlucky 13, after 12A-F, 14A-F is there in Vistara\
			     nA → [27-2*n]W ; nB → [27-2*n]M ; nC → [27-2*n]S;\
			     nF → [28-2*n]W ; nE → [28-2*n]M ; nD → [28-2*n]S;\
	    		If no\
			     14A → 1W ; 14B → 1M ; 14C → 1S ;\
			     14F → 2W ; 14E → 2M ; 14D → 2S ;\
		If no \
			nA → [2*n-29]W ; nB → [2*n-29]M ; nC → [2*n-29]S ;\
			nF → [2*n-28]W ; nE → [2*n-28]M ; nD → [2*n-28]S ;


Methods Used:

Negotiation & Decision Technique for detecting the proper Seat Number
Odd Number-Even Number Combinatorics for getting the Q-Number as well as the Q-Code as mentioned below.


Q CODE Format ->     Q / 10F / G1 / 8W
		     
F → Whether it is a Window (W) or Middle (M) or Side Seat(S).

Q → Stands for Queue Code for Vistara Air

10 → 10th Row from the front.

G1 → If your Seat Row is >14, then you have to take the 2nd Gate from the Pilot’s POV And if your Seat Row is <= 14, then take the First Gate from the Pilot’s POV.

8W → Followed from the previously mentioned process.

Process:	

When the Flight Officials announce the time for boarding, there will be two lines simultaneously, one for the Gate 1 & One for the Gate 2. According to their Q Code,

The passengers of the first line will be in the following sequence according to their Q Card.  -> 

G1/1W, G1/2W, G1/3W, G1/4W, … , G1/11W, G1/12W, G1/13W, G1/14W 
(14A, 14F, 12A, 12F, … , 8A, 8F, 7A, 7F)

Then, G1/1M, G1/2M, G1/3M, G1/4M, … , G1/11M, G1/12M, G1/13M, G1/14M 
(14B, 14E, 12B, 12E, … , 8B, 8E, 7B, 7E)

Then, G1/1S, G1/2S, G1/3S, G1/4S, … , G1/11S, G1/12S, G1/13S, G1/14S 
(14C, 14D, 12C, 12D, … , 8C, 8D, 7C, 7D)

And simultaneously, the passengers of Gate 2 in 2nd Line will be in the following sequence →

G2/1W, G2/2W, G2/3W, G2/4W, … , G2/11W, G2/12W, G2/13W, G2/14W 
(15A, 15F, 16A, 16F, … , 28A, 28F, 29A, 29F)

Then, G2/1M, G2/2M, G2/3M, G2/4M, … , G2/11M, G2/12M, G2/13M, G2/14M
(15B, 15E, 16B, 16E, … , 28B, 28E, 29B, 29E)

Then, G2/1S, G2/2S, G2/3S, G2/4S, … , G2/11S, G2/12S, G2/13S, G2/14S 
(16C, 16D, 16C, 16D, … , 28C, 28D, 29C, 29D)

Why can QCode be efficient enough to handle boarding Queue?

Answer: 
1. The format is truly significant with respect to both the boarding and seat arrangement of the Airbus.
2. The cost of production of QCode will be as low as luggage coupons in Shopping Malls.
3. The passengers themselves will be aware of when to board.
4. The serialization of boarding into the plane and dividing the passengers for the two gates will help in reducing the rush.</br>The QCode(s) will be collected after the plane takes off.                               
	So, keeping in mind the vital points like Passenger Friendly, Staff Friendly, Cost Effectiveness, Ease of Implementation, Methodically Sound, I think this will work for managing the whole queue in a befitted manner.

References:

An Introduction to Theory of Numbers - G.H. Hardy [Wiley]\
https://www.geeksforgeeks.org/fundamentals-of-algorithms/ \
https://www.airvistara.com/trip/seatmap/airbus-A320 \
https://www.airlinequality.com/airline-reviews/vistara/ \
https://www.airvistara.com/ae/contents/ae/s3fs-public/Airbus-320.png \
https://www.underconsideration.com/brandnew/archives/new_logo_and_livery_for_vistara_by_brand_union_raykeshavan.php 


