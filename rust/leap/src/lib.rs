pub fn is_leap_year(year: u64) -> bool {
    // unimplemented!("true if {} is a leap year", year)
    if year % 4 == 0 {
        if year % 100 == 0 {
            if year % 400 == 0 {
                return true;
            }
            return false;
        }
        return true;
    }

    false
}
