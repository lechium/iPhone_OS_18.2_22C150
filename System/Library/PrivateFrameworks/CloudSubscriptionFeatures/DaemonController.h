//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface DaemonController : NSObject
{
    MISSING_TYPE *listener;	// 8 = 0x8
    MISSING_TYPE *requestHandler;	// 16 = 0x10
    MISSING_TYPE *taskLimiters;	// 24 = 0x18
    MISSING_TYPE *urlSession;	// 32 = 0x20
    MISSING_TYPE *geoCache;	// 40 = 0x28
    MISSING_TYPE *configStore;	// 48 = 0x30
    MISSING_TYPE *accountStore;	// 64 = 0x40
    MISSING_TYPE *minimumActivityInterval;	// 72 = 0x48
    MISSING_TYPE *maximumActivityInterval;	// 80 = 0x50
    MISSING_TYPE *failureActivityInterval;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000893b0
- (void)start;	// IMP=0x0000000000084e20
- (id)init;	// IMP=0x00000000000847e0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000896e0

@end

