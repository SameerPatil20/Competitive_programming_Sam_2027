import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt() // Number of test cases

    repeat(t) {
        val k = scanner.nextInt()
        val m = scanner.nextInt()

        if ((m / k) % 3 == 2) {
            println(0)
        } else {
            println((((m / (k * 3)) * 3) + 2) * k - m)
        }
    }
}
