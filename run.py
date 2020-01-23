import os
from flask import Flask
port = int(os.environ.get('PORT', 5000))

app = Flask(__name__)
 
@app.route('/')
def helloHandler():
    return 'Hello ESP8266, from Flask'
 

if __name__=='__main__':
    app.run(host='127.0.0.1', port=port, debug=True)

