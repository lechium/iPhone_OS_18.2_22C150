//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8NewsFeed20PuzzleHistoryService : NSObject
{
    MISSING_TYPE *puzzleHistory;	// 8 = 0x8
    MISSING_TYPE *configurationManager;	// 16 = 0x10
    MISSING_TYPE *puzzleService;	// 24 = 0x18
    MISSING_TYPE *puzzleHistoryObservers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000011f3000
- (id)init;	// IMP=0x00000000011f2fa0
- (void)puzzleHistory:(id)arg1 didAddPuzzleItems:(id)arg2 modifiedPuzzleItems:(id)arg3 removedPuzzleItems:(id)arg4;	// IMP=0x00000000011f57c0
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;	// IMP=0x00000000011f5890

@end
