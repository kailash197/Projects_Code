#! /usr/bin/python3
from datetime import datetime
import smtplib
import requests
from email.mime.text import MIMEText
from bs4 import BeautifulSoup

# URL and target text
url = "https://pendragonfarms.ca/products"
target_text = "Our goat meat client list is closed. We may re-open it in Fall of 2026."

# Placeholder email configuration
EMAIL_FROM = "k.khadka343@gmail.com"
EMAIL_TO = EMAIL_FROM
EMAIL_SUBJECT = "Pendragon Farms Goat Meat Notice Changed"
SMTP_SERVER = "smtp.gmail.com"
SMTP_PORT = 587
EMAIL_USERNAME = "k.khadka343@gmail.com"
EMAIL_PASSWORD = "psvkolzlkaepohvy"
'''
Generate an App Password
Visit: https://myaccount.google.com/apppasswords
Choose:
App: Mail
Device: Other → name it something like “Goat Monitor”
Click Generate
Copy the 16-character password (no spaces)
'''

# Function to send email
def send_email(message):
    msg = MIMEText(message)
    msg["Subject"] = EMAIL_SUBJECT
    msg["From"] = EMAIL_FROM
    msg["To"] = EMAIL_TO

    with smtplib.SMTP(SMTP_SERVER, SMTP_PORT) as server:
        server.starttls()
        server.login(EMAIL_USERNAME, EMAIL_PASSWORD)
        server.send_message(msg)

# Function to check the website for changes
def check_website():
    response = requests.get(url)
    soup = BeautifulSoup(response.text, "html.parser")
    page_text = soup.get_text()
    return target_text in page_text

# Main loop to check every 3 hours
def monitor():
    check_time = str(datetime.now())
    if not check_website():
        send_email("The goat meat client list message has changed on Pendragon Farms website: https://pendragonfarms.ca/products")
    with open('/home/cybermonk/Projects/goat_monitor.log', 'a') as logfile:
        message = f'Last run: {check_time}\n'
        logfile.write(message)

# Start monitoring
monitor()
