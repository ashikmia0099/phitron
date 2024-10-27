


function handeldepsit(){
    var deposit = document.getElementById("deposite-amount").value;
    

    var convertinputvalue = convertToNumber(deposit);


    var with_dis = document.getElementById("deposite-dp-amount").innerText;
    
    var convertdepositamount = convertToNumber(with_dis);

    
    var sum = convertinputvalue + convertdepositamount;
    
    document.getElementById("deposite-dp-amount").innerText = sum;
}

function convertToNumber (value){
    return parseFloat(value);
}



// withdrow site 


function handelwithdrow(){

    var withdrow = document. getElementById("withdrow-amount").value;
    var convertwithdrowamount = convertToNumber(withdrow);

    var dep_dis = document.getElementById("withdrow-dp-amount").innerText;
    var convertwithdrow = document.getElementById(dep_dis);

    var sum1 = convertwithdrowamount + convertwithdrow + convertwithdrow;
    
    document.getElementById("withdrow-dp-amount") = sum1;
}   
