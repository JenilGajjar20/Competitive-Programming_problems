/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function (arr1, arr2) {
  // Combine both arrays
  var joinedArray = arr1.concat(arr2);

  // Create an object to store unique objects based on id
  var uniqueObjects = {};

  // Iterate through the joined array
  for (var i = 0; i < joinedArray.length; i++) {
    var obj = joinedArray[i];
    var id = obj.id;

    // If this id already exists in the unique objects, merge the properties
    if (uniqueObjects[id]) {
      uniqueObjects[id] = Object.assign(uniqueObjects[id], obj);
    } else {
      // If it's a new id, simply add it to the unique objects
      uniqueObjects[id] = obj;
    }
  }

  // Convert the unique objects back to an array
  var resultArray = Object.values(uniqueObjects);

  // Sort the result array by id in ascending order
  resultArray.sort(function (a, b) {
    return a.id - b.id;
  });

  return resultArray;
};
