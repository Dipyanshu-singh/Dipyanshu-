// Select elements
let title = document.getElementById("title");
let button = document.getElementById("btn");

// Add event
button.addEventListener("click", function() {
    title.textContent = "Button Clicked!";
    title.style.color = "blue";
});