//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIFloatingTabBar;

__attribute__((visibility("hidden")))
@interface _UIFloatingTabBarCustomizationProxy : NSObject
{
    _UIFloatingTabBar *_floatingTabBar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001996c5c
- (void)removeFavoriteTab:(id)arg1;	// IMP=0x0000000001996bb7
- (void)insertFavoriteTab:(id)arg1;	// IMP=0x0000000001996afd
- (_Bool)canInsertFavoriteTab:(id)arg1;	// IMP=0x00000000019969e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
