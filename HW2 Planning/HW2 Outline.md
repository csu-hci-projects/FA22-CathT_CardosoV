## IDEA 1: VR Survival/crafting game loosely based on the fable of the three little pigs.
### Rough outline:
*	Player wakes up on an abandoned farm.
*	Player has to survive by managing stats like hunger, thirst, cold, etc.
*	Game has day/night cycles:
    -	During day thirst increases more quickly.
    -	During night cold increases more quickly.
    -	Hunger increases when player moves/performs actions
*	At night the “Big Bad Wolf” roams the farm. Player has to avoid him/scare him off.
*	Player will need to find food to reduce hunger:
    -	Pick apples from trees.
    -	Pick corn from fields.
    -	Fish in stream.
    - 	Etc.
*	Player will need to find water to reduce thirst (from well, stream, etc.).
*	Player will need to find materials to build shelter, make tools, build a fire, etc.
    -	First available material will be **straw**:
        *	Can be taken from straw piles/hay bales around farm.
        *	Can be used to make “**Small Fire**”.
            -	Goes out quickly if not given more straw.
            -	Provides small amount of warmth (reduces cold buildup) if player stays close.
            -	Doesn’t scare off Wolf.
            -	Can’t cook food.
        *	Can be used to build “**Straw Hut**".
            -	Provides small amount of shelter (reduced cold and thirst buildup).
            -	Can be easily Blown Down (destroyed) by Wolf.
        *	Can be woven into rope
    -	Second material is **twigs**:
        *	Can be found on ground around trees.
        *	Can be cut from logs once tool (axe) is available.
        *	Can be used to make “**Bonfire**” (combined with straw).
            -	Goes out less quickly than Small Fire, needs more twigs less often.
            -	Provides moderate warmth.
            -	Scares off Wolf at moderate distance.
            -	Can cook food.
        *	Can be used to build “**Twig Lean-To**”
            -	Provides moderate shelter.
            -	Less easily Blown Down.
        *	Can make multiple tools:
            -	Fishing rod (combined with rope)
            -	Torch (combined with rope and straw), can scare off Wolf
            -	Ladder (to pick apples)
            -	Basket/bucket
            -	Wooden pick
            -	Etc.
    -	Third (last) material is **stone**:
        *	Can be collected on the ground or dislodged from abandoned structures.
        *	Can be used to make “**Fire Pit**” (combined with twigs and straw):
            -	Lasts a long time without adding twigs.
            -	Provides a lot of warmth.
            -	Scares off Wolf at great distance
            -	Can cook food
        *	Can be used to build “**Small Stone House**” (combined with twigs).
            -	Provides a lot of shelter.
            -	Can’t be Blown Down.
        *	Can make more tools:
            -	Stone axe (combined with twigs)
            -	Stone hammer (combined with twigs)
            -	Etc.

*	Game is lost if player reaches maximum hunger, thirst, or cold
*	Maximum values of hunger, thirst, and cold can decrease/increase based on game difficulty.
*	Game is lost if player is caught by Big Bad Wolf.
*	Game is won if player builds x number of fire pits (determined by game difficulty) and keeps them burning through a full night.

There are a lot of useful free asset packs available in the Epic Marketplace that would work with this theme. I downloaded a few of them, but haven’t loaded them into UE5 yet.
