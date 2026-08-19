// fullName="anamika kushwaha";
// var age=12; age=13;
// // console.log(age);
// {
// let age=34;
// age=23;
// }
// // console.log(age);
// let price=24.6;
// isFollow=true;
// let a;
// let b=null;
// let x=BigInt(123);
// let y=Symbol("hello!");
// const student={
//     name:"anamika",
//     age:18,
//     sgpa:9.18,
//     ispass:true
// };
// student.sgpa=student.sgpa+1;
// student["age"]=student["age"]+2;
// // console.log(student["sgpa"]);
// // console.log(student.age);
//  const product={
//      title:"win black ball pen",
//     rating:4,
//     offer:5,
//     price:270
// };
// console.log(product);
// let aged=10; aged=20;
// // console.log(aged);
// // console.log(c);.
// age=18;
// fullName="anamika";
// isMature=true;
// d=null;
// x=undefined;
// let z=BigInt("7985");
// let s=symbol("kushwaha");
// // const margin={
// //     price:2500,
//     availability:"any time",
//     discount:2
// };
// const profile={
//     username:"@anamika",
//     isFollow:false,
//     followers:34,
//     following:90,
//     posts:5,
//     bio:"master in javascript"
// };
// console.log(profile);
//lec=02
// let a,b,c;
// a=2;b=12;
// c=a+b;
// d=b**a;
// console.log(d);
// let p=3,q=5;
// console.log("p=",p, " & b=",q);
// p+=1;
// q--;
// console.log("after increment and decrement respective values are=",p,"and ",q);
// let n=3,m="3";
// console.log(n===m);
// let g,h;
// g=(n===m);//g=false
// h=(n!==m);//h=true
// console.log("g&&h=",g&&h);//true
// console.log(!g);//true
// n=n**3;
// console.log("n=",n);//n=27
// console.log("++n=",++n);//n=4
// console.log("n++=",n++);//print n=3
// console.log("n=",n);//n=4
//ternary operators
// let num1=8;
// // num1%2==0?console.log("even"):console.log("odd");//first method
// let result=num1%2==0? ("even"):("odd");//second method
// // console.log("num=",result);
// const foo = 1;
// let output = "Output: ";
// switch (foo) {
//   case 0:
//     output += "So ";
//   case 1:
//     output += "What ";
//     output += "Is ";
//   case 2:
//     output += "Your ";
//   case 3:
//     output += "Name";
//   case 4:
//     output += "?";
//     // console.log(output);
//     break;
//   case 5:
//     output += "!";
//     // console.log(output);
//     break;
//   default:
//     // console.log("Please pick a number from 0 to 5!");
// }
// const Animal = "Giraffe";
// switch (Animal) {
//   case "Cow":
//   case "Giraffe":
//   case "Dog":
//   case "Pig":
//     // console.log("This animal is not extinct.");
//     break;
//   case "Dinosaur":
//   default:
//     // console.log("This animal is extinct.");
// }
// const food = 5;
// switch (food) {
//   case 2:
//     // console.log(2);
//     break; // it encounters this break so will not continue into 'default:'
//   default:
//     // console.log("default");
//   // fall-through
//   case 1:
//     // console.log("1");
// }
// let expr="litchi";
// switch (expr) {
//   case "Oranges":
//     // console.log("Oranges are $0.59 a pound.");
//     break;
//   case "Apples":
    // console.log("Apples are $0.32 a pound.");
//     break;
//   case "Bananas":
//     // console.log("Bananas are $0.48 a pound.");
//     break;
//   case "Cherries":
//     // console.log("Cherries are $3.00 a pound.");
//     break;
//   case "Mangoes":
//   case "Papayas":
//     // console.log("Mangoes and papayas are $2.79 a pound.");
//     break;
//   default:
//     // console.log(`Sorry, we are out of ${expr}.`);
// }
// // console.log("Is there anything else you'd like?");
// const action = "say_hello";
// switch (action) {
//   case "say_hello": {
//     const message = "hello";
//     // console.log(message);
//     break;
//   }
//   case "say_hi": {
//     const message = "hi";
//     // console.log(message);
//     break;
//   }
//   default: {
    // console.log("Empty action received.");
