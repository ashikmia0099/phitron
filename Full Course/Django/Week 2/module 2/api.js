

// fetch("https://fakestoreapi.com/products/1")
// .then ((res) =>  console.log(res)) 


//     .then((res) => res.json())
//     .then((data) =>{
//         console.log(data);
// })

// .catch((err) => {
//     console.log(err);
// });





// fetch("https://fakestoreapi.com/products/1")

//    .then ((dep) => dep.json())
//    .then((dot) =>{
//     console.log(dot)
//    })

// const getdata = new Promise(function(resolve,reject){
//     return resolve(80);
// })
// getdata.then(data => console.log(data));


const loadData = async() => {
    const response = await fetch("https://fakestoreapi.com/products/1");
    const data = await response.json();
    console.log(data);
};
loadData();