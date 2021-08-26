const inputBox = document.querySelector('.inputField input');
const addBtn = document.querySelector('.inputField button');
const todoList = document.querySelector('.todoList');
const deleteAllBtn = document.querySelector('.footer button');


// For plus button to enable and disable
inputBox.onkeyup = () => {
    let userData = inputBox.value; //user entered todo
    if (userData.trim() != 0) {
        addBtn.classList.add("active");
    } else {
        addBtn.classList.remove("active");
    }
}

// For add the todo in local storage
addBtn.onclick = () => {
    let userData = inputBox.value;
    let getLocalStorage = localStorage.getItem("New Todo");
    if (getLocalStorage === null) {
        listArr = [];
    } else {
        listArr = JSON.parse(getLocalStorage);
    }
    listArr.push(userData);
    localStorage.setItem("New Todo", JSON.stringify(listArr));
    showTasks();
}

// Funcn to add new todo in list format 
function showTasks() {
    let getLocalStorage = localStorage.getItem("New Todo");
    if (getLocalStorage === null) {
        listArr = [];
    } else {
        listArr = JSON.parse(getLocalStorage);
    }

    // For update the pending task number
    const pendingNum = document.querySelector(".pendingNum");
    pendingNum.textContent = listArr.length;

    //For enable and diable the clear button
    if (listArr.length > 0) {
        deleteAllBtn.classList.add("active");
    } else {
        deleteAllBtn.classList.add("active");
    }

    //Adding new list items
    let newLiTag = '';
    listArr.forEach((element, index) => {
        newLiTag += `<li> ${element} <span onclick = "deleteTask(${index})";><i class="fas fa-trash"></i></span></li>`;
    });
    todoList.innerHTML = newLiTag;

    //Re-initailise the input box as null/empty
    inputBox.value = "";
}

// Funcn to remove/delete todo from list 
function deleteTask(index) {
    let getLocalStorage = localStorage.getItem("New Todo");
    listArr = JSON.parse(getLocalStorage);
    listArr.splice(index, 1); //delete the particular task from list

    //update the list
    localStorage.setItem("New Todo", JSON.stringify(listArr));
    showTasks();
}

//Delete all the tasks from clear button
deleteAllBtn.onclick = () => {
    listArr = [];

    //update the list
    localStorage.setItem("New Todo", JSON.stringify(listArr));
    showTasks();
}