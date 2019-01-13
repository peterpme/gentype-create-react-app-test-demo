import React, { Component } from 'react'
import './App.css'
import Greeting from './Greeting.gen'

class App extends Component {
  render() {
    return (
      <div className="App">
        <Greeting name="Tom" />
      </div>
    )
  }
}

export default App
