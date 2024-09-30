import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val testCases = scanner.nextInt()
    repeat(testCases) {
        val n = scanner.nextInt()
        val a = IntArray(n)
        for (i in 0 until n) {
            a[i] = scanner.nextInt()
        }
        var answer = 1
        if (a[0] == a[1]) {
            for (i in 2 until n) {
                if (a[i] != a[0]) {
                    answer = i + 1
                    break
                }
            }
        } else {
            if (a[0] == a[2]) {
                answer = 2
            }
        }
        println(answer)
    }
}