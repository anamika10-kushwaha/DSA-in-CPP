// console.log("hello");
// window.console.log("hello bro")
// console.dir(window.document);//print properties of document
// console.log(window.document);//print document
//we write only document instead of window.document because window object is global
// console.log(document);
// console.log(document.body);
// console.dir(document.body);
// console.dir(document.body.childNodes[1]);
// console.log(document.body.childNodes[1]);
// let header=document.getElementById("heading");
// let header=document.getElementsByClassName("heading");
// let header=document.getElementsByTagName("p");
// let headings=document.getElementsByClassName("heading");
// console.dir(headings);
// console.log(headings);
// let firstele=document.querySelector(".heading");
// let firstele=document.querySelector("#heading")
// console.dir(firstele);
// console.log("tagname=",firstele.tagName);//'h1'
// let allele=document.querySelectorAll(".heading");
// let allele=document.querySelectorAll("#heading");
// console.dir(allele);
// console.log("inner text=",allele.innerText);
// console.dir(header);
// console.log(header);
// let newSelector=document.querySelector("p");//returns first element
// console.log("tagname=",newSelector.tagName);
// console.log("innertext=",newSelector.innerText);
// console.log(newSelector);
// console.dir(newSelector);
// let new2=document.querySelectorAll("p");
// console.dir(new2);
// let parahs=document.querySelector("p");
// console.log(parahs);
// let childNodes=parahs.childNodes;
// console.log(childNodes);
// console.dir(parahs);
// let p1=document.getElementById("first");
// console.log(p1);
// let append=document.querySelector("h2");
// append.innerText=append.innerText+" from apna college";
// console.dir(append);
// console.log(append);
// let divs=document.querySelector("#box");
// console.log(divs);
// let h2=document.querySelector("h2");
// h2.style.backgroundColor="black";
// h2.style.color="white";
// let create=document.querySelector("h1");
// let add=document.createElement("p");
// add.innerText="quality superb!";
// create.before(add);
// let create=document.querySelector("h1");
// let newDiv=document.createElement("div");
// newDiv.innerText="enjoying your own vibes";
// newDiv.style.backgroundColor="blue";
// let ret=create.appendChild(newDiv);
// console.log(ret);
//  const p = document.createElement("p");
//  p.innerText="this is our new method";
//  create.append(p);
//  let rem=create.removeChild(p);
//  console.log(rem);
// let newBtn=document.createElement("button");
// newBtn.innerText="click me!";
// newBtn.style.backgroundColor="red";
// newBtn.style.Color="white";
// let el=document.querySelector("body");
// el.prepend(newBtn);
// let parah=document.querySelector(".lorem");
// parah.setAttribute("class","newLorem");
// parah.classList.add("newLorem");
// parah.classList.replace("lorem","newLorem");
// parah.classList.remove("lorem");
//  create.removeChild(p);
// const parent = document.getElementById("box");
// const child = document.createElement("div");
// child.textContent = "Hello";
// // parent.append(child); // ✅ Works
// // parent.append("World"); // ✅ Works — adds a text node
// parent.append(child, " and Universe"); // ✅ Multiple items
// let id=divs.getAttribute("id");
// let src=divs.getAttribute("src");
// console.log("src=",src);
// src=divs.setAttribute("src","linkedin");
// console.log("newsrc=",src);
// console.log("id=",id);
// let idx=1;
// for(div of divs){
//     div.innerText=`new unique value ${idx}`;
//     idx++;
// }
// console.log(divs.innerText);
// console.log(divs.innerText);
// divs[0].innerText="hey";
// divs[1].innerText="hlo";
// divs[2].innerText="hii";
// console.log("after changes=",divs.innerText);
// let parahs = document.querySelectorAll("p");

// parahs.forEach((p, index) => {
//     console.log(`Child nodes of paragraph ${index + 1}:`, p.childNodes);
// });
//events=lecture-08;
// let evented=document.querySelector("#event");
// evented.onclick = () =>{
//     console.log("hey gorgeous");
// }
// let =document.querySelector(".lorem");
// lorem.onclick = () =>{
//     console.log("hey lorem!");
// }
//  evented=document.querySelector("#event");
// evented.onmouseover = () =>{
//     console.log("hey,this is just for check!");
// }
// let btn=document.querySelector("button");
// btn.onclick = (evt) =>{
//     // console.log("button was clicked by old way!");
//     console.log(evt.key);
// //     console.log(evt.type);
// //     console.log(evt.target,evt.clientX,evt.clientY);
// }
// // btn.addEventListener("click", (evt) =>{
//     console.log("button clicked by new way!");
//     console.log(evt);
//     console.log(evt.type);
//     console.log(evt.target,evt.clientX,evt.clientY);
// }
// );
// let btn=document.querySelector("button");
// const handler= () =>{
//     console.log("event was handled by handler-3");

