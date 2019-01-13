import React, { Component } from 'react'
import './App.css'
import Greeting from './Greeting.gen'
import Hey from './Hey'

class App extends Component {
  render() {
    return (
      <div className="App">
        <Greeting name="Tom" />
        <Hey />
      </div>
    )
  }
}

export default App
