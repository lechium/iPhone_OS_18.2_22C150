//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSArray, NSString;

@interface NSError (HMFError)
+ (id)hmfUnspecifiedError;	// IMP=0x001000000002d3c0
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x001000000002d39a
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;	// IMP=0x001000000002d129
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3;	// IMP=0x001000000002d114
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2;	// IMP=0x001000000002d0ff
+ (id)hmfErrorWithCode:(long long)arg1;	// IMP=0x001000000002d0eb
+ (id)hmf_errorWithException:(id)arg1;	// IMP=0x001000000002ce3b
+ (id)shortDescription;	// IMP=0x0010000000068ea2
+ (id)hmf_unarchiveFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000068e35
@property(readonly, nonatomic, getter=isHMFError) _Bool hmfError;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;
@end

