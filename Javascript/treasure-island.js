const readline = require('readline');
const messages = require("./messages");
const images = require('./images');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


const app = async () => {

    console.log(images.treasureChest);
    console.log(messages.openingMessage);

    const chosenPath = await new Promise(resolve => {
        rl.question("You arrive at a crossroads. Which path do you take? Type 'left' or 'right':\n", resolve);
    });

    if (chosenPath != "left"){
        console.log(images.well);
        console.log(messages.chosenPathFail);
        rl.close();
    }

    console.log(messages.chosenPathSuccess);
    console.log(images.lake);
    console.log(messages.lakeMessage);

    const lakeDecision = await new Promise(resolve => {
        rl.question("You've come across the most beautiful lake it the world. Will you wait here or swim across? Type 'swim' or 'wait':\n", resolve);
    });

    if (lakeDecision != "wait"){
        console.log(images.fish);
        console.log(messages.lakeDecisionFail);
        rl.close();
    }
    
    console.log(messages.lakeDecisionSuccess);
    console.log(images.door);
    console.log(messages.doorMessage);

    const doorDecision = await new Promise(resolve => {
        rl.question("This is it. Three doors. Blue, Red and Yellow, what will it be? Type 'blue', 'red' or 'yellow':\n", resolve);
    });

    if (doorDecision == "blue"){
        console.log(images.beast);
        console.log(messages.doorFailureBeast);
        rl.close();
    }
    
    if (doorDecision =="red"){
        console.log(images.fire);
        console.log(messages.doorFailureFire);
        rl.close();
    }

    if (doorDecision == "yellow"){
        console.log(images.tiger);
        console.log(messages.doorSuccess);
        console.log(messages.exitMessage);
        rl.close();
    }

    console.log("I'm not even going to dignify that with a response.\n GAME OVER.\n");
    rl.close();
};

app();

rl.on('close', function () {
    process.exit(0);
  });