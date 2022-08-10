const fs=require("fs");
let text=fs.readFileSync("abcd.txt","utf-8");
text=text.replace("hello hi","Hare Krishna");

fs.writeFileSync("abcd.txt",text);
text=fs.readFileSync("abcd.txt","utf-8");
console.log(text);