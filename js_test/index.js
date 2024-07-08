// const paramFn1 = () => console.log('hello param1');
// const paramFn2 = () => console.log('hello paramFn2');

// const parentFn = (func) => func(paramFn1, paramFn2);


// parentFn(function(fn1, fn2) {
//   let n = 1;

//   if(n ==1) {
//     fn1();
//   }else {
//     fn2();
//   }
// })

// const loadScript = function(src, callback) {
//   const script  = document.createElement('script');
//   script.src  = src;

//   script.onload = callback(null, script);
//   script.onerror = callback(new Error(`Failed to load script: ${src}`), script);

//   document.body.appendChild(script);
// }

// loadScript('https://cdnjs.cloudflare.com/ajax/libs/lodash.js/4.17.15/lodash.min.js', (err, script) => {
//   if (err) {
//     console.error(err);
//   } else {
//     console.log('lodash loaded successfully');
//   }
// })

// const loadScript = function(src){
//   return new Promise((resolve, reject) => {
//     const script  = document.createElement('script');
//     script.src  = src;

//     script.onload = resolve(script);
//     script.onerror = reject(new Error(`Failed to load script: ${src}`));

//     document.body.appendChild(script);
//   });
// }

// loadScript('https://cdnjs.cloudflare.com/ajax/libs/lodash.js/4.17.15/lodash.min.js').finally(() => console.log('Promise settled')).then(result => console.log('Promise resolved'))


// setTimeout(() => console.log('timeout'), 1000);


// function delay(ms) {
//   return new Promise((resolve, reject) => {
//     try{
//       setTimeout(() => resolve('timeout promise'), ms);
//     }catch(err) {
//       reject('error happend')
//     }
//   })
// }

// delay(1000).then((result) => console.log(result))









// new Promise(function(resolve, reject) {

//   setTimeout(() => resolve(1), 1000);

// }).then(function(result) {

//   alert(result); // 1

//   return new Promise((resolve, reject) => { // (*)
//     setTimeout(() => resolve(result * 2), 1000);
//   });

// }).then(function(result) { // (**)

//   alert(result); // 2

//   return new Promise((resolve, reject) => {
//     setTimeout(() => resolve(result * 2), 1000);
//   });

// }).then(function(result) {

//   alert(result); // 4

// });


// new Promise((resolve, reject) => {

//   throw new Error("Whoops!");

// }).catch(function(error) {

//   alert("The error is handled, continue normally");
//   return 123;

// }).then((result) => alert("Next successful handler runs" + result));

// let promise = Promise.reject(new Error("Promise Failed!"));
// setTimeout(() => promise.catch(err => alert('caught')), 1000);

// // Error: Promise Failed!
// window.addEventListener('unhandledrejection', event => alert(event.reason + 'ggg'));

export const  obj = {
    name: 'john',
}

obj.name = 'mehedi'

console.log(obj.name + 'indextjs')