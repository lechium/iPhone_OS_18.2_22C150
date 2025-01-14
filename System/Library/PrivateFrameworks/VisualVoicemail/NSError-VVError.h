//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (VVError)
+ (id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3;	// IMP=0x0060000000001b44
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;	// IMP=0x0060000000001a80
- (_Bool)shouldPresentErrorForTaskType:(long long)arg1;	// IMP=0x0010000000002241
- (_Bool)isSecurityError;	// IMP=0x00100000000021c7
- (_Bool)isServerError;	// IMP=0x0010000000002142
- (_Bool)isConnectivityError;	// IMP=0x0010000000002017
- (_Bool)isInvalidSubscriberError;	// IMP=0x0010000000001fa1
- (_Bool)isNewPasswordError;	// IMP=0x0010000000001f24
- (_Bool)isExpiredPasswordError;	// IMP=0x0010000000001ead
- (_Bool)isPasswordMismatchError;	// IMP=0x0010000000001e30
- (_Bool)isStreamDomain:(long long)arg1 error:(int)arg2;	// IMP=0x0010000000001cf3
- (_Bool)isEqualToError:(id)arg1;	// IMP=0x0010000000001c38
@end

