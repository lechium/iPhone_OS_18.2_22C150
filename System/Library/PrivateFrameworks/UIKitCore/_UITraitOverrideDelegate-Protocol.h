//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UITraitOverrides;

@protocol _UITraitOverrideDelegate <NSObject>
- (void)_traitOverridesDidChange:(_UITraitOverrides *)arg1;

@optional
- (void)_traitOverridesWillChange:(_UITraitOverrides *)arg1 withApplicator:(UITraitCollection * (^)(UITraitCollection *))arg2;
@end
