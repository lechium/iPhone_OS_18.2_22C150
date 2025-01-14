//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShellSceneKit/NSObject-Protocol.h>

@class FBSDisplayConfigurationRequest, SSKDisplayArrangementItem, UIRootSceneWindow;
@protocol SSKDisplayEndpointDelegate;

@protocol SSKDisplayEndpointProviding <NSObject>
@property(nonatomic) __weak id <SSKDisplayEndpointDelegate> delegate;
@property(readonly, nonatomic) UIRootSceneWindow *rootWindow;
@property(readonly, nonatomic) unsigned long long currentDeactivationReasons;
@property(readonly, nonatomic) _Bool hasControlOfDisplay;
@property(nonatomic) SSKDisplayArrangementItem *displayArrangementItem;
@property(retain, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property(readonly, nonatomic) unsigned long long priorityLevel;
@property(nonatomic) _Bool wantsControlOfDisplay;
@end

