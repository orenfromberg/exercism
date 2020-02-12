fn main() {
    if is_prime(5) {
        println!("yes");
    } else {
        println!("no");
    }
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
