//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSNumber, NSSet, NSString;
@protocol __NSString__;

@protocol SBUIContinuitySessionServiceServerToClientInterface <NSObject>
- (oneway void)didUpdateCurrentInterfaceOrientation:(NSNumber *)arg1 supportedInterfaceOrientations:(NSNumber *)arg2;
- (oneway void)didUpdateContinuitySessionStep:(NSNumber *)arg1 reasons:(NSSet<__NSString__> *)arg2;
- (oneway void)didSetDisplayHardwareIdentifier:(NSString *)arg1;
@end

