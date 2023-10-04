/**
 * @param {number} n
 * @return {Function} counter
 */
let createCounter = function (n) {
  let count = n;

  /**
   * This function increments and returns the counter value.
   * @returns {number} The current value of the counter.
   */

  const counter = () => {
    return count++;
  };

  return counter;
};

const counter = createCounter(10);
counter();
counter();
counter();
