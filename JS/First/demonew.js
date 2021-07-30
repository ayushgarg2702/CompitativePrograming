const btn=document.querySelector('.btn');
const container=document.querySelector('.container');
// console.log(btn,container);
btn.addEventListener('click',()=>{
    container.classList.toggle('big');
})
function createBox()
{
    for( let i=0;i<=3;i++)
    {
        for(let j=0;j<=3;j++)
        {
            const divEl=document.createElement('div');
            divEl.classList.add('box');
            divEl.style.backgroundPosition=`${-j * 125}px ${-i *125}px`;
            container.appendChild(divEl);
        }
    }
}
createBox();