function xorPattern(lastTwoDigits) {
    // The fixed part of the sequence
    const baseArray = [2, 0, 2, 4, 1, 0, 1, 7, 0, 1, 0, 6];
    
    // Concatenate the fixed array with the last two digits
    const fullArray = baseArray.concat(lastTwoDigits);

    // Calculate the XOR for the entire array
    let xorResult = fullArray.reduce((acc, num) => acc ^ num, 0);
    
    // Apply modulo 10 to ensure the result is within 0-9
    xorResult = xorResult % 10;
    
    // Print the array and its XOR result
    console.log(fullArray.join(' ') + " = " + xorResult);
}

// Get command-line arguments
const args = process.argv.slice(2);

// Convert arguments to numbers
if (args.length !== 2) {
    console.error("Please provide exactly two digits (0-9) as arguments.");
    process.exit(1);
}

const lastTwoDigits = args.map(arg => {
    const num = parseInt(arg, 10);
    if (isNaN(num) || num < 0 || num > 9) {
        console.error("Please enter valid digits (0-9).");
        process.exit(1);
    }
    return num;
});

// Call the xorPattern function
xorPattern(3,4);
