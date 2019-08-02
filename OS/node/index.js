var express=require("express");
var app=express()
var port = process.env.PORT || 3000;
const path = require('path');
var bodyParser = require('body-parser');
app.use(bodyParser.urlencoded({ extended: false }));
app.use(bodyParser.json());

app.get('/',function(req,res){
    res.sendFile(path.join(__dirname+'/login.html'));
  });
app.get('/signup',function(req,res){
    res.sendFile(path.join(__dirname+'/signup.html'));
  });
app.post('/',function(req,res){
    console.log(req.body.name);
    res.send(req.body.name);
  });
var authenticateController=require('./controller/auth');
var registerController=require('./controller/register');
app.use(bodyParser.urlencoded({extended:true}));
app.use(bodyParser.json());
app.post('/api/register',registerController.register);
app.post('/api/authenticate',authenticateController.authenticate);
app.listen(port,function(){
    console.log("Server is running on port: "+port);
});