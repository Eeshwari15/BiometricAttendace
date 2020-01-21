#!/C:/Program Files (x86)/Microsoft Visual Studio/Shared/Python37_64/python.exe

from wsgiref.handlers import CGIHandler
from run import app

CGIHandler().run(app)