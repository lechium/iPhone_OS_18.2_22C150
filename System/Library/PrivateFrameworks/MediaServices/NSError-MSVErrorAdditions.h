//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (MSVErrorAdditions)
+ (id)_msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 underlyingErrors:(id)arg4 userInfo:(id)arg5 debugDescriptionFormat:(id)arg6 arguments:(struct __va_list_tag [1])arg7;	// IMP=0x002000000002896f
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;	// IMP=0x00200000000288ad
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 debugDescription:(id)arg4;	// IMP=0x00200000000287f0
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;	// IMP=0x0020000000028731
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0020000000028671
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;	// IMP=0x00200000000285b7
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x00200000000284f6
+ (id)MSVErrorWithMissingDependencies:(id)arg1;	// IMP=0x0020000000028c10
+ (id)MSVErrorWithMissingDependency:(id)arg1;	// IMP=0x0020000000028b50
@property(readonly, nonatomic) NSString *msv_signature;
- (id)msv_analyticSignature;	// IMP=0x0010000000026f63
@property(readonly, nonatomic) NSError *msv_underlyingError;
- (id)msv_description;	// IMP=0x001000000002695c
- (id)msv_codeDescription;	// IMP=0x00100000000267a8
- (id)msv_firstValueForUserInfoKey:(id)arg1;	// IMP=0x00100000000265c7
- (id)msv_errorByUnwrappingDomain:(id)arg1 code:(long long)arg2;	// IMP=0x0010000000026393
- (id)msv_errorByUnwrappingDomain:(id)arg1;	// IMP=0x0010000000026186
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x001000000002604f
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x0010000000025f26
- (id)msv_errorByRemovingUnsafeUserInfo;	// IMP=0x0010000000025ccf
@end
