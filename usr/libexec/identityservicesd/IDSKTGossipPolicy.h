//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKTGossipPolicySpecification, IDSKVStore, NSDate, NSMutableSet;

@interface IDSKTGossipPolicy : NSObject
{
    IDSKTGossipPolicySpecification *_spec;	// 8 = 0x8
    NSMutableSet *_gossipRecipients;	// 16 = 0x10
    IDSKVStore *_kvStore;	// 24 = 0x18
    NSDate *_lastSelfVerifyDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000002b7364
@property(retain, nonatomic) NSDate *lastSelfVerifyDate; // @synthesize lastSelfVerifyDate=_lastSelfVerifyDate;
@property(retain, nonatomic) IDSKVStore *kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) NSMutableSet *gossipRecipients; // @synthesize gossipRecipients=_gossipRecipients;
@property(retain, nonatomic) IDSKTGossipPolicySpecification *spec; // @synthesize spec=_spec;
- (void)_storeGossipRecipients;	// IMP=0x00100000002b709a
- (void)_loadGossipRecipients;	// IMP=0x00100000002b6b48
- (void)markSelfVerifyBecauseOfPeer;	// IMP=0x00100000002b6b0f
- (_Bool)shouldSelfVerifyBecauseOfPeer;	// IMP=0x00100000002b6a90
- (void)markGossipForURI:(id)arg1;	// IMP=0x00100000002b69a6
- (_Bool)shouldGossipToURI:(id)arg1;	// IMP=0x00100000002b691d
- (_Bool)havePreviouslyGossipedToURI:(id)arg1;	// IMP=0x00100000002b6907
- (void)resetGossipState;	// IMP=0x00100000002b68b2
- (id)initWithGossipSpecification:(id)arg1;	// IMP=0x00100000002b6686

@end
