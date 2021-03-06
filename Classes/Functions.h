
#import <Foundation/Foundation.h>

#pragma mark -
#pragma mark paths

static inline NSString* documentsDirectory(){
    
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    
}

static inline NSString* cachesDirectory(){
    
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject];
    
}


static inline NSString* fileNameBasedOnCurrentTime() {
	NSString* fileName = [NSString stringWithFormat: @"%.0f.%@", [NSDate timeIntervalSinceReferenceDate] * 1000.0, @"png"];
	return fileName;
}


BOOL addSkipBackupAttributeToItemAtURL(NSURL *URL);

#pragma mark -
#pragma mark size

NSUInteger sizeOfFolderContentsInBytes(NSString* folderPath);
double megaBytesWithBytes(long long bytes);


#pragma mark -
#pragma mark time

float nanosecondsWithSeconds(float seconds);
dispatch_time_t dispatchTimeFromNow(float seconds);

static inline NSString* timeZoneString(){
    NSTimeZone* ltz = [NSTimeZone localTimeZone];
    NSString* abbreviation = [ltz abbreviation];
    return abbreviation;
}


#pragma mark -
#pragma mark NSRange

BOOL rangesAreContiguous(NSRange first, NSRange second);

NSRange rangeWithFirstAndLastIndexes(NSUInteger first, NSUInteger last);


#pragma mark -
#pragma mark Dispatch Help

void dispatchOnMainQueue(dispatch_block_t block);
void dispatchOnMainQueueAfterDelayInSeconds(float delay, dispatch_block_t block);

void dispatchAfterDelayInSeconds(float delay, dispatch_queue_t queue, dispatch_block_t block);


#pragma mark -
#pragma mark Progress

typedef struct {
    unsigned long long complete;
    unsigned long long total;
    double ratio;
} Progress;

Progress progressMake(unsigned long long complete, unsigned long long total);
extern Progress const kProgressZero;

