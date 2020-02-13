pub fn verse(n: u32) -> String {
    match n {
        0 => format!("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n"),
        1 => format!("1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n"),
        2 => format!("2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n"),
        _ => format!("{} bottles of beer on the wall, {} bottles of beer.\nTake one down and pass it around, {} bottles of beer on the wall.\n", n, n, n - 1),
    }
}

pub fn sing(start: u32, end: u32) -> String {
    let mut song = String::from(verse(start));
    let mut n = start as i32 - 1;
    while n >= end as i32 {
        song.push_str("\n");
        let s = verse(n as u32); 
        song.push_str(&s);
        n -= 1;
    } 

    song
}
