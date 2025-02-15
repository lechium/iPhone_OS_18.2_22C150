//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperBoardUI/NSObject-Protocol.h>

@class PBUIExternalDisplayConfiguration, UIColor, _UILegibilitySettings;
@protocol PBUIPosterComponent;

@protocol PBUIPosterComponentDelegate <NSObject>
- (PBUIExternalDisplayConfiguration *)posterComponentExternalDisplayConfiguration:(id <PBUIPosterComponent>)arg1;
- (void)posterComponent:(id <PBUIPosterComponent>)arg1 didUpdateHideDimmingLayer:(_Bool)arg2;
- (void)posterComponent:(id <PBUIPosterComponent>)arg1 didUpdatePreferredProminentColor:(UIColor *)arg2;
- (void)posterComponent:(id <PBUIPosterComponent>)arg1 didUpdateLegibilitySettings:(_UILegibilitySettings *)arg2;
@end

