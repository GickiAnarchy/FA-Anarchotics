class FA_Hat extends BaseballCap_ColorBase
{
  // Static constant typenames
  static const typename HAT_WARPED = WarpedWatersHat;
  static const typename HAT_POISON = CompletelyPoisonHat;
  static const typename HAT_BLUR = BlurSodaHat;
};

class WarpedWatersHat : FA_Hat{};
class CompletelyPoisonHat : FA_Hat{};
class BlurSodaHat : FA_Hat{};
