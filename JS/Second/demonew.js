const image=document.querySelector('.image');
const loading=document.querySelector('.loading');

let load=0;
let val=setInterval(blurring,30);
function scale (number, inMin, inMax, outMin, outMax) {
    return (number - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
}
function blurring()
{
    load++;
    if(load>99)
     clearInterval(val);
    loading.innerText=`${load}%`;
    loading.style.opacity=scale(load,0,100,1,0);
    image.style.filter=`blur(${scale(load,0,100,30,0)}px)`;
}