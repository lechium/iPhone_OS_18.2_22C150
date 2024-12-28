//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CPLUnionCKRecordBuilder : NSObject
{
    NSArray *_builders;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003ebac
@property(readonly, nonatomic) NSArray *builders; // @synthesize builders=_builders;
- (id)recordIDForResourcesOfRecordWithScopedIdentifier:(id)arg1 cloudKitScope:(id *)arg2 error:(id *)arg3;	// IMP=0x001000000003eb15
- (void)requestRecordWithID:(id)arg1 cloudKitScope:(id)arg2 forKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003ea25
- (void)setCKReferenceWithScopedIdentifier:(id)arg1 forKey:(id)arg2 referenceAction:(unsigned long long)arg3;	// IMP=0x001000000003e8b2
- (void)setCKAsset:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000003e680
- (void)setLegacyEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000003e519
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2 validateClass:(Class)arg3;	// IMP=0x001000000003e3a6
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000003e23f
- (id)initWithRecordBuilders:(id)arg1;	// IMP=0x001000000003e1a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
