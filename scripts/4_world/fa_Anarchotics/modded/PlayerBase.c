nodded class PlayerBas extends ManBase
{
  //Players drug tolerance
  private int fa_methTolerance = 0;
  
  
  //Add to tolerance hy 1
  void AddMethTolerance() 
  {
    fa_methTolerance++;
  };
  
  //Return the players drug tolerance.
  int GetMethTolerance()
  {
    int tolerance = fa_methTolerance;
    return tolerance;
  };
  
  //Return int for meth high lifetime. 
  int FA_CreateMethLifetime()
  {
    int fa_tolerance = GetMethTolerance();
    
    if (fa_tolerance >= 30)
    {
      return 60;
    }
    else if (fa_tolerance >= 25)
    {
      return 120;
    }
    else if (fa_tolerance >= 15)
    {
      return 300;
    }
    else if (fa_tolerance >= 10)
    {
      return 530;
    }
    else
    {
      return 900; //Maximum lifetime
    };
    
  };
  
}