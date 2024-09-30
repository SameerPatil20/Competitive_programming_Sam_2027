import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val testCases = scanner.nextInt()

    repeat(testCases) {
        val s = scanner.next()

        val answer = Math.abs(s.last() - s.first())
        val v = mutableListOf<Pair<Char, Int>>()
        
        for (i in 1 until s.length - 1) {
            if (s[i] in minOf(s.first(), s.last())..maxOf(s.first(), s.last())) {
                v.add(Pair(s[i], i + 1))
            }
        }

        v.sortBy { it.first }
        if (s.first() > s.last()) {
            v.reverse()
        }

        println("$answer ${v.size + 2}")
        print("1")
        v.forEach {
            print(" ${it.second}")
        }
        println(" ${s.length}")
    }
}

