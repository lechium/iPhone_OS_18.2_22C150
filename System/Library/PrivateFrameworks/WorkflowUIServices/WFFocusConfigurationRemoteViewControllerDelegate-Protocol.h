//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUIServices/NSObject-Protocol.h>

@class NSString, WFFocusConfigurationRemoteViewController, WFFocusConfigurationUIState;

@protocol WFFocusConfigurationRemoteViewControllerDelegate <NSObject>
- (void)focusConfigurationRemoteViewController:(WFFocusConfigurationRemoteViewController *)arg1 didPressButtonWithIdentifier:(NSString *)arg2 cellFrame:(struct CGRect)arg3;
- (void)focusConfigurationRemoteViewController:(WFFocusConfigurationRemoteViewController *)arg1 configurationUIStateDidChange:(WFFocusConfigurationUIState *)arg2;
@end

