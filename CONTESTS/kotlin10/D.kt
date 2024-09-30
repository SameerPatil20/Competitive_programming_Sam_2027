import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt() // Number of test cases

    repeat(t) {
        val n = scanner.nextInt()
        val a = LongArray(n)

        for (i in 0 until n) {
            a[i] = scanner.nextLong()
        }
        
        var i = 0
        var total: Long = 0

        while (i < n) {
            if (a[i] == 0L) {
                i++
                continue
            } else {
                var sum: Long = 0
                var maxi: Long = 0
                var j = i

                while (j < n && a[j] != 0L) {
                    if ((j - i) % 2 == 0) maxi = maxOf(maxi, a[j])
                    sum += a[j]
                    j++
                }

                total += if ((j - i) % 2 == 0) {
                    sum * 2
                } else {
                    sum * 2 - maxi
                }
                i = j
            }
        }
        println(total)
    }
}
