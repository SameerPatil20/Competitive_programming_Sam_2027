import java.util.Scanner

const val MOD = 1_000_000_007L

fun main() {
    val scanner = Scanner(System.`in`)

    // Input for 'n' and 'k'
    val n = scanner.nextInt()
    val k = scanner.nextInt()

    // Calculate and print the sequence


    for (i in 0..n) {
        val coefficient3 = binomialCoefficient(n - i - 1, k - 2)
        val coefficient4 = binomialCoefficient(n - i - 1, k - 1)
        val value = (coefficient3 * (n - i - 1) % MOD + 2 * coefficient4 % MOD) % MOD
        print("$value ")
    }
}

fun binomialCoefficient(n: Int, k: Int): Long {
    if (k < 0 || k > n) return 0
    if (k == 0 || k == n) return 1

    var result: Long = 1
    var denominator: Long = 1

    for (i in 1..k) {
        result = result * (n - i + 1) % MOD
        denominator = denominator * i % MOD
    }

    // Calculate result / denominator mod MOD
    return modInverse(denominator, MOD) * result % MOD
}

fun modInverse(a: Long, m: Long): Long {
    var a = a
    var m = m
    var m0 = m
    var x0: Long = 0
    var x1: Long = 1

    if (m == 1L) return 0

    // Apply extended Euclid Algorithm
    while (a > 1) {
        // q is quotient
        val q = a / m
        var t = m

        // m is remainder now, process same as euclid's algorithm
        m = a % m
        a = t
        t = x0

        x0 = x1 - q * x0
        x1 = t
    }

    // Make x1 positive
    if (x1 < 0) x1 += m0

    return x1
}
