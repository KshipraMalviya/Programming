// console.log("Hello World");
// const http = require('http');

// const hostname = '127.0.0.1';
// const port = 3000;

// const server = http.createServer((req, res) => {
//   res.statusCode = 200;
//   res.setHeader('Content-Type', 'text/html');
//   res.end(`<!DOCTYPE html>
//   <html lang="en">
//   <head>
//       <meta charset="UTF-8">
//       <meta http-equiv="X-UA-Compatible" content="IE=edge">
//       <meta name="viewport" content="width=device-width, initial-scale=1.0">
//       <title>Forms</title>
//       <style>
//           #btn{
//               background-color: rgb(186, 245, 255);
//               color: black;
//               border-radius: 18px;
//               margin: 0px 28px;
//           }
//           #btn:hover{
//               background-color: rgb(23, 212, 222);
//               color: black;
//           }
//           .textbox{
//               border-radius: 8px;
//           }
//       </style>
//   </head>
//   <body>
//       <h1>Form</h1>
//       <form action="backend.php">
//           <div>
//               Name : <input type="text" class="textbox" name="myName">
//           </div>
//           <br>
//           <div>
//               Role : <input type="text" class="textbox" name="myRole">
//           </div>
//           <br>
//           <div>
//               Email : <input type="email" class="textbox" name="myEmail" id="">
//           </div>
//           <br>
//           <div>
//               Date : <input type="date" class="textbox" name="myDate" id="">
//           </div>
//           <br>
//           <div>
//               Bonus : <input type="number" class="textbox" name="myBonus" id="">
//           </div>
//           <br>
//           <div>
//               Are you eligible? : <input type="checkbox" name="eligiblity" id="" checked>
//           </div>
//           <br>
//           <div>
//               Gender : Male <input type="radio" name="myGender" id=""> Female <input type="radio" name="myGender" id="">Other <input type="radio" name="myGender" id="">
//           </div>
//           <br>
//           <div>
//               Write about yourself : <br> <textarea name="myText"  class="textbox" id="" cols="30" rows="10"></textarea>
//           </div>
  
//           <br>
//           <div>
//               <label for="car">Car</label>
//               <select name="myCar" id="car">
//                   <option value="mercedes">Mercedes</option>
//                   <option value="BMW">BMW</option>
//               </select>
//           </div>
//           <br>
  
//           <div>
//               <label for="pwd">Password:</label>
//               <input type="password" id="pwd" minlength="8">
//           </div>
  
//           <br>
//           <br>
//           <div>
//               <input type="reset" id ="btn" value="Reset">
//               <input type="submit" id ="btn" value="Submit">
//           </div>
//       </form>
//   </body>
//   </html>`);
// });

// server.listen(port, hostname, () => {
//   console.log(`Server running at http://${hostname}:${port}/`);
// });