//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredChannelContactPredicate : CNPredicate
{
    _Bool _limitOne;	// 24 = 0x18
    NSString *_preferredChannel;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000120838
- (void).cxx_destruct;	// IMP=0x0000000000120f34
@property(nonatomic) _Bool limitOne; // @synthesize limitOne=_limitOne;
@property(copy, nonatomic) NSString *preferredChannel; // @synthesize preferredChannel=_preferredChannel;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000120bbf
- (id)shortDebugDescription;	// IMP=0x0000000000120bb2
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000120a44
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000001209f4
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000001209ec
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000001209e4
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000001209dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012093b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000120840
- (id)initWithPreferredChannel:(id)arg1 limitOne:(_Bool)arg2;	// IMP=0x0000000000120799

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

