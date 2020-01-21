from flask import Flask
 
app = Flask(__name__)
 
@app.route('/helloesp')
def helloHandler():
    return 'Hello ESP8266, from Flask'
 

if __name__=='__main__':
	app.run(debug=True)
