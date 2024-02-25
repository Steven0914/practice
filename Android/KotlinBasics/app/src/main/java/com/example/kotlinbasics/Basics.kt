package com.example.kotlinbasics

data class CoffeeDetails(val name: String, val price: Int)

fun main(){
    // val vs var
    val name = "John" // val은 변경 불가능한 변수

    var age = 25 // var은 변경 가능한 변수
    println(age)

    var byteAge : Byte = 25 // 바이트 타입의 변수

//    age = readln().toInt() // 콘솔에서 입력받은 값을 정수로 변환하여 age에 대입
//
    age in 1..100 // age가 1부터 100 사이에 있는지 확인
    // true or false 로 반환

    var mydog = Dog("dobby", 3)
    mydog.age = 4

    val coffee = CoffeeDetails("Americano", 1500)
    // data class를 함수의 매개변수, 변수로 줄 수 있음

    // 리스트 정의하는 법
    val list = listOf(1, 2, 3, 4, 5) // 변경 불가능한 리스트
    val mutableList = mutableListOf(1, 2, 3, 4, 5) // 변경 가능한 리스트

    // 리스트에 원소 추가
    mutableList.add(6)
    mutableList.remove(3)
    mutableList.removeAt(4)
    println(mutableList)


}