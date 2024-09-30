import java.util.Scanner
import kotlin.math.min

fun main() {
    val scanner = Scanner(System.`in`)
    val testCases = scanner.nextInt()

    repeat(testCases) {
        var n = scanner.nextInt()
        var mini = n
        while (n >= 0) {
            mini = min(n % 3, mini)
            n -= 5
            if (mini == 0) {
                break
            }
        }
        println(mini)
    }
}
