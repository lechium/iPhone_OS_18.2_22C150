//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol SBSAccidentalActivationMitigationSessionClientToServerInterface <NSObject>
- (oneway void)requestSessionCancellation;
- (oneway void)activateSessionForBundleIdentifier:(NSString *)arg1 durationNum:(NSNumber *)arg2 accidentalActivationMitigationSessionCancellationPolicyClassName:(NSString *)arg3;
@end