// }
// btn.addEventListener("click",() =>{
//     console.log("event was handled by handler-1");
// });
// btn.addEventListener("click",() =>{
//     console.log("event was handled by handler-2");
// });
// btn.addEventListener("click",handler);
// btn.addEventListener("click",() =>{
//     console.log("event was handled by handler-4");
// });
// btn.addEventListener("click",() =>{
//     console.log("event was handled by handler-5");
// });
// const remove=btn.removeEventListener("click",handler);
// console.log("removing element=",remove);//  it gives undefined
//events by mdn
// const btn = document.querySelector("button");

// function random(number) {
//   return Math.floor(Math.random() * (number + 1));
// }

// btn.addEventListener("click", () => {
//   const rndCol = `rgb(${random(255)} ${random(255)} ${random(255)})`;//188
//   document.body.style.backgroundColor = rndCol;
// });
// let btn=document.querySelector("button");
// let mode="light";
// btn.addEventListener("mouseout",
//     () =>{
//         if(mode=="light"){
//             mode="dark";
//             // document.body.style.backgroundColor="dark";
//             // document.querySelector("body").style.backgroundColor="black";
//             document.querySelector("body").classList.add("dark");
//             document.querySelector("body").classList.remove("light");
//         }
//         else if(mode=="dark"){
//             mode="light";
//             // document.body.style.backgroundColor="light";
//             // btn.style.backgroundColor="light";
//             // document.querySelector("body").style.backgroundColor="white";
//             document.querySelector("body").classList.add("light");
//             document.querySelector("body").classList.remove("dark");
//         }
//         console.log("mode =",mode);
//     }
// );
// let video=document.querySelector("video");
// video.addEventListener("play",
//     () =>{
//        document.querySelector("body").style.backgroundImage="url('nature-drawing-55.jpg')";
//     }
// );
// const textBox = document.querySelector("#input");
// const output = document.querySelector("#output");
// textBox.addEventListener("keyup", (event) => {
//   output.textContent = `You pressed "${event.key}".`;
// });
//submit and e.preventDefault() 
// let fname=document.querySelector("#fname");
// let lname=document.querySelector("#lname");
// let para=document.querySelector("#para");
// let form=document.querySelector("form");
// let submit=document.querySelector("#submit");
// form.addEventListener("submit",
//     (evt) => {
//         if(fname.value==="" || lname.value===""){
//             evt.preventDefault();
//             para.textContent="you neeed to fill both names";
//         }
//     }
// );
const form = document.querySelector("form");
const fname = document.getElementById("fname");
const lname = document.getElementById("lname");
const para = document.querySelector("p");

form.addEventListener("submit", (e) => {
  if (fname.value === "" || lname.value === "") {
    e.preventDefault();//stops the submission
    // para.textContent = "You need to fill in both names!";
    alert("you need to fill both names");
  }
});
//events bubbling
// let bubble=document.querySelector("#bubbling");
// let span=document.querySelector("#span");
// bubble.addEventListener("click",
//     () =>{
//         span.textContent="you only acceses parent tag but here button is clicked  that is bubbling";
//     }
// )
// const output = document.querySelector("#output");
// function handleClick(e) {
//   output.textContent += `You clicked on a ${e.currentTarget.tagName} element\n`;
// }

// const container = document.querySelector("#container");
// // container.addEventListener("click", handleClick);
// container.onclick = (e) => {
//     output.textContent += `You clicked on a ${e.currentTarget.tagName} element\n`;
// }
//dom revision
// let heading=document.querySelector("h2");
// let text=heading.innerText;
// heading.innerText=text+" from apnaCollege Students";
// let divs=document.querySelectorAll(".box");
// divs.innerText="boxes";
// // let parahs=document.getElementById("para");
// // console.log(parahs.firstElementChild.textContent);
// const list = document.getElementById("list");
// console.log(list.firstElementChild.textContent);
// const node = document.documentElement.firstChild;
// if (node.nodeType !== Node.COMMENT_NODE) {
//   console.warn("You should comment your code!");
// }
let input=document.querySelector("#input");
let screen=document.querySelector("#screen");
input.addEventListener("keydown",
  (evt)=>{
    screen.textContent=`you type ${evt.key}`;
  }
);