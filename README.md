#Insertion Sort

This algorithm looks familiar to sorting cards in your hand when playing card games. You rearrange them card by card, inserting each item in its proper place. Insertion Sort works best on small arrays (e.g. less then a few hundred items). It is inefficient with large arrays!

When picking a new item to arrange in the table, the first part of the table is already sorted. We could use binary search to find the place where to insert the new item faster. But be aware of duplicate items.