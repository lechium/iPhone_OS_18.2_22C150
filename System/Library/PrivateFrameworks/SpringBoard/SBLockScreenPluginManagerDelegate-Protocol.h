//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBLockScreenPlugin, SBLockScreenPluginAction, SBLockScreenPluginManager;

@protocol SBLockScreenPluginManagerDelegate <NSObject>
- (_Bool)pluginManager:(SBLockScreenPluginManager *)arg1 plugin:(SBLockScreenPlugin *)arg2 handleAction:(SBLockScreenPluginAction *)arg3;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 displayedPluginDidChangeFromPlugin:(SBLockScreenPlugin *)arg2 toPlugin:(SBLockScreenPlugin *)arg3;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 displayedPluginDidUpdateAppearance:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 activePluginDidChange:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 willUnloadPlugin:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 didLoadPlugin:(SBLockScreenPlugin *)arg2;
@end

