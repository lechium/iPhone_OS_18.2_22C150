//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PRSRankingConfiguration, SPBookmarkDatastore;

@interface SPBookmarkDatastoreToken : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    SPBookmarkDatastore *_store;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003d6f7
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property unsigned long long type; // @synthesize type=_type;
@property(readonly) SPBookmarkDatastore *store; // @synthesize store=_store;
- (void)begin:(id)arg1;	// IMP=0x001000000003c9ca
- (void)cancel;	// IMP=0x001000000003c9c0
- (id)initWithStore:(id)arg1;	// IMP=0x001000000003c94d

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
