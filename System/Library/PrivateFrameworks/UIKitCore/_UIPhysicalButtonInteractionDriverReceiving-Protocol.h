//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIPhysicalButtonAction, _UIPhysicalButtonConfigurationSet;
@protocol _UIPhysicalButtonInteractionDriving;

@protocol _UIPhysicalButtonInteractionDriverReceiving <NSObject>
@property(readonly, copy, nonatomic) _UIPhysicalButtonConfigurationSet *_configurationSet;
- (void)_driver:(id <_UIPhysicalButtonInteractionDriving>)arg1 didCreateProposedAction:(_UIPhysicalButtonAction *)arg2;
@end

