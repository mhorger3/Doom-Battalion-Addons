if (isNil "DB101_NextID") then { DB101_NextID = 0 };

private _nextID = format ["DB101_%1", DB101_NextID];

DB101_NextID = DB101_NextID + 1;
publicVariable "DB101_NextID";

_nextID
