

const loadData = (global) => {
    const searchText = document.getElementById("search-box").value;
    
    
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${searchText ? searchText:global}`)
        .then((res) => res.json())
        .then((data) => displayData(data.meals));
};

const displayData = (data) =>{
    document.getElementById("total-meals").innerText = data.length;

    const mealsContainer = document.getElementById("meals_container");

    data.forEach((meal) => {
        
        const card = document.createElement("div");
        card.classList.add("box");
        card.innerHTML = `
        <img class="box_img" src=${meal.strMealThumb} alt="">
        <h3>${meal.strMeal}</h3>
        <p>${meal.strInstructions.slice(0,50)}</p>
        <button onclick="displayModal('${meal.idMeal}')" 
        type="button" class="btn btn-primary" 
        data-bs-toggle="modal" data-bs-target="#exampleModal">
        Details
        </button>
        `;
        mealsContainer.appendChild(card);
    });
};

const displayModal = async(id) => {
    try{
        const response = await fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`);
        const data = await response.json();
        console.log(data.meals[0]);
    }
    catch{
        (err) =>{
            console.log(err);
        }
    }
};

loadData("a");




























//const loadData = () => {
//    fetch("https://openapi.programming-hero.com/api/videos/categories")
//        .then((res) => res.json())
//        .then((data) => {
//            displayButtons(data.data);
//            displayData(data.data, "All"); // Display initial data for "All" category
//        })
//        .catch((error) => console.error("Error fetching data:", error));
//};
//
//const displayButtons = (categories) => {
//    const buttonContainer = document.getElementById("buttonContainer");
//
//    categories.forEach((category) => {
//        const button = document.createElement("button");
//        button.innerText = category.title;
//        button.addEventListener("click", () => handleButtonClick(category.title));
//        buttonContainer.appendChild(button);
//    });
//};
//
//const handleButtonClick = (category) => {
//    // Clear previous content in tubeContainer
//    const tubeContainer = document.getElementById("tube_container");
//    tubeContainer.innerHTML = "";
//
//    // Fetch and display data for the selected category
//    fetch(`https://openapi.programming-hero.com/api/videos/${category.toLowerCase()}`)
//        .then((res) => res.json())
//        .then((data) => displayData(data.data, category))
//        .catch((error) => console.error("Error fetching data:", error));
//};
//
//const displayData = (datas, category) => {
//    const tubeContainer = document.getElementById("tube_container");
//
//    datas.forEach((data) => {
//        const card = document.createElement("div");
//        card.classList.add("AllBox");
//        card.innerHTML = `
//            <img src="" alt="">
//            <h3>${data?.title}</h3>
//            <p></p>
//            <button></button>
//        `;
//        tubeContainer.appendChild(card);
//    });
//
//    // Update the button style for the selected category
//    const buttons = document.querySelectorAll("#buttonContainer button");
//    buttons.forEach((button) => {
//        button.classList.toggle("active", button.innerText === category);
//    });
//};
//
//// Initial data load
//loadData();
//
//












