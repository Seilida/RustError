const X_MIN : i32 = -3 ;
const X_MAX : i32 = 3 ;
const Y_MIN : i32 = -3 ;
const Y_MAX : i32 = 3 ;
const Z_MIN : i32 = -3 ;
const Z_MAX : i32 = 3 ;

pub struct MyPoint 
{
    x : i32,
    y : i32,
    z : i32,
}

impl MyPoint 
{
    pub fn new ( x : i32 , y : i32 , z : i32 ) -> Result<MyPoint, ()> 
    {
        if x < X_MIN || x > X_MAX
        {   return Err(()) ; } 
        if y < Y_MIN || y > Y_MAX
        {   return Err(()) ; } 
        if z < Z_MIN || z > Z_MAX 
        {   return Err(()) ; }
        
        return Ok(MyPoint { x , y , z }) ;
    }

    pub fn get_x (&self) -> i32 { return self.x ; }
    pub fn get_y (&self) -> i32 { return self.y ; }
    pub fn get_z (&self) -> i32 { return self.z ; }

    pub fn add_x (&mut self, x: i32) -> Result<(), ()> 
    {
        if self.x + x< X_MIN || self.x + x > X_MAX 
        {   return Err(()) ; }
        self.x += x ;
        return Ok(()) ;
    }

    pub fn add_y (&mut self, y: i32) -> Result<(), ()> 
    {
        if self.y + y< Y_MIN || self.y + y > Y_MAX 
        {   return Err(()) ; }
        self.y += y ;
        return Ok(()) ;
    }

    pub fn add_z (&mut self, z: i32) -> Result<(), ()> 
    {
        if self.z + z< Z_MIN || self.z + z > Z_MAX 
        {   return Err(()) ; }
        self.z += z ;
        return Ok(()) ;
    }

    pub fn add (&mut self, x: i32, y: i32, z: i32) -> Result<(), ()> 
    {
        if self.add_x(x).is_err() || self.add_y(y).is_err() || self.add_z(z).is_err()
        {   return Err(()) ; }
        else 
        {   return Ok(()) ; }
    }
}