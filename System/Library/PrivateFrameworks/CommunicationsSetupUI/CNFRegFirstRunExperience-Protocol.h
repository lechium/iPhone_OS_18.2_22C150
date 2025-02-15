//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class CNFRegController, IMAccount, UIBarButtonItem;
@protocol CNFRegFirstRunDelegate;

@protocol CNFRegFirstRunExperience <NSObject>
@property(retain, nonatomic) UIBarButtonItem *customRightButton;
@property(retain, nonatomic) UIBarButtonItem *customLeftButton;
@property(readonly, nonatomic) long long currentAppearanceStyle;
@property(nonatomic) id <CNFRegFirstRunDelegate> delegate;
- (id)initWithRegController:(CNFRegController *)arg1 account:(IMAccount *)arg2;
@end

