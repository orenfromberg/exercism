pub fn raindrops(n: u32) -> String {
    // unimplemented!("what sound does Raindrop #{} make?", n)
    let mut s = String::from("");
    if n % 3 == 0 {
        s.push_str("Pling")
    }
    if n % 5 == 0 {
        s.push_str("Plang")
    }
    if n % 7 == 0 {
        s.push_str("Plong")
    }
    if s.len() == 0 {
        n.to_string()
    } else {
        s
    }
}
