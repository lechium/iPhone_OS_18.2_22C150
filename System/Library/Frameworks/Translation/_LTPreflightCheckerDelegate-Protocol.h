//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/NSObject-Protocol.h>

@class _LTPreflightChecker, _LTPreflightConfiguration;

@protocol _LTPreflightCheckerDelegate <NSObject>

@optional
- (_Bool)isTranslationSupportedOnCurrentDeviceForPreflightChecker:(_LTPreflightChecker *)arg1;
- (void)preflightChecker:(_LTPreflightChecker *)arg1 continueCheckingFromStep:(long long)arg2 forConfiguration:(_LTPreflightConfiguration *)arg3 completion:(void (^)(_LTPreflightConfiguration *, NSError *))arg4;
@end

