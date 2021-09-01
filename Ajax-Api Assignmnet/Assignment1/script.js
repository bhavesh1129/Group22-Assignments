const inputBox = document.querySelector("input[type='text']");
const addBtn = document.querySelector("button");

addBtn.onclick = () => {
    const API_KEY = "35ab8abbb8ad8b9d867c040a0b364af5";
    let userData = inputBox.value;

    fetch('https://api.openweathermap.org/data/2.5/weather?q=' + userData + '&appid=' + API_KEY + '')
        .then((res) => {
            return res.json()
        })
        .then((data) => {
            console.log(data);

            let cityName = data['name'];
            cityNames.innerHTML = cityName;
            // var tempValue = data['main']['temp'];
            // var nameValue = data['name'];
            // var descValue = data['weather'][0]['description'];

            // main.innerHTML = nameValue;
            // desc.innerHTML = "Desc - " + descValue;
            // temp.innerHTML = "Temp - " + tempValue;
            // input.value = "";
        })
        .catch((err) => {
            console.log(err.message);
        });
}