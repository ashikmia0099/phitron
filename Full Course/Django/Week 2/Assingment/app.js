

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
  const button_division = document.getElementById("button_section");

  data.forEach((Btn_category) => {
    const buttones = document.createElement("div");
    buttones.classList.add("dis_button");

    buttones.innerHTML = `
      <button class="all_buttons" id="${Btn_category.category_id}" onclick="show_button('${Btn_category.category_id}')">
        ${Btn_category.category}
      </button>
    `;
    button_division.appendChild(buttones);
  });
};


// Show content section
const cardData = async (category_id) => {
  try {
    const response = await fetch(`https://openapi.programming-hero.com/api/videos/category/${category_id}`);
    const data = await response.json();

    if (data.status) {
      createCard(data.data, data.status);
    } else {
      Section_of_no_data(data);
    }
  } catch (error) {
    console.log(error);
  }
};

// Clear content section
const clear_content = () => {
  const Main_section = document.getElementById("main_section");
  while (Main_section.firstChild) {
    Main_section.removeChild(Main_section.firstChild);
  }
};

// No content Button

const No_content_button = () => {
  const Main_section = document.getElementById("main_section");
  const empty_button = document.createElement("div");
  empty_button.classList.add("empty_section");
  empty_button.innerHTML = `
    <div class="empty_button">
      <img src="./Icon.png" alt="">
      <p>Oops !! Sorry, There is no content here</p>
    </div>`;
  Main_section.appendChild(empty_button);
};

const Section_of_no_data = () => {
  clear_content();
  No_content_button();
};


// Main section
const Main_section = document.getElementById("main_section");

const createCard = (data, data_status) => {
  if (data_status) {
    clear_content();

    data.forEach((data) => {
      const mainSection = document.createElement("div");
      mainSection.classList.add("card_modify");
      mainSection.innerHTML = `
        <div class="image_modify">
          <img src="${data.thumbnail}" alt="">
          <p class="time_section">${time_converter(data.others.posted_date)}</p>
        </div>

        <div class="flex_last">
          <div class="logo_section">
            <img src="${data.authors[0].profile_picture}" alt="">
          </div>

          <div class="card_other_info">
            <h3>${data.title}</h3>
            <p class="p_tag">${data.authors[0].profile_name}</p>
            <img src="${data.authors[0].verified ? './Verified.png' : './Unverified.png'}" alt="">
            <p>${data.others.views} views</p>
          </div>
        </div>
      `;
      Main_section.appendChild(mainSection);
    });
  }
};

// Function to convert hours
function time_converter(postedDate) {
  if (isNaN(postedDate) || postedDate == 0) return "";

  const hours = Math.floor(postedDate / 3600);
  const minutes = Math.floor((postedDate % 3600) / 60);

  return `${hours} hrs ${minutes} min ago`;
}

// Show button function
const show_button = async (category_id) => {
  try {
    const response = await fetch(`https://openapi.programming-hero.com/api/videos/category/${category_id}`);
    const data = await response.json();

    if (data.status) {
      createCard(data.data, data.status);
      sort_view.addEventListener("click", () => {
        const sortingdata = sortView(data);
        createCard(sortingdata, data.status);
        console.log(sortingdata);
      });
    } else {
      sortingdata = undefined;
      Section_of_no_data(data);
    }
  } catch (error) {
    console.log(error);
  }
};

// sort by view button section

const sort_view = document.getElementById("Sort_by_button");

const sortView = (data) => {
  const all_sort_view = (viewinfo) => {
    const multiplier = {'k':100, 'm':100000};
    const last_number = viewinfo.slice(-1);
    const first_number = multiplier[last_number] || 1;

    return parseFloat(viewinfo) * first_number;
  };

  if (data?.data && Array.isArray(data.data)) {
    data.data = data.data.sort((a, b) => {
      const first_view = all_sort_view(a.others?.views) || 0;
      const second_view = all_sort_view(b.others?.views) || 0;

      return second_view - first_view;
    });
    return data.data;
  }
};


loadData();
cardData(1000);

