fun main() {
    val testCases = readLine()!!.toInt()

    repeat(testCases) {
        val (n, k) = readLine()!!.split(" ").map { it.toInt() }
        val small = IntArray(26)
        val big = IntArray(26)

        readLine()!!.forEach { x ->
            if (x.isUpperCase()) {
                big[x - 'A']++
            } else {
                small[x - 'a']++
            }
        }

        var extra = 0
        var burles = 0
        for (i in 0 until 26) {
            burles += minOf(small[i], big[i])
            extra += (maxOf(small[i], big[i]) - minOf(small[i], big[i])) / 2
        }

        println(burles + minOf(k, extra))
    }
}
