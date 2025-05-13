body{
    maegin:0;
    font-family:arial,sans-serif;
}
heaer{
    display; flex;
    align-items:center;
    justify-contet:space-between;
    backgond-color:#333;
    color:white;
    pading:10px20px;
}

.logo{
    font-size:1.5rem;
}

#menu-toggle{
    display:none;
}

.menu-incon{
    display;flex;
    flex-direction:column;
    width:30px;
    cursor:pointer;
}

.menu-incon span{
    height:3px;
    background:white;
    margin:4px0;
    borer-radius;2px;
}

nav{
    background-color:#444;
    display:none;
    flex-direvtion:column;
}
nav a {
    color:whit;
    pading:15px20px;
    text-decoration:none;
    border-bottom:1px solid#555;
}

nav a:hover{
    background-color:#555;
}
#menu-toggle:checked+label+nav{
    display:flex;
}

@meia(min-width:768px){
    .menu-incon{
        display:none;
    }
    nav{
        display:flex!important;
        flex-direction:row;
        background:none;
    }
}