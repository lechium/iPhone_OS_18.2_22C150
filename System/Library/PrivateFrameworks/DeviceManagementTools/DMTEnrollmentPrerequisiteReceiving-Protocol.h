//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagementTools/NSObject-Protocol.h>

@class DMTNetworkCredential, NSData, NSString;

@protocol DMTEnrollmentPrerequisiteReceiving <NSObject>
- (void)setNetworkCredential:(DMTNetworkCredential *)arg1 networkPayload:(NSData *)arg2 enrollmentNonce:(NSString *)arg3 postEnrollmentBehavior:(long long)arg4 organizationName:(NSString *)arg5 organizationType:(long long)arg6 mdmServerName:(NSString *)arg7 networkConfiguration:(long long)arg8;
@end
