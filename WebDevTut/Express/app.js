const express = require('express');
const path=require("path");
const app=express();
const port=80;

app.use('/static', express.static('static'))

//Set the template engine as pug
app.set('view engine', 'pug')

//Set the views directory
app.set('views',path.join(__dirname,'views'))

app.get("/demo",(req,res)=>{
    res.status(200).render('demo',{title:'Hey', message: 'Kriti'})
});

app.get("/", (req,res)=>{
    res.status(200).send("This is home page of my first express app");
})

app.get("/about", (req,res)=>{
    res.send("This is about page of my first express app");
})

app.get("/this", (req,res)=>{
    res.status(404).send("Not Found");
})

app.post("/about", (req,res)=>{
    res.send("This is post request about page of my first express app");
})

app.listen(port,()=>{
    console.log(`The application started successfully on port ${port}`)
})