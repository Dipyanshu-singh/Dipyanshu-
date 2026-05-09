import StudentCard from './StudentCard'

import  './StudentCard.css'

function App(){

    return(
        <div className="card">
            <h1>Hello World</h1>
            <p>Thisis my first React app.</p>
            <CSE12></CSE12>
            <h1>Student Card</h1>
            <StudentCard name="Shred" age="101" grade="lallantop"></StudentCard>
            <StudentCard name="Tiwari" age="69" grade="zhakkas"></StudentCard>
            <StudentCard name="PeriPeri" age="18" grade="Aaaaag"></StudentCard>

        </div>
        
    );
}
function CSE12(){
    return(
        <div className="App">
            <h1>Hello cse12</h1>
            <p>Thisis my first React in 12 .</p>

        </div>
    );
}

export default App;