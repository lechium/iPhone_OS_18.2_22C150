//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC4Maps17LibraryItemsCount;

@interface _TtC4Maps33HomeListLibraryCountsDataProvider : NSObject
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *hasInitialData;	// 16 = 0x10
    MISSING_TYPE *active;	// 17 = 0x11
    MISSING_TYPE *countsManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000099230
- (id)init;	// IMP=0x00100000000991d0
- (void)libraryItemsCountManager:(id)arg1 didUpdateCounts:(id)arg2;	// IMP=0x0010000000099160
- (void)notifyObserversIfNeeded;	// IMP=0x0010000000099130
- (id)initWithCountsManager:(id)arg1;	// IMP=0x0010000000098e30
@property(nonatomic, readonly) _TtC4Maps17LibraryItemsCount *counts;
@property(nonatomic) _Bool active; // @synthesize active;
@property(nonatomic) _Bool hasInitialData; // @synthesize hasInitialData;
@property(nonatomic, readonly) id observers; // @synthesize observers;

@end

