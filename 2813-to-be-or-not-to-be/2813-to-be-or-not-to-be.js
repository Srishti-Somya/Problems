/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    obj = {
        toBe(valu){
            if(valu === val){
                return true
            }
            else{
                throw new Error("Not Equal")
            }
        },
        notToBe(valu){
            if(valu !== val){
                return true;
            }
            else{
                throw new Error("Equal")
            }
        }
    }
    return obj
    // var toBe = function(valu){
    //     if(val === value){
    //         return {"value" : true};
    //     }
    //     else{
    //         return {"error" : "Not Equal"};
    //     }
    // }
    // function notToBe(valu){
    //     if(val !== value){
    //         return {"value" : true};
    //     }
    //     else{
    //         return {"error" : "Not Equal"};
    //     }
    // }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */