//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSObject, SKUIClientContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUILoadGratisEligibilityOperation : NSOperation
{
    NSArray *_bundleIDs;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CDUnknownBlockType _outputBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000362a08
- (id)_bodyData;	// IMP=0x0000000000362911
- (void)main;	// IMP=0x000000000036216e
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;	// IMP=0x0000000000361dfb
- (id)init;	// IMP=0x0000000000361d9f

@end

