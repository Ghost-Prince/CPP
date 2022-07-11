import time
import datetime
from plyer import notification

while(True):
    T = datetime.datetime.now()
    TITLE = "Drink Water !!!"
    MESSAGE = "It's" + str(T.hour) + ":" + str(T.minute) + ", time to drink water."
    DURATION = 10
    notification.notify(title=TITLE,message=MESSAGE,timeout=DURATION)
    time.sleep(3600)

# C:\Users\USERNAME\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup