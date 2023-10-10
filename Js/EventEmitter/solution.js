class EventEmitter {
  constructor() {
    this.events = {}; // Initialize an empty object to store events and their associated callbacks
  }

  /**
   * Subscribe to an event with a callback function.
   * @param {string} eventName - Name of the event to subscribe to.
   * @param {Function} callback - The function to be called when the event is emitted.
   * @return {Object} - An object with an 'unsubscribe' method.
   */
  subscribe(eventName, callback) {
    if (!this.events[eventName]) {
      this.events[eventName] = []; // If the event doesn't exist yet, create an empty array to store callbacks
    }
    this.events[eventName].push(callback); // Add the callback to the list of callbacks for this event

    return {
      unsubscribe: () => {
        this.events[eventName] = this.events[eventName].filter(
          (cb) => cb !== callback
        );
        // Remove the callback from the list of subscriptions
      },
    };
  }

  /**
   * Emit an event and call all associated callbacks with optional arguments.
   * @param {string} eventName - Name of the event to emit.
   * @param {Array} args - Optional arguments to pass to the callbacks.
   * @return {Array} - An array of results from the callbacks.
   */
  emit(eventName, args = []) {
    if (this.events[eventName]) {
      return this.events[eventName].map((callback) => callback(...args));
      // Call each callback with the provided arguments and collect the results
    } else {
      return []; // If no callbacks are subscribed to the event, return an empty array
    }
  }
}

const emitter = new EventEmitter(); // Create a new instance of the EventEmitter

// Subscribe to the onClick event with onClickCallback
function onClickCallback() {
  return 99;
} // Define a callback function
const sub = emitter.subscribe("onClick", onClickCallback); // Subscribe to the 'onClick' event

emitter.emit("onClick"); // Emit the 'onClick' event, should return [99] as result of the callback
sub.unsubscribe(); // Unsubscribe from the 'onClick' event
emitter.emit("onClick"); // Emitting again, but no one is subscribed, should return []
