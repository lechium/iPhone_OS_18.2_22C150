//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABEmailAddressContactPredicate
{
}

- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e6807
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000e66ae
- (_Bool)_inputsAreValid;	// IMP=0x00000000000e65a3
- (_Bool)_stringsAreNonEmpty:(id)arg1;	// IMP=0x00000000000e64ad
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000e64a5
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000e649d
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000e6495

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
