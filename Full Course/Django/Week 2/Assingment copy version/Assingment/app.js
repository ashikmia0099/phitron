
// const loadData = async() => {
//     try{
//         const response = await fetch("https://openapi.programming-hero.com/api/videos/categories"
//         );
//         const data = await response.json();
//         displayData(data.data);
    
//     } catch (error){
//         console.log(error);
//     };
// };




// // button section

// const displayData = (data) =>{

//     const button_divition = document.getElementById("button_section");

//     data.forEach ((Btn_category) => {
//         const buttones = document.createElement("div");
//         buttones.classList.add("dis_button");

//         buttones.innerHTML = `
//         <button class= "all_buttons" 
//         id= "${Btn_category.category_id}"
//         onclick= "show_button('${Btn_category.category_id}')">
//         ${Btn_category.category} </button>
//         `;
//         button_divition.appendChild(buttones);
//     });
// };


// // show content section 

// const cardData = async (cardId) => {
//     try {
//         const response = await fetch(`https://openapi.programming-hero.com/api/videos/category/${cardId}`);
//         const data = await response.json();

//         if(data.status) {
//             createCard = (data.data, data.status);
//             // addEventListener("click", () => {
//             // console.log(cardId);
//             // })
//         }
//         else {
//             // view_data = undefined;
//             // button 4 opps section_blew_1_line_code
//             Section_of_no_data =(data)
//         }
//     } catch (error){
//         console.log(error);
//     };
// };


// // main Section 

// const Main_section = document.getElementById("main_section");

// const createCard = (data ,data_status) => {

//     if(data_status){
//         while(Main_section.firstChild) {
//             Main_section.removeChild( Main_section.firstChild);
//         }

//         data.forEach((data) => {
//             const mainSection = document.createElement("div");
//             mainSection.classList.add("card_midify");
//             mainSection.innerHTML = `
//             <div class = "image_modify">
//                 <img src="${data.thumbnail}" alt="">
//                 <p></p>
//             </div>

//             <div>
//                 <div class"logo_section">
//                     <img src= "${data.authors[0].profile_picture}" alt="">
//                 </div>
//                 <div class="card_other_info">
//                     <h3>${data.title}</h3>
//                     <p class= "profile_name">${data.authors[0].profile_name}</p>
//                     <img src="${data.authors[0].verified}" alt="">
//                     <p>${data.others.views} views</p>
//                 </div>
//             </div>
//             `;
//             Main_section.appendChild(mainSection);
//         });
//     };
// };


// function hours_convertor(postedData){
    
// }

// loadData();
// cardData(1000);






// Load data function
const loadData = async () => {
    try {
      const response = await fetch("https://openapi.programming-hero.com/api/videos/categories");
      const data = await response.json();
      displayData(data.data);
    } catch (error) {
      console.log(error);
    }
  };
  
  // Button section
  const displayData = (data) => {
    const button_divition = document.getElementById("button_section");
  
    data.forEach((Btn_category) => {
      const buttones = document.createElement("div");
      buttones.classList.add("dis_button");
  
      buttones.innerHTML = `
        <button class="all_buttons" id="${Btn_category.category_id}" onclick="show_button('${Btn_category.category_id}')">
          ${Btn_category.category}
        </button>
      `;
      button_divition.appendChild(buttones);
    });
  };
  
  // Show content section
  const cardData = async (cardId) => {
    try {
      const response = await fetch(`https://openapi.programming-hero.com/api/videos/category/${cardId}`);
      const data = await response.json();
  
      if (data.status) {
        createCard(data.data, data.status);
      } else {
        // Assuming you have a function named Section_of_no_data to handle this case
        Section_of_no_data(data);
      }
    } catch (error) {
      console.log(error);
    }
  };
  
  // Main section
  const Main_section = document.getElementById("main_section");
  
  const createCard = (data, data_status) => {
    if (data_status) {
      while (Main_section.firstChild) {
        Main_section.removeChild(Main_section.firstChild);
      }
  
      data.forEach((data) => {
        const mainSection = document.createElement("div");
        mainSection.classList.add("card_midify");
        mainSection.innerHTML = `
          <div class="image_modify">
            <img src="${data.thumbnail}" alt="">
            <p></p>
          </div>
          <div class="flex_last">
            <div class="logo_section">
              <img src="${data.authors[0].profile_picture}" alt="">
            </div>
            <div class="card_other_info">
              <h3>${data.title}</h3>
              <p class="p_tag">${data.authors[0].profile_name}</p>
              <img src="${data.authors[0].verified ? './Verified.png':"./Unverified.png"}" alt="">
              <p>${data.others.views} views</p>
            </div>
          </div>
        `;
        Main_section.appendChild(mainSection);
      });
    }
  };
  
  // Function to convert hours (implement this based on your requirements)
  function hours_convertor(postedDate) {
    // Implement conversion logic here
  }
  
  // Call loadData to initiate the process
  loadData();
  // Assuming you want to initially show cards for a specific category (e.g., category_id = 1000)
  cardData(1000);
  