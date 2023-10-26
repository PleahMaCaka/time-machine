const defaultPastTimeSeconds = -1000


function goPast(sec = defaultPastTimeSeconds){
    sec *= 1000
    setTimeout(() => {
        // do someting you want!
    }, sec);
}