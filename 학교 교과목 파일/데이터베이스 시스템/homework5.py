import mysql.connector

try:
    connection = mysql.connector.connect(
        host='10.211.55.7',
        port=4567,
        user='shu',
        password='ssss1234',
        database='madang'
    )

    if connection.is_connected():
        print("MySQL 연결 완료")

        cursor = connection.cursor()

        # 데이터 삽입
        print("\n데이터 삽입 완료 ")
        insert_query = "INSERT INTO Book (bookid, bookname, publisher, price) VALUES (%s, %s, %s, %s)"
        insert_data = (999, "Python Programming", "TechBooks", 50000)
        cursor.execute(insert_query, insert_data)
        connection.commit()

        print("\n데이터 조회:")
        query = "SELECT * FROM Book;"
        cursor.execute(query)
        results = cursor.fetchall()
        for row in results:
            print(row)

        # 데이터 삭제
        print("\n데이터 삭제 완료")
        delete_query = "DELETE FROM Book WHERE bookid = %s"
        delete_data = (999,)
        cursor.execute(delete_query, delete_data)
        connection.commit()

        # 데이터 조회
        print("\n데이터 조회:")
        cursor.execute(query)
        updated_results = cursor.fetchall()
        for row in updated_results:
            print(row)

except mysql.connector.Error as e:
    print(f"에러 발생: {e}")
finally:
    # 연결 종료
    if connection.is_connected():
        cursor.close()
        connection.close()
        print("\nMySQL 연결 종료")