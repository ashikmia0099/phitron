// Content load section
const loadContent = async () => {
  try {
    const response = await fetch(
      "https://openapi.programming-hero.com/api/videos/categories"
    );

    if (!response.ok) {
      throw new Error(`Error status: ${response.status}`);
    }
    const data = await response.json();
    createApiButton(data.data);
  } catch {
    (error) => {
      console.log(error);
    };
  }
};

// api button creation
const ApiBarSection = document.getElementById("Api_bar_section");

const createApiButton = (data) => {
  data.forEach((dataInfo) => {
    const divElement = document.createElement("div");
    divElement.classList.add("api_bar");

    divElement.innerHTML = `
    <button class="All_buton" id="${dataInfo.category_id}" onclick ="showCards('${dataInfo.category_id}')">${dataInfo.category}</button>
    `;
    ApiBarSection.appendChild(divElement);
  });
};



// Show content with sort function 


const parseViews = (viewsString) => {
  const multiplier = viewsString[viewsString.length] == "K" ? 1000 : viewsString[viewsString.length] == 'M' ? 1000000 : 1;
  return parseFloat(viewsString) * multiplier;
};

const sortdataViews = (data) => {
  if (data && data.data && Array.isArray(data.data)) {
      data.data = data.data.sort((a, b) => {
          const viewsA = a.others && a.others.views ? parseViews(a.others.views) : 0;
          const viewsB = b.others && b.others.views ? parseViews(b.others.views) : 0;
          return viewsB - viewsA;
      });

      return data.data;
  }
};
// Show content with sort function  end


const sortView = document.getElementById("sort_view");

// Show cards 
const showCards = async (dataID) => {
  try {
    const response = await fetch(
      `https://openapi.programming-hero.com/api/videos/category/${dataID}`
    );

    if (!response.ok) {
      throw new Error(`Error status: ${response.status}`);
    }
    const data = await response.json();

    if (data.status) {
      createCardCreation(data.data,data.status);
      sortView.addEventListener("click",() =>{
  console.log(dataID);

          var sortData = sortdataViews(data);
          createCardCreation(sortData,data.status);
          console.log(sortData);
      })
    }
    else{
      sortData = undefined;
      Show_No_content_section(data)
    }
  } catch {
    (error) => {
      console.log(error);
    };
  }
};

// show card  end
// Show empty card 
const Show_No_content_section = (data) =>{
  while(contentSection.firstChild){
    contentSection.removeChild(contentSection.firstChild);
  }
  const buttoOfView = document.getElementById("sort_view");
  buttoOfView.style.display ='none';

  const mainContainer = document.createElement("div");
  mainContainer.classList.add("card_main_container");
  mainContainer.innerHTML = `
      <div class="empty_card">
          <img src="./Icon.png" alt="image of card">
          <p>Oops!! Sorry, There is no content here</p>
      </div>`;
  contentSection.appendChild(mainContainer);
      
}

// Creatre contentSection 
function hours_convertor(seconds){
  if(isNaN(seconds) || seconds == 0) return "";
  
  let hours = Math.floor(seconds/3600);
  let minutes = Math.floor((seconds % 3600) / 60);

  return `${hours} hours ${minutes} minutes`;
}

const contentSection = document.getElementById("content_section");
const createCardCreation = (data,dataStatus) => {
  if(dataStatus){
  while(contentSection.firstChild){
    contentSection.removeChild(contentSection.firstChild);
  }
  const buttoOfView = document.getElementById("sort_view");
  buttoOfView.style.display ='inline-flex';
  data.forEach((dataInfo) => {
    
    const mainContainer = document.createElement("div");
    mainContainer.classList.add("card_main_container");
    mainContainer.innerHTML = `
        <div class="image_of_card position-relative">
            <img src="${dataInfo.thumbnail}" alt="image of card">
            <p class="hours_content">${hours_convertor(dataInfo.others.posted_date)}</p>
        </div>
        <div class="details_container_card">
            <div class="logo_of_card mt-3">
                <img src="${dataInfo.authors[0].profile_picture}" alt="">
            </div>
            <div class="info_of_card lh-base mt-3">
                <h3>${dataInfo.title}</h3>
                <p class="profile_name">${dataInfo.authors[0].profile_name}</p>
                <img src="${dataInfo.authors[0].verified ? './verified.png' : './640px-HD_transparent_picture.png'}" alt="">
                <p>${dataInfo.others.views} views</p>
            </div>
        </div>
    `;
    contentSection.appendChild(mainContainer);
  });
  }
  else{
    Show_No_content_section(data) 
  }
};
// Creatre contentSection  end
loadContent();
showCards(1000)
