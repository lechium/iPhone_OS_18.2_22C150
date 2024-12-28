//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSSearch, NSArray, NSCondition, NSString;

@interface TIMailDataSource : NSObject
{
    _Bool _valid;	// 8 = 0x8
    MSSearch *_search;	// 16 = 0x10
    TIMailDataSource *_strongSelf;	// 24 = 0x18
    NSCondition *_cond;	// 32 = 0x20
    NSArray *_outgoingMessages;	// 40 = 0x28
}

+ (id)searchCriterionForSenderAddresses:(id)arg1;	// IMP=0x002000000000ab02
- (void).cxx_destruct;	// IMP=0x002000000000b6a0
@property(copy, nonatomic) NSArray *outgoingMessages; // @synthesize outgoingMessages=_outgoingMessages;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) NSCondition *cond; // @synthesize cond=_cond;
@property(retain, nonatomic) TIMailDataSource *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain, nonatomic) MSSearch *search; // @synthesize search=_search;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x001000000000b4db
- (_Bool)search:(id)arg1 didFindResults:(id)arg2;	// IMP=0x001000000000b185
- (id)nextOutgoingMessageBatch;	// IMP=0x001000000000b02e
- (void)searchMailWithSenderAddresses:(id)arg1;	// IMP=0x001000000000ae7e
- (void)searchAccounts:(id)arg1;	// IMP=0x001000000000a901
- (void)initializeSearchIfNecessary;	// IMP=0x001000000000a624
- (id)init;	// IMP=0x001000000000a5ca
- (void)dealloc;	// IMP=0x001000000000a570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
