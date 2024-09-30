import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val testCases = scanner.nextInt()
    repeat(testCases) {
        var a = scanner.next()
        var b = scanner.next()
        val asize = a.length
        val bsize = b.length
        if (a[asize - 1] == b[bsize - 1]) {
            if (asize == bsize) {
                println('=')
                return@repeat
            } else if (a[asize - 1] == 'S') {
                if (asize < bsize) {
                    println('>')
                    return@repeat
                } else {
                    println('<')
                    return@repeat
                }
            } else {
                if (asize < bsize) {
                    println('<')
                    return@repeat
                } else {
                    println('>')
                    return@repeat
                }
            }
        } else if (b[bsize - 1] == 'L') {
            println('<')
            return@repeat
        } else if (a[asize - 1] == 'L') {
            println('>')
            return@repeat
        } else if (a[asize - 1] == 'S') {
            println('<')
            return@repeat
        } else println('>')
    }
}
