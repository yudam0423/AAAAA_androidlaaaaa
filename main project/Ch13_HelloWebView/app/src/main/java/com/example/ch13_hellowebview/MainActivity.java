package com.example.ch13_hellowebview;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ProgressBar;

public class MainActivity extends AppCompatActivity {
    WebView wv;


    @Override
    public void onBackPressed(){
        if(wv.canGoBack()){
            wv.goBack();
            return;
        }
        super.onBackPressed();
        //wv.goBack();

    }

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        WebView wv =(WebView) findViewById(R.id.wv);
        wv.getSettings().setJavaScriptEnabled(true);
        wv.getSettings().setBuiltInZoomControls(true);
        wv.invokeZoomPicker();
       // wv.setWebViewClient(new WebViewClient());


        //wv.setWebChromeClient(new WebChromeClient());
        wv.loadUrl("https://www.google.com.tw/?hl=zh_TW");
    }




}


