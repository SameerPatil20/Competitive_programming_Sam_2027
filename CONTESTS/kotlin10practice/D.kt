import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val testCases = scanner.nextInt()

    repeat(testCases) {
        val n = scanner.nextInt()
        val c = scanner.next().first()
        val s = scanner.next()

        val extendedString = s + s
        var j = 0
        var ans = 0

        for (i in 0 until n) {
            if (extendedString[i] != c) continue
            while (j < i || extendedString[j] != 'g') {
                j++
            }
            ans = maxOf(ans, j - i)
        }
        println(ans)
    }
}
