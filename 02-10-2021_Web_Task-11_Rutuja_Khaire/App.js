import './App.css';

function App() {
  return (
<>
<section className="login">
        <form>
        <div className="main-container">
            <div className="login-container">
                <h1>L O G I N</h1>
            </div>
            <div className="username">
                <input type="text" placeholder="Username" name="username" required/><br/>
            </div>
            <div className="email">
                <input type="email" placeholder="Email" name="mail" required/><br/>
            </div>
            <div className="password">
                <input type="password" placeholder="Password" name="password" required/>
            </div>
            <input type="checkbox" checked="checked" className="check"/>Remember me<br/>
            <div className="forget_password">
                <a href="/">Forget your Password?</a>
            </div>
            <button type="submit" className="submit">Submit</button>
        </div>
    </form>
    </section>
  </>);
}

export default App;
