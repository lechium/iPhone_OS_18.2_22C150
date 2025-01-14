//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PRSRankingConfiguration, SPDataDetectorsDataStore;

@interface DDStoreToken : NSObject
{
    _Bool _canceled;	// 8 = 0x8
    SPDataDetectorsDataStore *_store;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000078193
@property _Bool canceled; // @synthesize canceled=_canceled;
@property unsigned long long type; // @synthesize type=_type;
@property(readonly) SPDataDetectorsDataStore *store; // @synthesize store=_store;
- (void)cancel;	// IMP=0x0010000000078132
- (id)initWithStore:(id)arg1;	// IMP=0x00100000000780bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) PRSRankingConfiguration *rankingInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"PRSRankingConfiguration",?,&

@property(readonly) Class superclass;

@end

