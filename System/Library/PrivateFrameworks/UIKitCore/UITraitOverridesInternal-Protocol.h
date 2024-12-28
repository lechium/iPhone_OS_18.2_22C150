//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UIMutableTraitsInternal-Protocol.h>
#import <UIKitCore/UITraitOverrides-Protocol.h>

@class NSObject;
@protocol UITraitOverridesInternal, _UITraitTokenProtocol;

@protocol UITraitOverridesInternal <UITraitOverrides, UIMutableTraitsInternal, NSObject>
- (void)_replaceWithOverrides:(id <UITraitOverridesInternal>)arg1;
- (NSObject<UITraitOverridesInternal> *)_swiftImplCopy;
- (void)_removeTraitToken:(id <_UITraitTokenProtocol>)arg1;
- (_Bool)_containsTraitToken:(id <_UITraitTokenProtocol>)arg1;
@end