//   }
// }
// let expression="a";
// switch(expression){
//     case "a":{
//         const button1="submit";
//         // console.log(button1);
//         break;
//     }
//     case "b":{
//         const button2="reset";
//         // console.log(button2);
//     }
// }
// // alert("hey broo!");//one time pop-ups
// userName=prompt("enter the name=");
// console.log("username=",userName);//anamika
// let score=prompt("enter score of student=");
// if(score>=80 && score<=100){
//     console.log("grade=A");
// }
// else if(score>=70 && score<=79){
//     console.log("grade=B");
// }
// else if(score>=60 && score<=69){
//     console.log("grade=C");
// }
// else if(score>=50 && score<=59){
//     console.log("grade=D");
// }
// else{
//     console.log("grade=F");
// }
// 
// for(let i=0;i<30000;i++){
//     console.log("anamika");
// }
//sum upto 5
// let i,sum=0,o=5;
// for(i=1;i<=o;i++){
//     sum=sum+i;
// }
// // console.log("sum upto 5=",sum);
// //for of loop
// let nickName="Anamika!";
// let size=0;
// for(let j of nickName){
//     console.log("j=",j);
//     size++;
// }
// console.log("size of string=",size);
// //for in loop
// const man={
//     sirName:"thakur",
//     height:10,
//     color:"white",
// };
// for(let key in man){
//     console.log("key=",key, ",", "value=",man[key]);
// }
// let gameNumber=23;
// let userNumber=prompt("guess the number?");
// while(userNumber!=gameNumber){
//     // console.log("guess something else!");
//     userNumber=prompt("you guess wrong number.guess again?");
// }
//     console.log("congratulations, its correct .you wins the game");
// if(userNumber==gameNumber){
//     console.log("yes,its correct.you wins the game!");
// }
// else{
//     console.log("no,guess something else");
// }
// let rep="anamika is a bad girl and cheap girl";
// console.log(rep.charAt(3));
// // console.log(rep.replace("m","r"));
// console.log(rep.replaceAll("girl","person"));
// console.log(34+"hello"+2);
// let str1="central";
// let str2="Processing";
// // let res=str1.concat(str2);
// let str3="Unit";
// console.log("full form of cpu="+str1+str2+str3);
// // let finalRes=res.concat(str3);
// // console.log("CPU=",finalRes);
// let strOld="anamika jann";
// console.log(strOld.trim());
// console.log(strOld.slice(3));
// console.log(strOld);
// let strNew="anamika ji";
// let vim=strNew.toUpperCase();
// console.log(strNew);
// console.log(vim);
// // console.log(strNew);
// console.log(strNew.length);
// let jnn=`special type of string`;
// console.log(jnn);
// console.log(jnn.length);
// console.log(jnn[8])
// let obj1={
//     item:"eraser",
//     price:10
// };
// // let otp=`the price of ${obj.item} is ${obj.price} rupees`;
// // let otp="the price of ", obj1.item, "is", obj1.price  ,"rupees";
// console.log("the price of ", obj1.item, "is", obj1.price  ,"rupees");
// console.log(`solved value is ${1+3+4+2}`);
// let string="anamika is a good girl\tshe is also cute too";
// console.log(string);
// let fullName=prompt("enter your full name=");//anamikakushwaha
// let length=fullName.length;//15
// let userName="@"+fullName+length;
// console.log("generated username=",userName);//@anamikakushwaha15
// let inc="entertainment is very necessary for an inidividual";
// let finals=inc.endsWith("ment");
// let finals=inc.includes("entertain");
// let finals=inc.indexOf("v");
// console.log("result=",finals);
// let group={
//   st1:78,
//   st2:70,
//   st3:45,
//   st4:90,
//   st5:56
// };
// for(let value in group){
//   console.log("values=",value);
// }
// let marks=[85,97,44,37,76,60];
// let sum=0;
// for(let i=0;i<marks.length;i++){
//   // console.log(marks[i]);
//   sum=sum+marks[i];
// }
// let avg=sum/marks.length;
// console.log(`average of the marks=${avg}`);
// //question=2
// let prices=[250,645,300,900,50];
// for(let off=0;off<prices.length;off++){
//   let offer=prices[off]*0.1;
//   prices[off]=prices[off]-offer;
//   console.log(`value at index ${off}=${prices[off]}`);
// }
// let upperClothes=["shirt","sceevy","hoodie","kurti"];
// // let newVal=upperClothes.shift();
// let newVal=upperClothes.slice(3);
// console.log(newVal);
// console.log(upperClothes);
// let arr=[1,2,3,4,5,6,7];
// arr.splice(2,2,8,9);
// console.log(arr);
//to remove the element
// arr.splice(2,1);//delete 3
// console.log(arr);
//to add some value
// arr.splice(2,0,2.1,2.2);
// console.log(arr);
//to replace
// arr.splice(1,1,2.7);
// let arr=["bloomberg","microsoft","uber","google","IBM","netflix"];
// arr.shift();
// arr.splice(2,1,"ola");
// arr.push("amazon");
// console.log(arr);
// function sum(a,b){
//     let s;
//     s=a+b;
//     console.log("sum =",s);
// }
// sum(5,6);
// let val=(a,b)=>{
//   // console.log(a*b);
//   return a*b;
// };
// let fun=()=>{
//   console.log("anamika");
// };
// function vowels(string){
//   let v=0;
//   for(let val of  string){
//     if(val=="a"||val=="e"||val=="i"||val=="o"||val=="u"){
//       v++;
//     }
//   }
//   return v;
// }
// let arr=(string)=>{
//   let v=0;
//   for(let val of  string){
//     if(val=="a"||val=="e"||val=="i"||val=="o"||val=="u"){
//       v++;
//     }
//   }
//   return v;
// };
// let arr=["dog","cat","rat","bat","hut","cap"];
// arr.forEach(
//   // function myfun(val){
//   (val)=>
//   {
//     console.log(val);
//   }
// );
// let arr1=[1,2,3,4,5,6,7,8,9,10];
// let newarr=arr1.map(
//   (val)=>{
//     return(val*val);
//   }
// );
// //map=true false value but here filter gives variable
// let arr2=[67,89,25,68,92,50];
// let oddArr=arr2.filter(
//   (val)=>{
//     return val%2!==0;
//   }
// );
// let arr=[80,90,54,97,93,10,89,95];
// let geniusStu=arr.filter(
//   (val)=>{
//     return val>90;
//   }
// );
// let newwayarr=[];
// let no=prompt("enter the number");
// for(let i=0;i<no;i++){
//   newwayarr[i]=i+2;
// }
// let sum=newwayarr.reduce(//2,3,4,5,6 sum=20; product=720
//   (prev,curr)=>{
//     return prev+curr;
//   }
// );
// let prod=newwayarr.reduce(
//   (prev,curr)=>{
//     return prev*curr;
//   }
// );
// console.log("product of elements of array=",prod);
// console.log("sum of elements of array=",sum);
//1,2,8,9,5,6,7
// let downClothes=["baggyJeans","trouser","pant"];
// lTax(){
//     console.log("tax =",this.salary);
//   },
// };

