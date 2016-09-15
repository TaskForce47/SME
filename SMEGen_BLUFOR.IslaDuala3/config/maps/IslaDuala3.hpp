class IslaDuala3 : base_map {
  class base_town_tak : base_town		{ size[] = { 250, 250 }; };
  class base_mil_tak : base_mil		{ size[] = { 150, 150 }; };
  class base_comp_tak : base_comp		{ size[] = { 100, 100 }; };

  class town_timurkalay : base_town_tak {
    scope = 1;
    name = "Timurkalay";
    marker = "site_town_timurkalay";
    position[] = { 8911.36, 5320.67, 0 };
  };
};
