const burgerButton = document.querySelector("#MENU");
const menu = document.querySelector(".link");

burgerButton.addEventListener("click", function () {
    menu.classList.toggle("active");
});
function validateForm() {
    const firstName = document.getElementById('firstName').value;
    const lastName = document.getElementById('lastName').value;
    const cin = document.getElementById('cin').value;
    const email = document.getElementById('email').value;
    const phoneNumber = document.getElementById('phoneNumber').value;

    const nameRegex = /^[A-Za-z]{2,}$/;
    const cinRegex = /^[A-Za-z]{2}\d{6}$/;
    const emailRegex = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+.[a-zA-Z]{2,}$/;
    const phoneRegex = /^+212\d{9}$/;

    if (nameRegex.test(firstName) && nameRegex.test(lastName) && cinRegex.test(cin) &&
        emailRegex.test(email) && phoneRegex.test(phoneNumber)) {
        alert('Thank you for your Submit!');// Form is valid, you can submit the data.
        login.classList.toggle("close");
    } else {
        alert('Check your informations.'); // Form is not valid, display an error message.
    }
};