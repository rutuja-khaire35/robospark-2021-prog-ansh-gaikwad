import 'package:flutter/material.dart';
  
//imported google's material design library
void main() {
  runApp(MyApp());
  }

  class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
      /**Our App Widget Tree Starts Here**/
    return  MaterialApp(
    home: Scaffold(
      appBar: AppBar(
        title: Text('Profile Card App'),
        backgroundColor: Colors.pinkAccent[400],
        centerTitle: true,
      ), //AppBar
      body: Center(
        /** Card Widget **/
        child: Card(
          elevation: 50,
          shadowColor: Colors.black,
          color: Colors.pinkAccent[100],
          child: SizedBox(
            width: 300,
            height: 500,
            child: Padding(
              padding: const EdgeInsets.all(20.0),
              child: Column(
                children: [
                  CircleAvatar(
                    backgroundColor: Colors.pink[500],
                    radius: 108,
                    child: const CircleAvatar(
                      backgroundImage: ExactAssetImage('images/img1.jpg'),
                      radius: 100,
                    ), //CircleAvatar
                  ), //CircleAvatar
                  SizedBox(
                    height: 10,
                  ), //SizedBox
                  Text(
                    'Rutuja Khaire',
                    style: TextStyle(
                      fontSize: 30,
                      color: Colors.pink[900],
                      fontWeight: FontWeight.w500,
                    ), //Textstyle
                  ), //Text
                  SizedBox(
                    height: 10,
                  ), //SizedBox
                  Text(
                    'I am Rutuja Khaire a Third year student from Instrumentation and control branch in VIT, Pune. I am from TRF Robospark Programming Domain as well as in Admin domain. I like to explore new things and even I am a travel enthusiast. My native place is Nashik.',
                    style: TextStyle(
                      fontSize: 15,
                      color: Colors.pink[900],
                    ), //Textstyle
                  ), //Text
                ],
              ), //Column
            ), //Padding
          ), //SizedBox
        ), //Card
      ), //Center
    ), //Scaffold
  ); //MaterialApp
}
  }  