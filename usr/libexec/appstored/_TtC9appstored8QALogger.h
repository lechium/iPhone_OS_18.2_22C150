//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9appstored8QALogger : NSObject
{
    MISSING_TYPE *ledger;	// 8 = 0x8
    MISSING_TYPE *queue;	// 16 = 0x10
    MISSING_TYPE *logger;	// 0 = 0x0
}

+ (void)displayedSpeedWithThroughput:(id)arg1 logKey:(id)arg2;	// IMP=0x002000000009efa0
+ (void)installWithDuration:(double)arg1 logKey:(id)arg2;	// IMP=0x001000000009eab0
+ (void)linearDownloadWithLogKey:(id)arg1 metrics:(id)arg2 throughputMin:(double)arg3 throughputMax:(double)arg4;	// IMP=0x001000000009e7b0
+ (void)assetWithUrl:(id)arg1 variant:(id)arg2 isDelta:(_Bool)arg3 isParallel:(_Bool)arg4 logKey:(id)arg5;	// IMP=0x001000000009e2e0
+ (id)serializeLedger;	// IMP=0x001000000009deb0
- (void).cxx_destruct;	// IMP=0x00400000000a02c0
- (id)init;	// IMP=0x00100000000a0270

@end

