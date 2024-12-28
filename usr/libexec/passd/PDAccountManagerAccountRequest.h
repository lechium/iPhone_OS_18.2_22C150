//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerAccountRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    _Bool _fetchExtendedAccount;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000052344f
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
// Error: Property attributes should begin with the type ('T') attribute, property name: accountIdentifier
// Property attributes: (null)

@property(nonatomic) _Bool fetchExtendedAccount; // @synthesize fetchExtendedAccount=_fetchExtendedAccount;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithAccount:(id)arg1 error:(id)arg2;	// IMP=0x00100000005231a3
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000523163
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x0010000000522f88
- (id)requestIdentifier;	// IMP=0x0010000000522f0e
- (unsigned long long)requestType;	// IMP=0x0010000000522f03
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x0010000000522e7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
