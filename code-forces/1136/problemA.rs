use std::io;

pub fn main() {
    let mut input_text = String::new();

    io::stdin()
        .read_line(&mut input_text)
        .expect("Failed to read from stdin");

    let mut n: u32 = input_text.trim().parse().expect("Input was not a number");
    while n != 0 {
        println!("n = {}", n);
        n -= 1;
    }

    input_text = String::new();
    io::stdin()
        .read_line(&mut input_text)
        .expect("Failed to read from stdin");

    println!("{}", input_text);
}
