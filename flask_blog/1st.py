from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def hello_world():
    return "<h1>Hey man Whats`s up</h1>"
@app.route('/home')
def home():
    return render_template('istpage.html')

@app.route('/home/tony')
def tony():
    return "<h2> Whats`s up</h2>"
@app.route('/home/tony/bhag')
def bhag():
    return "<h3>  om om om </h3> "br" <p>sdsdksd</p>"
@app.route('/home/tony/bhag/boot')
def boot():
    return render_template('boot.html')

if __name__ == '__main__':
    app.run(debug = True)
