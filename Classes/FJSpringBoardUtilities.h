
//#define DEBUG_LAYOUT

#define CELL_INVISIBLE_TOP_MARGIN 10
#define CELL_INVISIBLE_LEFT_MARGIN 10
#define CELL_DRAGGABLE_ALPHA 0.6

NSMutableArray* nullArrayOfSize(NSUInteger size);

typedef struct {
    NSRange fullIndexRange;
    NSRange indexRangeToAdd;
    NSRange indexRangeToRemove;
} IndexRangeChanges;

IndexRangeChanges indexRangeChangesMake(NSRange total, NSRange added, NSRange removed);

typedef struct {
    NSUInteger index;
    NSUInteger row;
    NSUInteger column;
} CellPosition;

typedef struct {
    NSUInteger index;
    NSUInteger page;
    NSUInteger row;
    NSUInteger column;
} CellPagePosition;