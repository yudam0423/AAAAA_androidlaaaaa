package com.example.ch03_randomcolor;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {
    TextView txvR,txvG,txvB;
    View colorBlock;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        txvR =(TextView)findViewById(R.id.txvR1);
        txvG =(TextView)findViewById(R.id.txvG2);
        txvB =(TextView)findViewById(R.id.txvB3);
        colorBlock = findViewById(R.id.colorBlock);
    }

    public void changeColor(View w){

        Random x =new Random();
        int red =x.nextInt(256);
        txvR.setText("紅:"+red);
        txvR.setTextColor(Color.rgb(red,0,0));

        int green =x.nextInt(256);
        txvG.setText("綠:"+green);
        txvG.setTextColor(Color.rgb(0,green,0));

        int blue =x.nextInt(256);
        txvB.setText("藍:"+blue);
        txvB.setTextColor(Color.rgb(0,0,blue));

        colorBlock.setBackgroundColor(Color.rgb(red,green,blue));

    }




}




