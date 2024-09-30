import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val testCases = scanner.nextInt()

    repeat(testCases) {
        var n = scanner.nextInt()
        var k = scanner.nextInt()

        var y = n - 1
        var posi = 0

        while (y != 0) {
            y = y shr 1
            posi++
        }

        if (k > posi) {
            println(-1)
        }
        else{
        val ans = IntArray(n) { 0 }
        ans[0] = n
        var q = 1

        for (j in 0 until k - 1) {
            for (i in (1 shl j) until n step (2 shl j)) {
                ans[i] = q++
            }
        }

        for (i in n - 1 downTo 0) {
            if (ans[i] == 0) {
                ans[i] = q++
            }
        }

        println(ans.joinToString(" "))
    }
    }
}
