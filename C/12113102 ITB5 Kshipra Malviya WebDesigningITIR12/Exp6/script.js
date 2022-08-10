let t=0;
let h=0;

function tossHelper() 
{
  let o = parseInt(Math.random() * 2);
  console.log(o);
  console.log(typeof o);
  if (o) 
  {
    document.getElementById("head").style.visibility = "visible";
    document.getElementById("tail").style.visibility="hidden";
    h=h+1;
    document.getElementById("hfreq").innerHTML=h;
    document.getElementById("hper").innerHTML=((h*100)/(h+t)).toPrecision(4)+"%";
    document.getElementById("tper").innerHTML=((t*100)/(h+t)).toPrecision(4)+"%";
  } 
  else 
  {
    document.getElementById("tail").style.visibility="visible";
    document.getElementById("head").style.visibility="hidden";
    t=t+1;
    document.getElementById("tfreq").innerHTML=t;
    document.getElementById("tper").innerHTML=((t*100)/(h+t)).toPrecision(4)+"%";
    document.getElementById("hper").innerHTML=((h*100)/(h+t)).toPrecision(4)+"%";
  }
}

function toss()
{
  document.getElementById("head").style.visibility = "hidden";
  document.getElementById("tail").style.visibility="hidden";
  setTimeout(tossHelper, 800); 
}

function reset()
{
  document.getElementById("hfreq").innerHTML="0";
  document.getElementById("tfreq").innerHTML="0";
  document.getElementById("hper").innerHTML="0";
  document.getElementById("tper").innerHTML="0";
  t=0; h=0;
  document.getElementById("head").style.visibility = "visible";
  document.getElementById("tail").style.visibility="hidden";
}
