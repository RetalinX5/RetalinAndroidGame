let displayValue = '';
let recognition = null;

function append(value) {
    displayValue += value;
    document.getElementById('display').value = displayValue;
}

function clearDisplay() {
    displayValue = '';
    document.getElementById('display').value = displayValue;
}

function calculate() {
    try {
        displayValue = eval(displayValue);
        document.getElementById('display').value = displayValue;
    } catch (error) {
        document.getElementById('display').value = 'خطأ';
    }
}

// تبديل خاصية التعرف على الصوت وتحديد اللغة
function toggleSpeechRecognition() {
    if (!('webkitSpeechRecognition' in window)) {
        alert("Web Speech API غير مدعومة من قبل متصفحك. الرجاء استخدام متصفح حديث.");
    } else {
        if (recognition && recognition.abort) {
            recognition.abort();
        }
        
        recognition = new webkitSpeechRecognition();
        recognition.lang = 'ar-EG'; // تحديد لغة العربية

        recognition.onstart = function() {
            console.log('بدء التعرف الصوتي');
        };

        recognition.onresult = function(event) {
            const result = event.results[0][0].transcript;
            append(result);
        };

        recognition.onerror = function(event) {
            console.error('خطأ في التعرف الصوتي:', event.error);
        };

        recognition.onend = function() {
            console.log('انتهاء التعرف الصوتي');
        };

        recognition.start();
    }
}

function toggleMode() {
    const body = document.body;
    const currentMode = body.classList.contains('dark-mode') ? 'dark-mode' : 'light-mode';

    // تغيير الوضعية
    body.classList.toggle('dark-mode');
    body.classList.toggle('light-mode');

    // حفظ تفضيل المستخدم للوضعية
    localStorage.setItem('theme', currentMode);
}

// تحميل الوضعية المفضلة للمستخدم عند فتح الصفحة
window.addEventListener('DOMContentLoaded', () => {
    const savedTheme = localStorage.getItem('theme');

    if (savedTheme) {
        document.body.classList.add(savedTheme);
    } else {
        // الوضع الافتراضي
        document.body.classList.add('light-mode');
    }
});