// const anamika={
//   salary:100,
// };
// anamika.__proto__=employee;et partyWear=["frock","gown"];
// let clothes=upperClothes.concat(downClothes,partyWear);
// console.log("new array=",clothes);
// console.log("initial array",clothes);
// clothes.push("trouser");
// console.log("after change array",clothes);

//225,580,270,810,45
// console.log(classes["st1"]);//78
// classes.st1=classes.st1+3;
// console.log(classes.st1);//81
// let animals=["cat","dog","camel","cow","donkey","zebra","monkey"];
// for(let idx in animals){
//   console.log(idx);
// }
// let str="ANAMIKA";
// for(let value in str){
//   console.log("value=",value);
// }
// for(let i=0;i<animals.length;i++)
// let i=0;
// while(i<animals.length)
// {
//   console.log(animals[i]);
//   i++;
// }
// do{
//   console.log(animals[i]);
//   i++;
// }while(i<animals.length);
// const student={
//   fullName:"anamika",
//   marks:100,
//   printmarks(){
//     console.log("marks=",this.marks);
//   },
// };
// const employee={
//   calc
//classess
// class company1{
//   // constructor(nameOFemployee){
//   constructor(tag){
//     console.log(tag);
//   }
//     // this.fullName=nameOFemployee;
//   // }
//   dressCode(){
//     console.log("formal");
//   }
//   identityCard(){
//     console.log("valid");
//   }

// //  detail(name){
// //     this.fullName=name;
// //   }
// }
// class company2 extends company1{
//   constructor(tag){
//     super(tag);
//     this.companyTag=tag;
//   }
//   fullName="anamika";
//   name(){
//     console.log("name=",this.fullName);
//   }
// }
// // class company2 extends company1{
// //   salary=200000;
// // }
// let employee1=new company2("symbol");
// // employee1.detail("anamika");
// let DATA="secret infromaion";
// class user{
//   constructor(name,email){
//     this.name=name;
//     this.email=email;
//   }
//   viewData(){
//     console.log("data=",DATA);
//   }
// }
// class admin extends user{
//   editData(){
//     DATA="you may edit here";
//   }
// }
// // let student1=new user("anamika","anamika@gmail.com");
// let admin1=new admin("anamika","anamika@gmail.com");
//error handling
// let a=3;
// let b=4;
// console.log("a+b=",a+b);
// try{
// console.log("a*b=",a*c);}
// catch(err){
//   // console.log(err);
// }
// console.log("a-b=",a-b);
console.log("one");
console.log("two");
setTimeout(
  () => {
    console.log("anamika");
  },2000//2s=2000ms
);
console.log("three");
console.log("four");
