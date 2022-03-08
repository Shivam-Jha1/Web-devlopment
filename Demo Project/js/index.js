//Game constants variable

let direction = {x: 0,y: 0};
const foodSount = new Audio('');
const gameOverSound = new Audio('');
const moveSound = new Audio('');
const musicSound = new Audio('');
let speed = 2;
let lastPaintTime = 0;
letsnakeArr = [
    {x:13, y:15}
]

//Game functions

function main(ctime){
    window.requestAnimationFrame(main);
    console.log(ctime)
    if((ctime - lastPaintTime)/1000 < 1/speed){
        return;
    }
    lastPaintTime =ctime;
    gameEngine();

}

function gameEngine(){
//part 1: updating snake variable



//part 2: render snake and food
board.innerHTML = "";
snakeArr.forEach((e, index)=>{
    snakeElement = document.createElement('div');
    snakeElement.style.gridRowStart = e.y;
    snakeElement.style.gridColumnStart = e.x;
    snakeElement.classList.add('food')
    board.appendChild(snakeElement);
})
}















//main logic
window.requestAnimationFrame(main);