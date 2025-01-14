//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MANAutoAssetSetPolicy, NSString;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetInfoDesire : NSObject
{
    _Bool _awaitDownloadingOfDiscovered;	// 8 = 0x8
    _Bool _downloadProgressDesired;	// 9 = 0x9
    MANAutoAssetSetPolicy *_clientAssetSetPolicy;	// 16 = 0x10
    NSString *_desireReason;	// 24 = 0x18
    long long _checkWaitTimeoutSecs;	// 32 = 0x20
    long long _lockWaitTimeoutSecs;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001c2a75
- (void).cxx_destruct;	// IMP=0x00000000001c30dc
@property(readonly, nonatomic) _Bool downloadProgressDesired; // @synthesize downloadProgressDesired=_downloadProgressDesired;
@property(readonly, nonatomic) long long lockWaitTimeoutSecs; // @synthesize lockWaitTimeoutSecs=_lockWaitTimeoutSecs;
@property(readonly, nonatomic) long long checkWaitTimeoutSecs; // @synthesize checkWaitTimeoutSecs=_checkWaitTimeoutSecs;
@property(readonly, nonatomic) _Bool awaitDownloadingOfDiscovered; // @synthesize awaitDownloadingOfDiscovered=_awaitDownloadingOfDiscovered;
@property(readonly, retain, nonatomic) NSString *desireReason; // @synthesize desireReason=_desireReason;
@property(readonly, retain, nonatomic) MANAutoAssetSetPolicy *clientAssetSetPolicy; // @synthesize clientAssetSetPolicy=_clientAssetSetPolicy;
- (id)summary;	// IMP=0x00000000001c2b92
- (id)description;	// IMP=0x00000000001c2b80
- (id)copy;	// IMP=0x00000000001c2a7d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c2937
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c27fb
- (id)initForClientAssetSetPolicy:(id)arg1 reasonDesired:(id)arg2 awaitingDownloadOfDiscovered:(_Bool)arg3 withCheckWaitTimeout:(long long)arg4 withLockWaitTimeout:(long long)arg5 desiringProgress:(_Bool)arg6;	// IMP=0x00000000001c273c

@end

