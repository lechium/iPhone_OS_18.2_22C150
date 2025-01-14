//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/NSObject-Protocol.h>

@class LNAction, NSString, NSUUID;

@protocol LNNextActionObserverProtocol <NSObject>
- (void)didReceiveNextAction:(LNAction *)arg1 baseAction:(LNAction *)arg2 forAppWithBundleIdentifier:(NSString *)arg3 associatedLiveActivityIdentifier:(NSString *)arg4;
- (void)observationDidStartWithConnectionUUID:(NSUUID *)arg1;
@end

