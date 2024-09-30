import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt() // Number of test cases

    repeat(t) {
        val n = scanner.nextInt()
        val k = scanner.nextLong()

        var i = 0
        var tempK = k
        while (tempK % 2 == 0L) {
            i++
            tempK /= 2
        }

        println(n - i)
    }
}
