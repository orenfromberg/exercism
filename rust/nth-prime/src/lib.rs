pub fn nth(n: u32) -> u32 {
    let mut primes = Vec::<u32>::with_capacity(10_000);
    let mut number: u32 = 2;

    while primes.len() <= n as usize {
        if primes.iter().all(|p| (number % *p != 0)) {
            primes.push(number);
        }
        number += 1;
    }

    primes[n as usize]
}