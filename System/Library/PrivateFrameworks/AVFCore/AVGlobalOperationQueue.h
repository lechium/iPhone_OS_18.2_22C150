//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface AVGlobalOperationQueue : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
}

+ (id)defaultQueue;	// IMP=0x006000000011e91f
@property(readonly, copy) NSArray *unfinishedOperations;
- (void)enqueueOperation:(id)arg1;	// IMP=0x000000000011ea8d
- (id)description;	// IMP=0x000000000011ea2a
- (void)dealloc;	// IMP=0x000000000011e9ef
- (id)init;	// IMP=0x000000000011e964

@end

