//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/SBSLockScreenContentAction.h>

@class SBApplicationSceneEntity;
@protocol CSHostableEntity;

@interface SBSLockScreenContentAction (SupportedInterfaceOrientations)
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00300000006a590c
- (_Bool)specifiesSupportedInterfaceOrientations;	// IMP=0x00300000006a58f3
@property(retain, nonatomic) id <CSHostableEntity> hostableEntity;
@property(retain, nonatomic) SBApplicationSceneEntity *applicationSceneEntity;
- (_Bool)isInProcessAction;	// IMP=0x00300000009d8653
@end

