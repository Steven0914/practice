package com.example.captaingame

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.example.captaingame.ui.theme.CaptaingameTheme
import kotlin.random.Random

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            CaptaingameTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    CaptainGame()
                }
            }
        }
    }

    @Composable
    fun CaptainGame() {
        val treasuresFound = remember{ mutableStateOf(0)}
//        val treasuresFound by remember{ mutableStateOf(0)}
        // 아래와 같이 사용하면 .value를 사용하지 않아도 된다.
        // 하지만 이렇게 하면 변수의 값을 변경할 수 없다.
        

        val direction = remember{ mutableStateOf("N")}
        val stormOrTreasure = remember{ mutableStateOf("")}

        Column {
            Text(text = "Treasures Found: ${treasuresFound.value}")
            Text(text = "Direction: ${direction.value}")
            Text(text = "${stormOrTreasure.value}")

            Button(onClick = {
                direction.value = "E"
                if(Random.nextBoolean()){
                    treasuresFound.value += 1
                    stormOrTreasure.value = "Treasure"
                } else {
                    stormOrTreasure.value = "Storm"
                }
            }) {
                Text(text = "Sail East")
            }
            Button(onClick = {
                direction.value = "N"
                if(Random.nextBoolean()){
                    treasuresFound.value += 1
                }
            }) {
                Text(text = "Sail North")
            }
            Button(onClick = {
                direction.value = "W"
                if(Random.nextBoolean()){
                    treasuresFound.value += 1
                }
            }) {
                Text(text = "Sail West")
            }
            Button(onClick = {
                direction.value = "S"
                if(Random.nextBoolean()){
                    treasuresFound.value += 1
                }
            }) {
                Text(text = "Sail South")
            }


        }
    }


}
