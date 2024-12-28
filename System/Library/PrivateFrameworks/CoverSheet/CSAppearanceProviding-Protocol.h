//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class NSSet, NSString, _UILegibilitySettings;

@protocol CSAppearanceProviding <NSObject>
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
- (void)conformsToCSAppearanceProviding;
@end
