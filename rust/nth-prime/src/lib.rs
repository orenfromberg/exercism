pub fn nth(n: u32) -> u32 {
    let mut x = 2;
    let mut counter = 0;

    loop {
        if is_prime(x) {
            counter = counter + 1;
        }
        if counter == n + 1 {
            break;
        }
        x = x + 1;
    }
    x
}

fn is_prime(a: u32) -> bool {
    if a == 2 {
        return true
    }

    let mut x = 2;
    let mut ret = true;
    while x < a {
        ret = ret && (a % x != 0);
        x = x + 1;
    }
    ret
}
