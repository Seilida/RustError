use rust_result::MyPoint;

// use 
fn main() 
{
    let mut p = MyPoint::new(0, 1, 2).unwrap() ;
    // let mut p = MyPoint::new(0, 3, 2).unwrap() ;
    println!("p = ({}, {}, {})", p.get_x(), p.get_y(), p.get_z()) ;
    if p.add(1, 1, 1).is_err() 
    {    eprintln!("Failed to add values to point. ; p = ({}, {}, {})", p.get_x(), p.get_y(), p.get_z()) ; }
    else
    {    println!("p = ({}, {}, {})", p.get_x(), p.get_y(), p.get_z()) ; }
}
