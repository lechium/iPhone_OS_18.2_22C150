//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString;

@interface USDeviceActivityBudgetMetadata : NSObject
{
    _Bool _intervalDidStart;	// 8 = 0x8
    NSString *_activity;	// 16 = 0x10
    NSManagedObjectID *_budgetID;	// 24 = 0x18
    NSString *_clientIdentifier;	// 32 = 0x20
    NSString *_extensionIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000002648a
@property(readonly) _Bool intervalDidStart; // @synthesize intervalDidStart=_intervalDidStart;
@property(readonly, copy) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSManagedObjectID *budgetID; // @synthesize budgetID=_budgetID;
@property(readonly, copy) NSString *activity; // @synthesize activity=_activity;
- (id)initWithActivity:(id)arg1 budgetID:(id)arg2 clientIdentifier:(id)arg3 extensionIdentifier:(id)arg4 intervalDidStart:(_Bool)arg5;	// IMP=0x0010000000026309

@end

