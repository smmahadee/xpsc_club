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


class MyPromise {
  constructor(executor) {
      this.state = 'pending';
      this.value = undefined;
      this.reason = undefined;
      this.onFulfilledCallbacks = [];
      this.onRejectedCallbacks = [];

      const resolve = (value) => {
          if (this.state === 'pending') {
              this.state = 'fulfilled';
              this.value = value;
              this.onFulfilledCallbacks.forEach(callback => callback(this.value));
          }
      };

      const reject = (reason) => {
          if (this.state === 'pending') {
              this.state = 'rejected';
              this.reason = reason;
              this.onRejectedCallbacks.forEach(callback => callback(this.reason));
          }
      };

      try {
          executor(resolve, reject);
      } catch (err) {
          reject(err);
      }
  }

  then(onFulfilled, onRejected) {
      onFulfilled = typeof onFulfilled === 'function' ? onFulfilled : value => value;
      onRejected = typeof onRejected === 'function' ? onRejected : reason => { throw reason };

      const promise2 = new MyPromise((resolve, reject) => {
          if (this.state === 'fulfilled') {
              setTimeout(() => {
                  try {
                      const x = onFulfilled(this.value);
                      resolvePromise(promise2, x, resolve, reject);
                  } catch (err) {
                      reject(err);
                  }
              }, 0);
          }

          if (this.state === 'rejected') {
              setTimeout(() => {
                  try {
                      const x = onRejected(this.reason);
                      resolvePromise(promise2, x, resolve, reject);
                  } catch (err) {
                      reject(err);
                  }
              }, 0);
          }

          if (this.state === 'pending') {
              this.onFulfilledCallbacks.push(() => {
                  setTimeout(() => {
                      try {
                          const x = onFulfilled(this.value);
                          resolvePromise(promise2, x, resolve, reject);
                      } catch (err) {
                          reject(err);
                      }
                  }, 0);
              });

              this.onRejectedCallbacks.push(() => {
                  setTimeout(() => {
                      try {
                          const x = onRejected(this.reason);
                          resolvePromise(promise2, x, resolve, reject);
                      } catch (err) {
                          reject(err);
                      }
                  }, 0);
              });
          }
      });

      return promise2;
  }

  catch(onRejected) {
      return this.then(null, onRejected);
  }

  static resolve(value) {
      if (value instanceof MyPromise) {
          return value;
      }

      return new MyPromise((resolve, reject) => {
          resolve(value);
      });
  }

  static reject(reason) {
      return new MyPromise((resolve, reject) => {
          reject(reason);
      });
  }

  static all(promises) {
      return new MyPromise((resolve, reject) => {
          let results = [];
          let completed = 0;

          const processResult = (index, value) => {
              results[index] = value;
              completed += 1;
              if (completed === promises.length) {
                  resolve(results);
              }
          };

          promises.forEach((promise, index) => {
              MyPromise.resolve(promise).then(value => {
                  processResult(index, value);
              }, reject);
          });
      });
  }

  static race(promises) {
      return new MyPromise((resolve, reject) => {
          promises.forEach(promise => {
              MyPromise.resolve(promise).then(resolve, reject);
          });
      });
  }
}

function resolvePromise(promise2, x, resolve, reject) {
  if (promise2 === x) {
      return reject(new TypeError('Chaining cycle detected for promise'));
  }

  let called = false;

  if ((x !== null) && (typeof x === 'object' || typeof x === 'function')) {
      try {
          let then = x.then;
          if (typeof then === 'function') {
              then.call(x, y => {
                  if (called) return;
                  called = true;
                  resolvePromise(promise2, y, resolve, reject);
              }, reason => {
                  if (called) return;
                  called = true;
                  reject(reason);
              });
          } else {
              resolve(x);
          }
      } catch (err) {
          if (called) return;
          called = true;
          reject(err);
      }
  } else {
      resolve(x);
  }
}

// Example usage:
const promise = new MyPromise((resolve, reject) => {
  setTimeout(() => {
      resolve('Success!');
  }, 1000);
});

promise.then(value => {
  console.log(value); // "Success!" after 1 second
});
