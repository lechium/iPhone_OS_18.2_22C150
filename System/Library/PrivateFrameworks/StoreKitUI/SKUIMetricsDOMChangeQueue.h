//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIMetricsDOMChangeQueue : NSObject
{
    NSMutableArray *_storage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b70dc
- (id)oldestPendingChange;	// IMP=0x00000000001b7072
- (void)addPendingChange:(id)arg1;	// IMP=0x00000000001b6e99
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)init;	// IMP=0x00000000001b6db8

@end

