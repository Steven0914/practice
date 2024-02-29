package com.example.unitconverter

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowDropDown
import androidx.compose.material3.Button
import androidx.compose.material3.DropdownMenu
import androidx.compose.material3.DropdownMenuItem
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.unitconverter.ui.theme.UnitConverterTheme
import kotlin.math.roundToInt

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            UnitConverterTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    UnitConverter()

                }
            }
        }
    }
}


@Composable
fun UnitConverter() {

    var inputValue by remember { mutableStateOf("") }
    // var로 선언해야 값을 바꿀 수 있음
    var outputValue by remember { mutableStateOf("") }
    var inputUnit by remember { mutableStateOf("M") }
    var outputUnit by remember { mutableStateOf("M") }
    var iExpanded by remember { mutableStateOf(false) }
    var oExpanded by remember { mutableStateOf(false) }
    val conversionFactor = remember { mutableStateOf(1.0) }
    val oConversionFactor = remember { mutableStateOf(1.00) }


    fun convertUnit(){
        // ?: 는 엘비스 연산자
        // null이면 0.0을 반환하고, 아니면 그 값을 반환함, null 값인지 여부에 따라 달라짐

        val inputValueDouble = inputValue.toDoubleOrNull() ?: 0.0
        val result = (inputValueDouble * conversionFactor.value * 100.0).roundToInt() / 100.0
        outputValue = result.toString()

    }



    Column(
        modifier = Modifier.fillMaxSize(),
        // 이렇게 하면 화면을 꽉 채움
        verticalArrangement = Arrangement.Center,
        // 이렇게 하면 세로로 중앙정렬이 됨
        horizontalAlignment = Alignment.CenterHorizontally
        // 이렇게 하면 가로로 중앙정렬이 됨
    ) {
        // 여기에 UI의 구성요소를 추가합니다.
        // 그러면 요소들이 아래로 쌓이게 됩니다.

        Text("Unit Converter", modifier = Modifier.padding(10.dp),
            style = MaterialTheme.typography.headlineLarge
        )
        // modifier를 사용하는 방식과 spacer를 사용하는 방식이 있음

        Spacer(modifier = Modifier.height(16.dp))
        // 이렇게 하면 16dp만큼의 여백이 생김

        // 3가지의 텍스트 필드가 존재함
        // 1. Text Field
        // 2. BasicTextField
        // 3. OutlinedTextField
        // 3번째를 사용하겠음
        // 얘도 2가지 종류가 있는데, 하나는 String, 다른 하나는 TextFieldValue를 받음
        // value는 디폴트 값, onValueChange는 값이 바뀔 때마다 호출되는 콜백
        // onValueChange는 중괄호로 비워놔도 됨, 람다식으로 써야함
        OutlinedTextField(
            value = inputValue,
            onValueChange = {
                inputValue = it
                convertUnit()
                // 값이 바뀔 때마다 호출되는 콜백
            },
            label = { Text("Enter Value") },
        )

        Spacer(modifier = Modifier.height(16.dp))

        Row {
            // 그러면 요소들이 옆으로 쌓이게 됩니다
            // 토스트 메시지를 띄우기 위해서는 context가 필요함
//            val context = LocalContext.current

            // input box
            Box {
                Button(onClick = { iExpanded = true }) {
                    Text(text = inputUnit)
                    Icon(
                        Icons.Default.ArrowDropDown,
                        contentDescription = "Arrow down"
                    ) // 시각장애 사용자를 위한 설명
                }

                DropdownMenu(
                    expanded = iExpanded, //
                    onDismissRequest = { iExpanded = false })
                    // 다른데를 누르면 드롭다운이 꺼지게 하는 것
                {
                    DropdownMenuItem(text = { Text(text = "MM") }, onClick = {
                        inputUnit = "MM"
                        iExpanded = false
                        conversionFactor.value = 0.001
                        convertUnit()
                    })
                    DropdownMenuItem(text = { Text(text = "CM") }, onClick = {
                        inputUnit = "CM"
                        iExpanded = false
                        conversionFactor.value = 0.01
                        convertUnit()
                    })
                    DropdownMenuItem(text = { Text(text = "M") }, onClick = {
                        inputUnit = "M"
                        iExpanded = false
                        conversionFactor.value = 1.0
                        convertUnit()
                    })
                    DropdownMenuItem(text = { Text(text = "FEET") }, onClick = {
                        inputUnit = "FEET"
                        iExpanded = false
                        conversionFactor.value = 0.3048
                        convertUnit()
                    })
                }
            }

            Spacer(modifier = Modifier.width(16.dp))


            // output box
            Box {
                Button(onClick = { oExpanded = true }) {
                    Text(text = outputUnit)
                    Icon(
                        Icons.Default.ArrowDropDown,
                        contentDescription = "Arrow down"
                    ) // 시각장애 사용자를 위한 설명
                }
                DropdownMenu(
                    expanded = oExpanded,
                    onDismissRequest = { oExpanded = false }) {
                    DropdownMenuItem(text = { Text(text = "MM") }, onClick = {
                        outputUnit = "MM"
                        oExpanded = false
                        oConversionFactor.value  = 0.001
                        convertUnit()

                    })
                    DropdownMenuItem(text = { Text(text = "CM") }, onClick = {
                        outputUnit = "CM"
                        oExpanded = false
                        oConversionFactor.value = 0.01
                        convertUnit()
                    })
                    DropdownMenuItem(text = { Text(text = "M") }, onClick = {
                        outputUnit = "M"
                        oExpanded = false
                        oConversionFactor.value  = 1.0
                        convertUnit()
                    })
                    DropdownMenuItem(text = { Text(text = "FEET") }, onClick = {
                        outputUnit = "FEET"
                        oExpanded = false
                        oConversionFactor.value  = 0.3048
                        convertUnit()
                    })
                }
            }
//            Button(onClick = {
//                Toast.makeText(
//                    context,
//                    "클릭해줘서 고마워용",
//                    Toast.LENGTH_LONG
//                ).show()
//            }) {
//                Text(text = "my button")
//            }

        }
        Spacer(modifier = Modifier.height(16.dp))

        Text(text = "result : $outputValue $outputUnit",
            style = MaterialTheme.typography.headlineMedium)
    }
}


@Preview(showBackground = true)
@Composable
fun UnitConverterPreview() {
    // 함수 이름 뒤에 Preview 라고 명시해줘야함

    UnitConverter()
}