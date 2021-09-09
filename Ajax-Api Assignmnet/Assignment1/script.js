const body = document.querySelector("body");
const inputBox = document.querySelector("input[type='text']");
const addBtn = document.querySelector("button");
const cardImage = document.querySelector(".cardImage");
const dates = document.querySelector(".dates");
const cityName = document.querySelector(".cityName");
const temp = document.querySelector(".temp");
const weatherType = document.querySelector(".weatherType");
const maxTemp = document.querySelector(".maxTemp");
const minTemp = document.querySelector(".minTemp");
const humidityy = document.querySelector(".humidityy");
const pressuree = document.querySelector(".pressuree");

// Enter Button
addBtn.onclick = () => {
    const API_KEY = "35ab8abbb8ad8b9d867c040a0b364af5"; //API KEY from Open Weather
    let userData = inputBox.value; //Taking the input from user


    //Using fetch method to fetch the data from open weather API
    fetch('https://api.openweathermap.org/data/2.5/weather?q=' + userData + '&appid=' + API_KEY + '')

    //Covert data from string format to JSON format
    .then((res) => {
            return res.json()
        })
        //The whole data
        .then((data) => {
            console.log(data);

            //Current Date
            const date = new Date();
            dates.innerHTML = date.toDateString();

            //Name of City
            let nameOfCity = data['name'];
            cityName.innerHTML = nameOfCity;

            //Temp Value and convert in into Kelvin to Celsius
            let tempValue = data['main']['temp'];
            tempValue -= 273;
            temp.innerHTML = Math.floor(tempValue) + '&#176;<span class="celsius">C</span>';

            //Weather Type
            let typeOfWeather = data['weather'][0]['main'];
            weatherType.innerHTML = typeOfWeather;

            //Weather Icon
            // let iconWeather = document.createElement('img');
            // iconWeather.src = "http://openweathermap.org/img/wn/" + data['weather'][0]['icon'] + ".png";
            // weatherType.prepend(iconWeather);

            //Changing the background image basis on their weather type
            if (typeOfWeather == "Mist" || typeOfWeather == "Fog") {
                cardImage.style.backgroundImage = "url('./assests/images/mist.jpg')";
                body.style.backgroundImage = "url('./assests/images/mist.jpg')";
            } else if (typeOfWeather == "Clouds") {
                cardImage.style.backgroundImage = "url('./assests/images/clouds.jpg')";
                body.style.backgroundImage = "url('./assests/images/clouds.jpg')";
            } else if (typeOfWeather == "Clear") {
                cardImage.style.backgroundImage = "url('./assests/images/clear.jpg')";
                body.style.backgroundImage = "url('./assests/images/clear.jpg')";
            } else if (typeOfWeather == "Snow") {
                cardImage.style.backgroundImage = "url('./assests/images/snow.jpg')";
                body.style.backgroundImage = "url('./assests/images/snow.jpg')";;
            } else if (typeOfWeather == "Dizzle" || typeOfWeather == "Sand") {
                cardImage.style.backgroundImage = "url('./assests/images/dizzle.jpg')";
                body.style.backgroundImage = "url('./assests/images/dizzle.jpg')";
            } else if (typeOfWeather == "Thunderstorm" || typeOfWeather == "Tornado") {
                cardImage.style.backgroundImage = "url('./assests/images/thunderstorm.jpg')";
                body.style.backgroundImage = "url('./assests/images/thunderstorm.jpg')";
            } else if (typeOfWeather == "Haze" || typeOfWeather == "Smoke") {
                cardImage.style.backgroundImage = "url('./assests/images/haze.jpg')";
                body.style.backgroundImage = "url('./assests/images/haze.jpg')";
            } else if (typeOfWeather == "Rain") {
                cardImage.style.backgroundImage = "url('https://i.pinimg.com/originals/b9/b2/69/b9b2692358c01f85d275df7049bf08fa.jpg')";
                cardImage.style.backgroundImage = "url('https://i.pinimg.com/originals/b9/b2/69/b9b2692358c01f85d275df7049bf08fa.jpg')";

            }

            //Extra Weather details (Min Temperature)
            let minTemperature = data['main']['temp_min'];
            minTemperature -= 273;
            minTemp.innerHTML = Math.floor(minTemperature) + '&#176;C(Min Temp)';

            //Extra Weather details (Max Temperature)
            let maxTemperature = data['main']['temp_max'];
            maxTemperature -= 273;
            maxTemp.innerHTML = Math.floor(maxTemperature) + '&#176;C(Max Temp)';

            //Some More Extra Weather details (Humidity)
            let humidity = data['main']['humidity'];
            humidityy.innerHTML = humidity + '%(Humidity)';

            //Some More Extra Weather details (pressure)
            let pressure = data['main']['pressure'];
            pressuree.innerHTML = pressure + 'mb(Pressure)';

            //Empty Input box
            inputBox.value = "";
        })
        //To catch error if present and show
        .catch((err) => {
            console.log(err);
        });
}
