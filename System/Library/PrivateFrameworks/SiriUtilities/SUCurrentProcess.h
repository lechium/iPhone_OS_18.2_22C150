//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SUIdleTracker;

@interface SUCurrentProcess : NSObject
{
    MISSING_TYPE *mock;	// 8 = 0x8
    MISSING_TYPE *_idleTracker;	// 16 = 0x10
}

+ (id)default;	// IMP=0x004000000002ba1a
- (void).cxx_destruct;	// IMP=0x000000000002bb04
- (id)init;	// IMP=0x000000000002bad1
@property(nonatomic, retain) SUIdleTracker *idleTracker;

@end
