//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI227AudioHistoryFeedDataManager : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *feedServiceConfigFetcher;	// 24 = 0x18
    MISSING_TYPE *feedService;	// 32 = 0x20
    MISSING_TYPE *headlineService;	// 40 = 0x28
    MISSING_TYPE *readingHistory;	// 80 = 0x50
    MISSING_TYPE *accessQueue;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003477f0
- (id)init;	// IMP=0x0000000000347790
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;	// IMP=0x0000000000347950

@end

