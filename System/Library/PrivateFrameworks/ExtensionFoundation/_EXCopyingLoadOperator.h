//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSItemProvider, NSString;

__attribute__((visibility("hidden")))
@interface _EXCopyingLoadOperator
{
    NSItemProvider *_itemProvider;	// 8 = 0x8
    NSDictionary *_items;	// 16 = 0x10
    CDStruct_4c969caf _destinationProcessAuditToken;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000028948
- (void).cxx_destruct;	// IMP=0x0000000000029792
@property(nonatomic) CDStruct_4c969caf destinationProcessAuditToken; // @synthesize destinationProcessAuditToken=_destinationProcessAuditToken;
@property(retain, nonatomic) NSDictionary *items; // @synthesize items=_items;
@property(nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)_sandboxedResourceForItemIfNeeded:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 error:(id *)arg3;	// IMP=0x0000000000029667
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;	// IMP=0x0000000000029655
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;	// IMP=0x000000000002945a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028cf2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028950
- (id)initWithItemProvider:(id)arg1 destinationProcessAuditToken:(CDStruct_4c969caf)arg2;	// IMP=0x00000000000288ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
