class Params
{
    #include "\a3\functions_f\Params\paramWeather.hpp"
    #include "\a3\functions_f\Params\paramDaytimePeriod.hpp"

    class RespawnDelay
    {
        title = $STR_SAD_respawnDelay;
        values[] = {15, 30, 60, 90, 120};
        default = 15;
    };

    class RespawnVehicleDelay
    {
        title = $STR_SAD_respawnVehicleDelay;
        values[] = {15, 30, 60, 90};
        default = 60;
    };

    class NeededCaches
    {
        title = $STR_SAD_neededCaches;
        values[] = {2, 4, 5, 6};
        default = 6;
    };

    class MaxCacheGroups
    {
        title = $STR_SAD_maxCacheGroups;
        values[] = {3, 5, 7, 9};
        default = 5;
    };
};