/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    start = init
    obj = {
        increment(){
            start++
            return start
        },
        reset(){
            start = init
            return start
        },
        decrement(){
            start--
            return start
        }
    }
    return obj
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */