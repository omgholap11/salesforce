function sendMessage() {
    let input = document.getElementById("userInput");
    let message = input.value.trim();

    if (message === "") return;

    displayMessage(message, "user-message");

    let response = getResponse(message.toLowerCase());

    setTimeout(() => {
        displayMessage(response, "bot-message");
    }, 500);

    input.value = "";
}

function displayMessage(message, className) {
    let chatbox = document.getElementById("chatbox");
    let div = document.createElement("div");
    div.className = className;
    div.innerText = message;
    chatbox.appendChild(div);

    chatbox.scrollTop = chatbox.scrollHeight;
}

document.getElementById("userInput").addEventListener("keypress", function(event) {
    if (event.key === "Enter") {
        sendMessage();
    }
});

function getResponse(message) {

    if (message.includes("membership") || message.includes("fees") || message.includes("plan")) {
        return "We offer 3 types of plans:\n1. Monthly Plan: ₹999/month\n2. 3-Month Plan: ₹2499\n3. Yearly Plan: ₹8999\nContact us for current offers!";
    }

    else if (message.includes("owner")) {
        return "The gym is owned by FitZone Team.";
    }

    else if (message.includes("monthly")) {
        return "Our Monthly Plan costs ₹999 per month.";
    }

    else if (message.includes("3 month") || message.includes("three month")) {
        return "Our 3-Month Plan costs ₹2499 and saves you money compared to monthly billing.";
    }

    else if (message.includes("yearly") || message.includes("annual")) {
        return "Our Yearly Plan costs ₹8999 and includes 2 free personal training sessions.";
    }

    else if (message.includes("timing") || message.includes("hours") || message.includes("open")) {
        return "We are open from 5 AM to 11 PM, Monday to Sunday.";
    }

    else if (message.includes("trainer") || message.includes("personal training")) {
        return "Yes, we have certified personal trainers available.";
    }

    else if (message.includes("diet") || message.includes("nutrition")) {
        return "We provide customized diet plans for premium and yearly members.";
    }

    else if (message.includes("weight loss")) {
        return "We have special weight loss programs with cardio and diet guidance.";
    }

    else if (message.includes("muscle") || message.includes("bodybuilding")) {
        return "Our muscle gain program includes strength training and protein guidance.";
    }

    else if (message.includes("equipment") || message.includes("machines")) {
        return "We have modern equipment including treadmills, cross trainers, benches, and free weights.";
    }

    else if (message.includes("trial") || message.includes("demo")) {
        return "Yes! We offer a 1-day free trial.";
    }

    else if (message.includes("contact") || message.includes("phone")) {
        return "You can contact us at 9876543210.";
    }

    else if (message.includes("location") || message.includes("address")) {
        return "We are located near Elpro City Square Mall, Chinchwad.";
    }

    else {
        return "Sorry, I didn't understand that. You can ask about membership plans, timings, trainers, diet, weight loss, or equipment.";
    }
}
