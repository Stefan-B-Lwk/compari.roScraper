! For Linux (bash) !

run scrapescrapeC and input the email you want the info sent to.

MSMTP needs to be installed ( sudo apt-get install msmtp )
MSMTP needs to be set up.
open ~/.msmtprc with a text editor and add the following:

  account gmail
  tls on
  auth on
  host smtp.gmail.com
  port 587
  user /youremail@gmail.com/
  from /youremail@gmail.com/
  password /special password for automatization of gmail - passkey that looks like this: xyzw abcd oprs qewd/

same or similar syntax for using other emails (yahoo , etc)
