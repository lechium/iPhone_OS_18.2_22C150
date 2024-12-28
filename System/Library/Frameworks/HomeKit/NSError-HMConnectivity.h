//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HMConnectivity)
+ (id)hm_errorWithNWError:(id)arg1;	// IMP=0x002000000002bfdd
+ (id)hmPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x002000000027c223
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x002000000027c205
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x002000000027c1df
+ (id)hmPrivateErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x002000000027c1b9
+ (id)hmPrivateErrorWithCode:(long long)arg1;	// IMP=0x002000000027c193
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x002000000027c0b8
+ (id)hmInternalErrorWithCode:(long long)arg1;	// IMP=0x002000000027c09d
+ (id)hmInternallErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x002000000027c077
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x002000000027c051
+ (id)hmErrorWithCode:(long long)arg1;	// IMP=0x002000000027c036
+ (id)hmInternalErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;	// IMP=0x002000000027c013
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;	// IMP=0x002000000027bff0
+ (id)hmInternalErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x002000000027bf73
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x002000000027bef6
+ (id)_hmUserInfoForDescription:(id)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;	// IMP=0x002000000027bc7c
+ (id)hmStringFromErrorCode:(long long)arg1;	// IMP=0x002000000027b308
@property(readonly, copy, nonatomic) NSError *hmPublicError;
@property(readonly, nonatomic, getter=isHMError) _Bool hmError;
@end
