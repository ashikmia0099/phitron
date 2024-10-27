const loadData = () =>{
   const searchText = document.getElementById("search-box").value;
   
    fetch(`https://openapi.programming-hero.com/api/videos/categories ${searchText}`)
    .then((res) => res.json())
    .then((data) => console.log(data.data));
};