//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (FCAsyncBlockAdditions)
+ (id)fc_throttledCKRequestOperationQueue;	// IMP=0x003000000039fe36
+ (id)fc_prewarmQueue;	// IMP=0x003000000039fda4
+ (id)fc_sharedSerialQueue;	// IMP=0x003000000039fcfd
+ (id)fc_sharedConcurrentQueue;	// IMP=0x003000000039fc6b
- (void)fc_addAsyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f48ae
- (void)fc_addMainThreadOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039fec8
@end

